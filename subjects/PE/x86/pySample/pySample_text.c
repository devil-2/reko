// pySample_text.c
// Generated by decompiling pySample.dll
// using Reko decompiler version 0.9.1.0.

#include "pySample_text.h"

// 10001000: Register (ptr32 Eq_n) fn10001000(Stack (ptr32 Eq_n) ptrArg04, Stack (ptr32 Eq_n) ptrArg08)
PyObject * fn10001000(PyObject * ptrArg04, PyObject * ptrArg08)
{
	PyObject * eax_n = PyArg_ParseTuple(ptrArg08, "ii:sum", fp - 0x04, fp - 0x08);
	if (eax_n != null)
		return Py_BuildValue("i", dwLoc04 + dwLoc08);
	return eax_n;
}

// 10001050: Register (ptr32 Eq_n) fn10001050(Stack (ptr32 Eq_n) ptrArg04, Stack (ptr32 Eq_n) ptrArg08)
PyObject * fn10001050(PyObject * ptrArg04, PyObject * ptrArg08)
{
	PyObject * eax_n = PyArg_ParseTuple(ptrArg08, "ii:dif", fp - 0x08, fp - 0x04);
	if (eax_n != null)
		return Py_BuildValue("i", dwLoc08 - dwLoc04);
	return eax_n;
}

// 100010A0: Register (ptr32 Eq_n) fn100010A0(Stack (ptr32 Eq_n) ptrArg04, Stack (ptr32 Eq_n) ptrArg08)
PyObject * fn100010A0(PyObject * ptrArg04, PyObject * ptrArg08)
{
	PyObject * eax_n = PyArg_ParseTuple(ptrArg08, "ii:div", fp - 0x08, fp - 0x04);
	if (eax_n != null)
		return Py_BuildValue("i", (int32) ((int64) dwLoc08 / dwLoc04));
	return eax_n;
}

// 100010F0: Register (ptr32 Eq_n) fn100010F0(Stack (ptr32 Eq_n) ptrArg04, Stack (ptr32 Eq_n) ptrArg08)
PyObject * fn100010F0(PyObject * ptrArg04, PyObject * ptrArg08)
{
	PyObject * eax_n = PyArg_ParseTuple(ptrArg08, "ff:fdiv", fp - 0x08, fp - 0x04);
	if (eax_n != null)
		return Py_BuildValue("f", (real64) rLoc08 / rLoc04);
	return eax_n;
}

// 10001170: void initpySample()
void initpySample()
{
	Py_InitModule4("pySample", globals->methods, null, null, 1007);
}

// 100011E9: Register word32 fn100011E9(Stack word32 dwArg04, Stack word32 dwArg08, Stack Eq_n dwArg0C, Register out (ptr32 word32) ecxOut, Register out ptr32 edxOut, Register out ptr32 ebxOut, Register out ptr32 esiOut, Register out ptr32 ediOut)
word32 fn100011E9(word32 dwArg04, word32 dwArg08, Eq_n dwArg0C, word32 & ecxOut, ptr32 & edxOut, ptr32 & ebxOut, ptr32 & esiOut, ptr32 & ediOut)
{
	word32 eax_n;
	Eq_n ebp_n = 0x00;
	if (dwArg08 == 0x00)
	{
		if (globals->dw10003070 <= 0x00)
		{
			eax_n = 0x00;
			goto l10001384;
		}
		--globals->dw10003070;
	}
	ecx = *adjust_fdiv;
	globals->ptr100033A4 = ecx;
	ptr32 * esp_n = fp - 16;
	if (dwArg08 == 0x01)
	{
		Eq_n edi_n = fs->ptr0018->t0004;
		while (true)
		{
			Eq_n eax_n = InterlockedCompareExchange(&globals->t100033AC, edi_n, 0x00);
			if (eax_n == 0x00)
				break;
			if (eax_n == edi_n)
			{
				ebp_n = 0x01;
				break;
			}
			Sleep(1000);
		}
		if (globals->dw100033A8 != 0x00)
			_amsg_exit(0x1F);
		globals->dw100033A8 = 0x01;
		ecx = &globals->dw100020A8;
		esp_n = fp - 16;
		if (_initterm_e(&globals->t100020A0, &globals->dw100020A8) != 0x00)
		{
			eax_n = 0x00;
l10001381:
			struct Eq_n * esp_n = esp_n + 1;
			edi = *esp_n;
			esi = esp_n->ptr0000;
			ebx = esp_n->ptr0004;
l10001384:
			ecxOut = ecx;
			edxOut = edx;
			ebxOut = ebx;
			esiOut = esi;
			ediOut = edi;
			return eax_n;
		}
		_initterm(&globals->t10002098, &globals->t1000209C);
		globals->dw100033A8 = 0x02;
		ecx = &globals->t1000209C;
		if (ebp_n == 0x00)
			InterlockedExchange(&globals->t100033AC, ebp_n);
		esp_n = fp - 16;
		if (globals->ptr100033B8 != null)
		{
			ecx = &globals->ptr100033B8;
			esp_n = fp - 16;
			word32 edi_n;
			if (fn10001742(InterlockedCompareExchange, 268448684, 0x02, out edx, out edi_n) != 0x00)
				globals->ptr100033B8();
		}
		++globals->dw10003070;
	}
	else if (dwArg08 == 0x00)
	{
		while (InterlockedCompareExchange(&globals->t100033AC, 0x01, 0x00) != 0x00)
			Sleep(1000);
		if (globals->dw100033A8 != 0x02)
			_amsg_exit(0x1F);
		word32 * v15_n = globals->ptr100033B4;
		word32 * eax_n = _decode_pointer(v15_n);
		ecx = v15_n;
		ptr32 esp_n = fp - 16;
		if (eax_n != null)
		{
			ptr32 esp_n = fp - 16;
			word32 * edi_n = _decode_pointer(globals->ptr100033B0);
			while (true)
			{
				ptr32 edx_n;
				edi_n -= 0x04;
				if (edi_n < eax_n)
					break;
				<anonymous> * eax_n = *edi_n;
				if (eax_n != null)
				{
					word32 ecx_n;
					eax_n();
					edx = edx_n;
				}
			}
			word32 ** esp_n = esp_n - 4;
			*esp_n = eax_n;
			free(*esp_n);
			ecx = *esp_n;
			word32 * eax_n = _encoded_null();
			globals->ptr100033B0 = eax_n;
			globals->ptr100033B4 = eax_n;
			esp_n = (char *) esp_n + 4;
		}
		LONG * esp_n = esp_n - 4;
		*esp_n = (int32) 0x00;
		*(esp_n - 4) = 268448684;
		globals->dw100033A8 = 0x00;
		InterlockedExchange(*(esp_n - 4), *esp_n);
		esp_n = (ptr32 *) (esp_n + 1);
	}
	eax_n = 0x01;
	goto l10001381;
}

// 10001388: Register word32 fn10001388(Register Eq_n ecx, Register Eq_n edx, Register (ptr32 Eq_n) ebx, Register ptr32 esi, Register word32 edi)
word32 fn10001388(Eq_n ecx, Eq_n edx, Eq_n (* ebx)(LONG *, Eq_n, Eq_n), ptr32 esi, word32 edi)
{
	struct Eq_n * ebp_n = fn100017E8(ebx, esi, edi, dwLoc0C, 0x10);
	Eq_n ebx_n = ebp_n->t0008;
	*(ebp_n - 0x1C) = 0x01;
	*(ebp_n - 0x04) = 0x00;
	globals->t10003008 = edx;
	*(ebp_n - 0x04) = 0x01;
	struct Eq_n * esp_n = fp - 8;
	Eq_n edi_n = ecx;
	Eq_n esi_n = edx;
	if (edx == 0x00 && globals->dw10003070 == 0x00)
	{
		*(ebp_n - 0x1C) = 0x00;
		goto l1000147A;
	}
	if (edx == 0x01 || edx == 0x02)
	{
		if (globals->dw100020CC != 0x00)
		{
			word32 eax_n;
			fn00000000();
			*(ebp_n - 0x1C) = eax_n;
			dwLoc0C = ecx;
		}
		if (*(ebp_n - 0x1C) == 0x00)
		{
l1000147A:
			*(ebp_n - 0x04) &= 0x00;
			*(ebp_n - 0x04) = ~0x01;
			fn10001493();
			word32 eax_n = *(ebp_n - 0x1C);
			fn1000182D(ebp_n, esp_n->tFFFFFFFC);
			return eax_n;
		}
		LPVOID * esp_n = esp_n - 4;
		*esp_n = (LPVOID *) ecx;
		*(esp_n - 4) = (uint32) edx;
		*(esp_n - 8) = (_onexit_t *) ebx_n;
		word32 edx_n;
		word32 ecx_n;
		ui32 eax_n = fn100011E9(*(esp_n - 8), *(esp_n - 4), *esp_n, out ecx_n, out edx_n, out ebx_n, out esi_n, out edi_n);
		*(ebp_n - 0x1C) = eax_n;
		esp_n = (struct Eq_n *) ((char *) esp_n + 4);
		if (eax_n == 0x00)
			goto l1000147A;
	}
	LPVOID * esp_n = esp_n - 4;
	*esp_n = (LPVOID *) edi_n;
	*(esp_n - 4) = (uint32) esi_n;
	*(esp_n - 8) = (_onexit_t *) ebx_n;
	word32 eax_n = fn100017C6(*(esp_n - 8), *(esp_n - 4));
	*(ebp_n - 0x1C) = eax_n;
	esp_n = (struct Eq_n *) ((char *) esp_n + 4);
	if (esi_n == 0x01 && eax_n == 0x00)
	{
		*esp_n = (LPVOID *) edi_n;
		*(esp_n - 4) = eax_n;
		*(esp_n - 8) = (_onexit_t *) ebx_n;
		fn100017C6(*(esp_n - 8), *(esp_n - 4));
		*esp_n = (LPVOID *) edi_n;
		*(esp_n - 4) = 0x00;
		*(esp_n - 8) = (_onexit_t *) ebx_n;
		word32 ecx_n;
		word32 edx_n;
		fn100011E9(*(esp_n - 8), *(esp_n - 4), *esp_n, out ecx_n, out edx_n, out ebx_n, out esi_n, out edi_n);
		esp_n = (struct Eq_n *) ((char *) esp_n + 4);
		if (globals->dw100020CC != 0x00)
		{
			*esp_n = (LPVOID *) edi_n;
			*(esp_n - 4) = 0x00;
			*(esp_n - 8) = (_onexit_t *) ebx_n;
			fn00000000();
		}
	}
	if (esi_n == 0x00 || esi_n == 0x03)
	{
		LPVOID * esp_n = esp_n - 4;
		*esp_n = (LPVOID *) edi_n;
		*(esp_n - 4) = (uint32) esi_n;
		*(esp_n - 8) = (_onexit_t *) ebx_n;
		word32 ebx_n;
		word32 ecx_n;
		word32 esi_n;
		Eq_n edi_n;
		word32 edx_n;
		ui32 eax_n = fn100011E9(*(esp_n - 8), *(esp_n - 4), *esp_n, out ecx_n, out edx_n, out ebx_n, out esi_n, out edi_n);
		esp_n = (struct Eq_n *) ((char *) esp_n + 4);
		if (eax_n == 0x00)
			*(ebp_n - 0x1C) &= eax_n;
		if (*(ebp_n - 0x1C) != 0x00 && globals->dw100020CC != 0x00)
		{
			*esp_n = (LPVOID *) edi_n;
			*(esp_n - 4) = esi_n;
			*(esp_n - 8) = ebx_n;
			word32 eax_n;
			fn00000000();
			*(ebp_n - 0x1C) = eax_n;
		}
	}
	goto l1000147A;
}

// 10001493: void fn10001493()
void fn10001493()
{
	globals->t10003008 = ~0x00;
}

// 1000149E: Register Eq_n DllMain(Stack Eq_n hModule, Stack Eq_n dwReason, Stack Eq_n lpReserved)
Eq_n DllMain(Eq_n hModule, Eq_n dwReason, Eq_n lpReserved)
{
	if (dwReason == 0x01)
		fn10001864();
	return fn10001388(lpReserved, dwReason, ebx, esi, edi);
}

// 100015CF: Register Eq_n fn100015CF(Register (ptr32 Eq_n) ebx, Register ptr32 esi, Register word32 edi)
Eq_n fn100015CF(Eq_n (* ebx)(LONG *, Eq_n, Eq_n), ptr32 esi, word32 edi)
{
	Eq_n eax_n;
	struct Eq_n * esp_n;
	struct Eq_n * ebp_n = fn100017E8(ebx, esi, edi, dwLoc0C, 0x14);
	word32 * eax_n = _decode_pointer(globals->ptr100033B4);
	*(ebp_n - 0x1C) = eax_n;
	if (eax_n == (word32 *) ~0x00)
	{
		eax_n = _onexit(ebp_n->t0008);
		esp_n = fp - 8;
	}
	else
	{
		word32 ** esp_n;
		lock();
		word32 * ecx_n = *esp_n;
		*(ebp_n - 0x04) &= 0x00;
		*esp_n = globals->ptr100033B4;
		*(ebp_n - 0x1C) = _decode_pointer(*esp_n);
		*(esp_n - 4) = globals->ptr100033B0;
		*(ebp_n - 0x20) = _decode_pointer(*(esp_n - 4));
		*(esp_n - 8) = ebp_n - 0x20;
		*(esp_n - 0x0C) = ebp_n - 0x1C;
		*(esp_n - 16) = (_onexit_t *) ebp_n->t0008;
		Eq_n eax_n = __dllonexit(*(esp_n - 16), *(esp_n - 0x0C), *(esp_n - 8));
		*(ebp_n - 0x24) = (_onexit_t *) eax_n;
		*(esp_n - 20) = *(ebp_n - 0x1C);
		ptr32 esp_n;
		word32 * eax_n;
		encode_pointer();
		globals->ptr100033B4 = eax_n;
		*(esp_n - 4) = *(ebp_n - 0x20);
		word32 esp_n;
		word32 * eax_n;
		encode_pointer();
		globals->ptr100033B0 = eax_n;
		*(ebp_n - 0x04) = ~0x01;
		fn10001665();
		esp_n = esp_n + 0x1C;
		eax_n = (Eq_n) *(ebp_n - 0x24);
	}
	fn1000182D(ebp_n, esp_n->tFFFFFFFC);
	return eax_n;
}

// 10001665: void fn10001665()
void fn10001665()
{
	unlock();
}

// 1000166E: void fn1000166E(Register (ptr32 Eq_n) ebx, Register ptr32 esi, Register word32 edi)
void fn1000166E(Eq_n (* ebx)(LONG *, Eq_n, Eq_n), ptr32 esi, word32 edi)
{
	fn100015CF(ebx, esi, edi);
}

// 10001680: void fn10001680()
void fn10001680()
{
	word32 * esi_n = globals->a100021D8;
	if (false)
	{
		do
		{
			if (*esi_n != 0x00)
				fn00000000();
			++esi_n;
		} while (esi_n < globals->a100021D8);
	}
}

// 100016D0: Register uint32 fn100016D0(Stack (ptr32 Eq_n) dwArg04)
uint32 fn100016D0(struct Eq_n * dwArg04)
{
	if (dwArg04->w0000 != 23117)
		return 0x00;
	struct Eq_n * eax_n = dwArg04 + dwArg04->dw003C / 64;
	if (eax_n->dw0000 != 0x4550)
		return 0x00;
	return (uint32) (uint8) (eax_n->w0018 == 0x010B);
}

// 10001700: Register (ptr32 Eq_n) fn10001700(Stack (ptr32 Eq_n) dwArg04, Stack uint32 dwArg08, Register out ptr32 edxOut)
struct Eq_n * fn10001700(struct Eq_n * dwArg04, uint32 dwArg08, ptr32 & edxOut)
{
	struct Eq_n * ecx_n = dwArg04 + dwArg04->dw003C / 64;
	ptr32 esi_n = (word32) ecx_n->w0006;
	ptr32 edx_n = 0x00;
	struct Eq_n * eax_n = ecx_n + ((word32) ecx_n->w0014 + 0x18) / 22;
	if (esi_n > 0x00)
	{
		do
		{
			uint32 ecx_n = eax_n->dw000C;
			if (dwArg08 >= ecx_n && dwArg08 < eax_n->dw0008 + ecx_n)
				goto l1000173E;
			++edx_n;
			++eax_n;
		} while (edx_n < esi_n);
	}
	eax_n = null;
l1000173E:
	edxOut = edx_n;
	return eax_n;
}

// 10001742: Register ui32 fn10001742(Register (ptr32 Eq_n) ebx, Register ptr32 esi, Register word32 edi, Register out ptr32 edxOut, Register out ptr32 ediOut)
ui32 fn10001742(Eq_n (* ebx)(LONG *, Eq_n, Eq_n), ptr32 esi, word32 edi, ptr32 & edxOut, ptr32 & ediOut)
{
	ui32 eax_n;
	struct Eq_n * ebp_n = fn100017E8(ebx, esi, edi, dwLoc0C, 0x08);
	*(ebp_n - 0x04) &= 0x00;
	ptr32 edx_n = 0x10000000;
	Eq_n dwLoc0C_n = 0x10000000;
	if (fn100016D0(&globals->t10000000) != 0x00)
	{
		Eq_n eax_n = ebp_n->t0008;
		dwLoc0C_n = eax_n - 0x10000000;
		struct Eq_n * eax_n = fn10001700(&globals->t10000000, eax_n - 0x10000000, out edx_n);
		if (eax_n != null)
		{
			eax_n = ~(eax_n->dw0024 >> 0x1F) & 0x01;
			*(ebp_n - 0x04) = ~0x01;
l100017A8:
			ptr32 edi_n = fn1000182D(ebp_n, dwLoc0C_n);
			edxOut = edx_n;
			ediOut = edi_n;
			return eax_n;
		}
	}
	*(ebp_n - 0x04) = ~0x01;
	eax_n = 0x00;
	goto l100017A8;
}

// 100017C6: Register word32 fn100017C6(Stack Eq_n dwArg04, Stack word32 dwArg08)
word32 fn100017C6(Eq_n dwArg04, word32 dwArg08)
{
	if (dwArg08 == 0x01 && globals->dw100020CC == 0x00)
		DisableThreadLibraryCalls(dwArg04);
	return 0x01;
}

// 100017E8: Register ptr32 fn100017E8(Register (ptr32 Eq_n) ebx, Register ptr32 esi, Register word32 edi, Stack Eq_n dwArg00, Stack ui32 dwArg08)
ptr32 fn100017E8(Eq_n (* ebx)(LONG *, Eq_n, Eq_n), ptr32 esi, word32 edi, Eq_n dwArg00, ui32 dwArg08)
{
	ptr32 esp_n = fp - 8 - dwArg08;
	*(esp_n - 4) = (Eq_n (**)(LONG *, Eq_n, Eq_n)) ebx;
	*(esp_n - 8) = esi;
	*(esp_n - 0x0C) = edi;
	*(esp_n - 16) = globals->dw10003000 ^ fp + 0x08;
	*(esp_n - 20) = (LPVOID *) dwArg00;
	fs->ptr0000 = fp - 0x08;
	return fp + 0x08;
}

// 1000182D: Register word32 fn1000182D(Register (ptr32 Eq_n) ebp, Stack Eq_n dwArg00)
word32 fn1000182D(struct Eq_n * ebp, Eq_n dwArg00)
{
	fs->dw0000 = *(ebp - 0x10);
	ebp->t0000 = dwArg00;
	return dwArg08;
}

// 10001864: void fn10001864()
void fn10001864()
{
	ui32 eax_n = globals->dw10003000;
	if (eax_n != 0xBB40E64E && (eax_n & 0xFFFF0000) != 0x00)
		globals->dw10003004 = ~eax_n;
	else
	{
		GetSystemTimeAsFileTime(fp - 0x0C);
		ui32 esi_n = dwLoc08 & 0x00 ^ dwLoc0C & 0x00 ^ GetCurrentProcessId() ^ GetCurrentThreadId() ^ GetTickCount();
		QueryPerformanceCounter(fp - 0x14);
		ui32 esi_n = esi_n ^ (dwLoc10 ^ dwLoc14);
		if (esi_n == 0xBB40E64E)
			esi_n = ~0x44BF19B0;
		else if ((esi_n & 0xFFFF0000) == 0x00)
			esi_n |= esi_n << 0x10;
		globals->dw10003000 = esi_n;
		globals->dw10003004 = ~esi_n;
	}
}

