#region License
/* 
* Copyright (C) 1999-2015 John Källén.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2, or (at your option)
* any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; see the file COPYING.  If not, write to
* the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
*/
#endregion

using Reko.Core;
using Reko.Gui.Forms;
using Reko.Gui.Windows.Forms;
using System;
using System.Windows.Forms;

namespace Reko.Gui.Windows
{
	public class WindowsFormsDialogFactory : IDialogFactory
	{
        private IServiceProvider services;
        private Form syncForm;  // used _only_ to make sure forms are created on the UI thread for Mono compatibility.

		public WindowsFormsDialogFactory(IServiceProvider services)
		{
            this.services = services;
            // Note: this constructor must run on the main, UI thread under Mono, as the FAQ states:
            // http://www.mono-project.com/docs/faq/winforms/
            // Mono’s implementation of WinForms does not support Forms or Controls being created on multiple threads. 
            // All Forms/Controls must be created on the same thread.
            this.syncForm = new Form();     // this form is never shown.
            this.syncForm.Visible = false;
            this.syncForm.CreateControl();
        }

        public IAddressPromptDialog CreateAddressPromptDialog()
		{
			return new AddressPromptDialog();
		}

        public IAssembleFileDialog CreateAssembleFileDialog()
        {
            return new AssembleFileDialog
            {
                Services = services
            };
        }

        public IAssumedRegisterValuesDialog CreateAssumedRegisterValuesDialog(
            IProcessorArchitecture arch)
        {
            return new AssumedRegisterValuesDialog
            {
                Architecture = arch,
            };
        }

        public IFindStringsDialog CreateFindStringDialog()
        {
            return new FindStringsDialog();
        }

        public IMainForm CreateMainForm()
        {
            return new MainForm();
        }

        public IOpenAsDialog CreateOpenAsDialog()
        {
            return new OpenAsDialog
            {
                Services = services,
            };
        }

        public IProgramPropertiesDialog CreateProgramPropertiesDialog(Program program)
        {
            return new ProgramPropertiesDialog
            {
                Services = services,
                Program = program,
            };
        }

        public IResourceEditor CreateResourceEditor()
        {
            return new ResourceEditor();
        }

        public ISearchDialog CreateSearchDialog()
        {
            return new SearchDialog()
            {
				Services = services,
            };
        }

        public IUserPreferencesDialog CreateUserPreferencesDialog()
        {
            return new UserPreferencesDialog
            {
                Services = services,
            };
        }

        public IWorkerDialog CreateWorkerDialog()
        {
            if (syncForm.InvokeRequired)
            {
                IWorkerDialog dlg = null;
                syncForm.Invoke(new Action(() =>
                {
                    dlg = new WorkerDialog();
                }));
                return dlg;
            }
            else
            { 
                return new WorkerDialog();
            }
        }
    }
}

