// main.c
// Generated by decompiling main.exe
// using Reko decompiler version 0.7.0.0.

#include "main.h"

// 00401000: void fn00401000()
void fn00401000()
{
	return;
}

// 00401010: Register word32 fn00401010(Stack word32 dwArg04)
word32 fn00401010(word32 dwArg04)
{
	word32 esp_13;
	word32 ebp_14;
	word32 esi_15;
	byte SCZO_16;
	word32 ecx_17;
	word32 eax_18;
	_acrt_iob_func();
	fn00401000();
	word32 esp_38;
	word32 ebp_39;
	word32 esi_40;
	byte SCZO_41;
	word32 ecx_42;
	word32 eax_43;
	_stdio_common_vfprintf();
	return 0x01;
}

// 00401040: Register word32 fn00401040()
word32 fn00401040()
{
	word32 esp_10;
	word32 ebp_11;
	word32 ecx_12;
	word32 eax_13;
	byte SCZO_14;
	byte SZO_15;
	byte C_16;
	driver.dll!Ordinal_1();
	word32 esp_20;
	word32 ebp_21;
	word32 ecx_22;
	word32 eax_23;
	byte SCZO_24;
	byte SZO_25;
	byte C_26;
	driver.dll!Ordinal_2();
	word32 esp_30;
	word32 ebp_31;
	word32 ecx_32;
	word32 eax_33;
	byte SCZO_34;
	byte SZO_35;
	byte C_36;
	driver.dll!Ordinal_4();
	word32 esp_40;
	word32 ebp_41;
	word32 ecx_42;
	word32 eax_43;
	byte SCZO_44;
	byte SZO_45;
	byte C_46;
	driver.dll!Ordinal_3();
	fn00401010(0x00402118);
	return 0x00;
}

// 004012C9: Register Eq_62 Win32CrtStartup()
DWORD Win32CrtStartup()
{
	fn0040165E();
	struct Eq_66 * ebp_10 = fn00401980(ebx, esi, edi, dwLoc0C, 0x00402508, 0x14);
	*(fp - 0x0C) = 0x01;
	word32 * esp_17 = fp - 0x08;
	if (fn0040146F(edx, dwArg00) == 0x00)
	{
l00401172:
		esp_17 = esp_17 - 0x04;
		*esp_17 = 0x07;
		fn0040176D(0x14, dwArg00);
	}
	*(ebp_10 - 0x19) = 0x00;
	*(ebp_10 - 0x04) = *(ebp_10 - 0x04) & 0x00;
	*(ebp_10 - 0x24) = fn0040143A();
	ebx = DPB(ebx, 0x00, 0);
	word32 eax_36 = globals->dw403334;
	if (eax_36 != 0x01)
	{
		Eq_62 eax_188;
		if (eax_36 == 0x00)
		{
			globals->dw403334 = 0x01;
			PVFV ** esp_275 = esp_17 - 0x04;
			*esp_275 = (PVFV **) &globals->t4020F0;
			*(esp_275 - 0x04) = 0x004020E4;
			if (_initterm_e(*(esp_275 - 0x04), *esp_275) != 0x00)
			{
				*(ebp_10 - 0x04) = ~0x01;
				eax_188 = 0xFF;
				goto l004012C3;
			}
			*esp_275 = (PVFV **) &globals->t4020E0;
			*(esp_275 - 0x04) = 0x004020D8;
			_initterm(*(esp_275 - 0x04), *esp_275);
			globals->dw403334 = 0x02;
		}
		else
		{
			*(ebp_10 - 0x19) = 0x01;
			ebx = DPB(ebx, 0x01, 0);
		}
		ptr32 * esp_71 = esp_17 - 0x04;
		*esp_71 = *(ebp_10 - 0x24);
		fn004015C9(bArg00);
		fn00401761();
		ptr32 esp_247 = esp_71 + 0x01;
		ptr32 edi_243 = 0x00;
		if (globals->dw403384 != 0x00)
		{
			*esp_71 = 0x00403384;
			<anonymous> ** esi_242;
			word32 eax_244 = fn0040153F(ebx, 0x00403384, 0x00, out ebx, out esi_242, out edi_243);
			byte al_245 = (byte) eax_244;
			esp_247 = esp_71 + 0x01;
			if (al_245 != 0x00)
			{
				*esp_71 = edi_243;
				*(esp_71 - 0x04) = 0x02;
				*(esp_71 - 0x08) = edi_243;
				<anonymous> * esi_257 = *esi_242;
				fn00401972();
				word32 ecx_260;
				byte al_261;
				byte SZO_262;
				byte C_263;
				byte Z_264;
				byte bl_265;
				word32 ebp_266;
				word32 eax_267;
				byte SCZO_268;
				byte cl_269;
				word32 esi_270;
				word32 edx_273;
				esi_257();
			}
		}
		word32 eax_90 = fn00401767();
		if (globals->ptr403380 != edi_243)
		{
			ptr32 * esp_206 = esp_247 - 0x04;
			*esp_206 = 0x00403380;
			word32 ebx_208;
			ptr32 * esi_209;
			word32 edi_210;
			word32 eax_211 = fn0040153F(ebx, 0x00403380, edi_243, out ebx_208, out esi_209, out edi_210);
			byte al_212 = (byte) eax_211;
			if (al_212 != 0x00)
			{
				*esp_206 = *esi_209;
				word32 esp_221;
				word32 ecx_222;
				byte al_223;
				byte SZO_224;
				byte C_225;
				byte Z_226;
				byte bl_227;
				word32 ebp_228;
				word32 eax_229;
				byte SCZO_230;
				byte cl_231;
				word32 esi_232;
				word32 edi_233;
				word32 ebx_234;
				word32 edx_235;
				register_thread_local_exe_atexit_callback();
			}
		}
		word32 esp_95;
		word32 ecx_96;
		byte al_97;
		byte SZO_98;
		byte C_99;
		byte Z_100;
		byte bl_101;
		word32 ebp_102;
		word32 eax_103;
		byte SCZO_104;
		byte cl_105;
		word32 esi_106;
		word32 edi_107;
		word32 ebx_108;
		word32 edx_109;
		_p___argv();
		word32 esp_112;
		word32 ecx_113;
		byte al_114;
		byte SZO_115;
		byte C_116;
		byte Z_117;
		byte bl_118;
		word32 ebp_119;
		word32 eax_120;
		byte SCZO_121;
		byte cl_122;
		word32 esi_123;
		word32 edi_124;
		word32 ebx_125;
		word32 edx_126;
		_p___argc();
		ptr32 esp_129;
		word32 ecx_130;
		byte al_131;
		byte SZO_132;
		byte C_133;
		byte Z_134;
		byte bl_135;
		word32 eax_137;
		byte SCZO_138;
		byte cl_139;
		word32 * esi_140;
		word32 * edi_141;
		word32 ebx_142;
		word32 edx_143;
		get_initial_narrow_environment();
		*(esp_129 - 0x08) = eax_137;
		*(esp_129 - 0x0C) = *edi_141;
		*(esp_129 - 0x10) = *esi_140;
		Eq_62 eax_153 = fn00401040();
		ptr32 esp_154 = esp_129 - 0x04;
		Eq_62 esi_156 = eax_153;
		byte al_157 = fn0040188B();
		if (al_157 == 0x00)
		{
			*(esp_129 - 0x08) = (uint32) eax_153;
			exit(*(esp_129 - 0x08));
		}
		if (bl_135 == 0x00)
		{
			word32 esp_190;
			word32 ecx_191;
			byte al_192;
			byte SZO_193;
			byte C_194;
			byte Z_195;
			byte bl_196;
			word32 eax_198;
			byte SCZO_199;
			byte cl_200;
			word32 edi_202;
			word32 ebx_203;
			word32 edx_204;
			cexit();
			esp_154 = esp_190 + ~0x03;
		}
		word32 * esp_178 = esp_154 - 0x04;
		*esp_178 = 0x00;
		*(esp_178 - 0x04) = 0x01;
		fn004015E6(dwArg00, bArg04);
		*(ebp_10 - 0x04) = ~0x01;
		eax_188 = esi_156;
l004012C3:
		word32 esi_61;
		word32 edi_62;
		fn004019C6(ebp_10, 0x14, dwArg00, dwArg04, dwArg08, dwArg0C, out esi_61, out edi_62);
		return eax_188;
	}
	goto l00401172;
}

// 004013F6: Register (ptr Eq_518) fn004013F6(Stack (ptr Eq_95) dwArg04, Stack uint32 dwArg08)
Eq_518 * fn004013F6(Eq_95 * dwArg04, uint32 dwArg08)
{
	struct Eq_518 * eax_26;
	struct Eq_522 * ecx_13 = dwArg04 + dwArg04->dw003C / 0x0040;
	struct Eq_518 * edx_16 = &ecx_13->w0014 + 0x02 + (word32) ecx_13->w0014 / 22;
	struct Eq_518 * esi_19 = edx_16 + (word32) ecx_13->w0006;
	if (edx_16 != esi_19)
	{
		do
		{
			if (dwArg08 >= edx_16->dw000C && dwArg08 < edx_16->dw0008 + edx_16->dw000C)
			{
				eax_26 = edx_16;
				return eax_26;
			}
			edx_16 = edx_16 + 0x01;
		} while (edx_16 != esi_19);
	}
	eax_26 = null;
	return eax_26;
}

// 0040143A: Register byte fn0040143A()
byte fn0040143A()
{
	if (fn00401B98() != 0x00)
	{
		word32 edx_32 = fs->ptr0018->dw0004;
l0040145B:
		__lock();
		word32 eax_37;
		__cmpxchg(globals->dw403338, edx_32, 0x00, out eax_37);
		if (eax_37 != 0x00)
		{
			if (edx_32 != eax_37)
				goto l0040145B;
			return 0x01;
		}
		else
			return 0x00;
	}
	else
		return 0x00;
}

// 0040146F: Register byte fn0040146F(Register word32 edx, Stack (ptr Eq_95) dwArg04)
byte fn0040146F(word32 edx, Eq_95 * dwArg04)
{
	if (dwArg04 == null)
		globals->b403354 = 0x01;
	fn004019FE(edx);
	fn00401C46();
	if (true)
	{
		fn00401C46();
		if (true)
			return 0x01;
		fn00401C46();
	}
	return 0x00;
}

// 0040153F: Register (ptr Eq_609) fn0040153F(Register word32 ebx, Register ptr32 esi, Register ptr32 edi, Register out ptr32 ebxOut, Register out ptr32 esiOut, Register out ptr32 ediOut)
Eq_609 * fn0040153F(word32 ebx, ptr32 esi, ptr32 edi, ptr32 & ebxOut, ptr32 & esiOut, ptr32 & ediOut)
{
	struct Eq_609 * eax_31;
	struct Eq_66 * ebp_10 = fn00401980(ebx, esi, edi, dwLoc0C, 0x00402528, 0x08);
	*(ebp_10 - 0x04) = *(ebp_10 - 0x04) & 0x00;
	struct Eq_629 * eax_15 = (struct Eq_629 *) 23117;
	if ((word16 *) 0x00400000 == 23117)
	{
		eax_15 = (struct Eq_629 *) (struct Eq_629 **) 0x0040003C;
		if (eax_15->dw400000 == 0x4550 && eax_15->w400018 == 0x010B)
		{
			*(fp - 0x0C) = ebp_10->dw0008 - 0x00400000;
			*(fp - 0x10) = 0x00400000;
			eax_15 = fn004013F6(dwArg00, dwArg04);
			if (eax_15 != null && eax_15->dw0024 >= 0x00)
			{
				*(ebp_10 - 0x04) = ~0x01;
				eax_31 = (struct Eq_609 *) DPB(eax_15, 0x01, 0);
l004015C3:
				word32 esi_37;
				word32 edi_38;
				word32 ebx_39;
				*ebxOut = fn004019C6(ebp_10, 0x08, dwArg00, dwArg04, dwArg08, dwArg0C, out esi_37, out edi_38);
				return eax_31;
			}
		}
	}
	*(ebp_10 - 0x04) = ~0x01;
	eax_31 = (struct Eq_609 *) DPB(eax_15, 0x00, 0);
	goto l004015C3;
}

// 004015C9: void fn004015C9(Stack byte bArg04)
void fn004015C9(byte bArg04)
{
	if (fn00401B98() != 0x00 && bArg04 == 0x00)
		globals->dw403338 = 0x00;
	return;
}

// 004015E6: void fn004015E6(Stack (ptr Eq_95) dwArg04, Stack byte bArg08)
void fn004015E6(Eq_95 * dwArg04, byte bArg08)
{
	if (globals->b403354 == 0x00 || bArg08 == 0x00)
	{
		fn00401C46();
		fn00401C46();
	}
	return;
}

// 0040165E: void fn0040165E()
void fn0040165E()
{
	ui32 eax_16 = globals->dw403004;
	if (eax_16 != 0xBB40E64E && (eax_16 & 0xFFFF0000) != 0x00)
		globals->dw403000 = ~eax_16;
	else
	{
		GetSystemTimeAsFileTime(fp - 0x10);
		ui32 v14_55 = dwLoc0C & 0x00 ^ dwLoc10 & 0x00 ^ GetCurrentThreadId() ^ GetCurrentProcessId();
		QueryPerformanceCounter(fp - 0x18);
		ui32 ecx_69 = dwLoc14 ^ dwLoc18 ^ v14_55 ^ fp - 0x08;
		if (ecx_69 == 0xBB40E64E)
			ecx_69 = ~0x44BF19B0;
		else if ((ecx_69 & 0xFFFF0000) == 0x00)
			ecx_69 = ecx_69 | (ecx_69 | 0x4711) << 0x10;
		globals->dw403004 = ecx_69;
		globals->dw403000 = ~ecx_69;
	}
	return;
}

// 00401761: void fn00401761()
void fn00401761()
{
	return;
}

// 00401767: Register ptr32 fn00401767()
ptr32 fn00401767()
{
	return 0x00403380;
}

// 0040176D: void fn0040176D(Stack word32 dwArg00, Stack (ptr Eq_95) dwArg04)
void fn0040176D(word32 dwArg00, Eq_95 * dwArg04)
{
	if (IsProcessorFeaturePresent(0x17) == 0x00)
	{
		globals->dw403368 = 0x00;
		memset(fp - 808, 0x00, 0x02CC);
		memset(fp - 0x5C, 0x00, 0x50);
		byte bl_90 = 0x00 - (0x01 - IsDebuggerPresent() == 0x00);
		SetUnhandledExceptionFilter(null);
		if (UnhandledExceptionFilter(fp - 0x0C) == 0x00)
			globals->dw403368 = globals->dw403368 & 0x00 - (-((word32) (bl_90 + 0x01)) == 0x00);
		return;
	}
	else
		__fastfail(dwArg04);
}

// 0040188B: Register bool fn0040188B()
bool fn0040188B()
{
	Eq_857 eax_4 = GetModuleHandleW(null);
	if (eax_4 != null && eax_4->unused == 23117)
	{
		struct Eq_871 * eax_42 = eax_4 + eax_4->dw003C / 0x0040;
		if (eax_42->dw0000 == 0x4550 && (eax_42->w0018 == 0x010B && eax_42->dw0074 > 0x0E))
			return eax_42->dw00E8 != 0x00;
	}
	return 0x00;
}

// 00401972: void fn00401972()
void fn00401972()
{
	word32 esp_3;
	globals->ptr4020D4();
	return;
}

// 00401980: Register ptr32 fn00401980(Register word32 ebx, Register ptr32 esi, Register ptr32 edi, Stack word32 dwArg00, Stack word32 dwArg04, Stack ui32 dwArg08)
ptr32 fn00401980(word32 ebx, ptr32 esi, ptr32 edi, word32 dwArg00, word32 dwArg04, ui32 dwArg08)
{
	ptr32 esp_14 = fp - 0x08 - dwArg08;
	*(esp_14 - 0x04) = ebx;
	*(esp_14 - 0x08) = esi;
	*(esp_14 - 0x0C) = edi;
	*(esp_14 - 0x10) = globals->dw403004 ^ fp + 0x08;
	*(esp_14 - 0x14) = dwArg00;
	fs->ptr0000 = fp - 0x08;
	return fp + 0x08;
}

// 004019C6: Register word32 fn004019C6(Register (ptr Eq_66) ebp, Stack word32 dwArg00, Stack (ptr Eq_95) dwArg04, Stack uint32 dwArg08, Stack word32 dwArg0C, Stack word32 dwArg10, Register out ptr32 esiOut, Register out ptr32 ediOut)
word32 fn004019C6(Eq_66 * ebp, word32 dwArg00, Eq_95 * dwArg04, uint32 dwArg08, word32 dwArg0C, word32 dwArg10, ptr32 & esiOut, ptr32 & ediOut)
{
	fs->dw0000 = *(ebp - 0x10);
	ebp->dw0000 = dwArg00;
	word32 edi_14;
	*ediOut = dwArg08;
	word32 esi_17;
	*esiOut = dwArg0C;
	return dwArg10;
}

// 004019FE: void fn004019FE(Register word32 edx)
void fn004019FE(word32 edx)
{
	globals->dw40336C = globals->dw40336C & 0x00;
	globals->dw403010 = globals->dw403010 | 0x01;
	if (IsProcessorFeaturePresent(0x0A) != 0x00)
	{
		ui32 edi_135;
		globals->dw403010 = globals->dw403010 | 0x02;
		globals->dw40336C = 0x01;
		int32 eax_89;
		word32 ebx_90;
		word32 ecx_91;
		word32 edx_92;
		__cpuid(0x00, 0x00, &eax_89, &ebx_90, &ecx_91, &edx_92);
		ui32 eax_124;
		word32 ebx_125;
		ui32 ecx_126;
		word32 edx_127;
		__cpuid(0x01, 0x00, &eax_124, &ebx_125, &ecx_126, &edx_127);
		if ((edx_92 ^ 0x49656E69 | ecx_91 ^ 1818588270 | ebx_90 ^ 1970169159) == 0x00 && ((eax_124 & 0x0FFF3FF0) == 0x000106C0 || ((eax_124 & 0x0FFF3FF0) == 0x00020660 || ((eax_124 & 0x0FFF3FF0) == 0x00020670 || ((eax_124 & 0x0FFF3FF0) == 0x00030650 || ((eax_124 & 0x0FFF3FF0) == 0x00030660 || (eax_124 & 0x0FFF3FF0) == 0x00030670))))))
		{
			ui32 edi_245 = globals->dw403370;
			globals->dw403370 = edi_245 | 0x01;
			edi_135 = edi_245 | 0x01;
		}
		else
			edi_135 = globals->dw403370;
		if (eax_89 >= 0x07)
		{
			word32 eax_210;
			ui32 ebx_211;
			word32 ecx_212;
			word32 edx_213;
			__cpuid(0x07, 0x00, &eax_210, &ebx_211, &ecx_212, &edx_213);
			if ((ebx_211 & 0x0200) != 0x00)
				globals->dw403370 = edi_135 | 0x02;
		}
		if ((ecx_126 & 0x00100000) != 0x00)
		{
			globals->dw403010 = globals->dw403010 | 0x04;
			globals->dw40336C = 0x02;
			if ((ecx_126 & 0x08000000) != 0x00 && ((ecx_126 & 0x10000000) != 0x00 && (((word32) __xgetbv(0x00) & 0x06) == 0x06 && true)))
			{
				ui32 eax_189 = globals->dw403010;
				globals->dw40336C = 0x03;
				globals->dw403010 = eax_189 | 0x08;
				if ((bLoc14 & 0x20) != 0x00)
				{
					globals->dw40336C = 0x05;
					globals->dw403010 = eax_189 | 0x08 | 0x20;
				}
			}
		}
	}
	return;
}

// 00401B98: Register word32 fn00401B98()
word32 fn00401B98()
{
	return (word32) (globals->dw403014 != 0x00);
}

// 00401C46: void fn00401C46()
void fn00401C46()
{
	return;
}

