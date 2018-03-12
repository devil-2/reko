﻿#region License
/* 
 * Copyright (C) 1999-2018 John Källén.
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
 
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Reko.Core.Configuration
{
    /// <summary>
    /// Contains processor-specific settings for a particular 
    /// platform.
    /// </summary>
    public interface IPlatformArchitectureElement
    {
        string Name { get; }
        List<string> TrashedRegisters { get; }
        List<ITypeLibraryElement> TypeLibraries { get; }
    }

    public class PlatformArchitectureElement : IPlatformArchitectureElement
    {
        public PlatformArchitectureElement()
        {
            this.TrashedRegisters = new List<string>();
            this.TypeLibraries = new List<ITypeLibraryElement>();
        }

        public string Name { get; set; }
        public List<string> TrashedRegisters { get; internal set; }
        public List<ITypeLibraryElement> TypeLibraries { get; internal set; }
    }
}
