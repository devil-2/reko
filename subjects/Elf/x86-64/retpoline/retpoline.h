// retpoline.h
// Generated by decompiling retpoline.elf
// using Reko decompiler version 0.8.0.2.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (400660 Eq_21 t400660) (400710 Eq_24 t400710) (400780 Eq_25 t400780) (600E10 (arr (ptr64 code)) a600E10) (600FF8 word64 qw600FF8) (601040 byte b601040))
	globals_t (in globals : (ptr64 (struct "Globals")))
Eq_10: (fn void ())
	T_10 (in rdx : (ptr64 Eq_10))
	T_26 (in rtld_fini : (ptr64 (fn void ())))
Eq_11: (union "Eq_11" (int32 u0) (word64 u1))
	T_11 (in qwArg00 : Eq_11)
	T_22 (in argc : int32)
Eq_12: (fn void (ptr64))
	T_12 (in __align : ptr64)
	T_13 (in signature of __align : void)
Eq_19: (fn int32 ((ptr64 Eq_21), Eq_11, (ptr64 (ptr64 char)), (ptr64 Eq_24), (ptr64 Eq_25), (ptr64 Eq_10), (ptr64 void)))
	T_19 (in __libc_start_main : ptr64)
	T_20 (in signature of __libc_start_main : void)
Eq_21: (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))
	T_21 (in main : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
	T_28 (in 0x0000000000400660 : word64)
Eq_24: (fn void ())
	T_24 (in init : (ptr64 (fn void ())))
	T_30 (in 0x0000000000400710 : word64)
Eq_25: (fn void ())
	T_25 (in fini : (ptr64 (fn void ())))
	T_31 (in 0x0000000000400780 : word64)
Eq_33: (fn void ())
	T_33 (in __hlt : ptr64)
	T_34 (in signature of __hlt : void)
Eq_57: (fn void (ptr64, word64))
	T_57 (in deregister_tm_clones : ptr64)
	T_58 (in signature of deregister_tm_clones : void)
Eq_67: (fn void (word64))
	T_67 (in register_tm_clones : ptr64)
	T_68 (in signature of register_tm_clones : void)
Eq_72: (fn (ptr64 void) (Eq_74, Eq_74))
	T_72 (in calloc : ptr64)
	T_73 (in signature of calloc : void)
Eq_74: (union "Eq_74" (int64 u0) (size_t u1))
	T_74 (in num : size_t)
	T_75 (in size : size_t)
	T_76 (in (int64) edi : int64)
	T_77 (in (int64) esi : int64)
Eq_147: (fn void (word32, word32))
	T_147 (in my1 : ptr64)
	T_148 (in signature of my1 : void)
Eq_154: (fn void ((ptr64 void)))
	T_154 (in free : ptr64)
	T_155 (in signature of free : void)
Eq_158: (fn void ())
	T_158 (in __llvm_retpoline_r11 : ptr64)
	T_159 (in signature of __llvm_retpoline_r11 : void)
Eq_163: (fn void (word64))
	T_163 (in fn0000000000400700 : ptr64)
	T_164 (in signature of fn0000000000400700 : void)
Eq_167: (fn void ())
	T_167 (in __pause : ptr64)
	T_168 (in signature of __pause : void)
Eq_186: (union "Eq_186" (int64 u0) (ptr64 u1))
	T_186 (in 0000000000600E18 : ptr64)
Eq_187: (union "Eq_187" (int64 u0) (ptr64 u1))
	T_187 (in 0000000000600E10 : ptr64)
Eq_190: (fn word64 ())
	T_190 (in _init : ptr64)
	T_191 (in signature of _init : void)
Eq_197: (union "Eq_197" (int64 u0) (uint64 u1))
	T_197 (in rbx_41 : Eq_197)
	T_198 (in 0x0000000000000000 : uint64)
	T_205 (in rbx_41 + 0x0000000000000001 : word64)
	T_206 (in rbp_29 >> 0x0000000000000003 : word64)
// Type Variables ////////////
globals_t: (in globals : (ptr64 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr64 Eq_1)
  OrigDataType: (ptr64 (struct "Globals"))
T_2: (in rax : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_3: (in rax_16 : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_4: (in 0000000000600FF8 : ptr64)
  Class: Eq_4
  DataType: (ptr64 word64)
  OrigDataType: (ptr64 (struct (0 T_5 t0000)))
T_5: (in Mem0[0x0000000000600FF8:word64] : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_6: (in 0x0000000000000000 : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_7: (in rax_16 == 0x0000000000000000 : bool)
  Class: Eq_7
  DataType: bool
  OrigDataType: bool
T_8: (in __gmon_start__ : ptr64)
  Class: Eq_8
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_9: (in signature of __gmon_start__ : void)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: 
T_10: (in rdx : (ptr64 Eq_10))
  Class: Eq_10
  DataType: (ptr64 Eq_10)
  OrigDataType: (ptr64 (fn void ()))
T_11: (in qwArg00 : Eq_11)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: (union (int32 u1) (word64 u0))
T_12: (in __align : ptr64)
  Class: Eq_12
  DataType: (ptr64 Eq_12)
  OrigDataType: (ptr64 (fn T_18 (T_17)))
T_13: (in signature of __align : void)
  Class: Eq_12
  DataType: (ptr64 Eq_12)
  OrigDataType: 
T_14: (in  : word64)
  Class: Eq_14
  DataType: ptr64
  OrigDataType: 
T_15: (in fp : ptr64)
  Class: Eq_15
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_16: (in 8 : int64)
  Class: Eq_16
  DataType: int64
  OrigDataType: int64
T_17: (in fp + 8 : word64)
  Class: Eq_14
  DataType: ptr64
  OrigDataType: ptr64
T_18: (in __align((char *) fp + 8) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_19: (in __libc_start_main : ptr64)
  Class: Eq_19
  DataType: (ptr64 Eq_19)
  OrigDataType: (ptr64 (fn T_32 (T_28, T_11, T_29, T_30, T_31, T_10, T_15)))
T_20: (in signature of __libc_start_main : void)
  Class: Eq_19
  DataType: (ptr64 Eq_19)
  OrigDataType: 
T_21: (in main : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
  Class: Eq_21
  DataType: (ptr64 Eq_21)
  OrigDataType: 
T_22: (in argc : int32)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: 
T_23: (in ubp_av : (ptr64 (ptr64 char)))
  Class: Eq_23
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_24: (in init : (ptr64 (fn void ())))
  Class: Eq_24
  DataType: (ptr64 Eq_24)
  OrigDataType: 
T_25: (in fini : (ptr64 (fn void ())))
  Class: Eq_25
  DataType: (ptr64 Eq_25)
  OrigDataType: 
T_26: (in rtld_fini : (ptr64 (fn void ())))
  Class: Eq_10
  DataType: (ptr64 Eq_10)
  OrigDataType: 
T_27: (in stack_end : (ptr64 void))
  Class: Eq_15
  DataType: (ptr64 void)
  OrigDataType: 
T_28: (in 0x0000000000400660 : word64)
  Class: Eq_21
  DataType: (ptr64 Eq_21)
  OrigDataType: (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char)))))
T_29: (in fp + 8 : word64)
  Class: Eq_23
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_30: (in 0x0000000000400710 : word64)
  Class: Eq_24
  DataType: (ptr64 Eq_24)
  OrigDataType: (ptr64 (fn void ()))
T_31: (in 0x0000000000400780 : word64)
  Class: Eq_25
  DataType: (ptr64 Eq_25)
  OrigDataType: (ptr64 (fn void ()))
T_32: (in __libc_start_main(&globals->t400660, qwArg00, (char *) fp + 8, &globals->t400710, &globals->t400780, rdx, fp) : int32)
  Class: Eq_32
  DataType: int32
  OrigDataType: int32
T_33: (in __hlt : ptr64)
  Class: Eq_33
  DataType: (ptr64 Eq_33)
  OrigDataType: (ptr64 (fn T_35 ()))
T_34: (in signature of __hlt : void)
  Class: Eq_33
  DataType: (ptr64 Eq_33)
  OrigDataType: 
T_35: (in __hlt() : void)
  Class: Eq_35
  DataType: void
  OrigDataType: void
T_36: (in rbp : ptr64)
  Class: Eq_36
  DataType: ptr64
  OrigDataType: word64
T_37: (in r8 : word64)
  Class: Eq_37
  DataType: word64
  OrigDataType: word64
T_38: (in 0x0000000000601040 : word64)
  Class: Eq_37
  DataType: word64
  OrigDataType: word64
T_39: (in r8 == 0x0000000000601040 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in 0x0000000000000000 : uint64)
  Class: Eq_40
  DataType: uint64
  OrigDataType: uint64
T_41: (in 0x0000000000000000 : word64)
  Class: Eq_40
  DataType: uint64
  OrigDataType: word64
T_42: (in 0x0000000000000000 == 0x0000000000000000 : bool)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_43: (in 0x0000000000000000 : uint64)
  Class: Eq_43
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_44: (in rbp : word64)
  Class: Eq_44
  DataType: word64
  OrigDataType: word64
T_45: (in 0 : int64)
  Class: Eq_45
  DataType: int64
  OrigDataType: int64
T_46: (in 0x0000000000000000 : word64)
  Class: Eq_45
  DataType: int64
  OrigDataType: word64
T_47: (in 0 == 0x0000000000000000 : bool)
  Class: Eq_47
  DataType: bool
  OrigDataType: bool
T_48: (in 0x0000000000000000 : uint64)
  Class: Eq_48
  DataType: uint64
  OrigDataType: uint64
T_49: (in 0x0000000000000000 : word64)
  Class: Eq_48
  DataType: uint64
  OrigDataType: word64
T_50: (in 0x0000000000000000 == 0x0000000000000000 : bool)
  Class: Eq_50
  DataType: bool
  OrigDataType: bool
T_51: (in 0x0000000000000000 : uint64)
  Class: Eq_51
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_52: (in r8 : word64)
  Class: Eq_37
  DataType: word64
  OrigDataType: word64
T_53: (in 0000000000601040 : ptr64)
  Class: Eq_53
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_54 t0000)))
T_54: (in Mem0[0x0000000000601040:byte] : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in 0x00 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_56: (in globals->b601040 != 0x00 : bool)
  Class: Eq_56
  DataType: bool
  OrigDataType: bool
T_57: (in deregister_tm_clones : ptr64)
  Class: Eq_57
  DataType: (ptr64 Eq_57)
  OrigDataType: (ptr64 (fn T_62 (T_61, T_52)))
T_58: (in signature of deregister_tm_clones : void)
  Class: Eq_57
  DataType: (ptr64 Eq_57)
  OrigDataType: 
T_59: (in fp : ptr64)
  Class: Eq_59
  DataType: ptr64
  OrigDataType: ptr64
T_60: (in 8 : int64)
  Class: Eq_60
  DataType: int64
  OrigDataType: int64
T_61: (in fp - 8 : word64)
  Class: Eq_36
  DataType: ptr64
  OrigDataType: ptr64
T_62: (in deregister_tm_clones(fp - 8, r8) : void)
  Class: Eq_62
  DataType: void
  OrigDataType: void
T_63: (in 0x01 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_64: (in 0000000000601040 : ptr64)
  Class: Eq_64
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_65 t0000)))
T_65: (in Mem18[0x0000000000601040:byte] : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_66: (in rbp : word64)
  Class: Eq_44
  DataType: word64
  OrigDataType: word64
T_67: (in register_tm_clones : ptr64)
  Class: Eq_67
  DataType: (ptr64 Eq_67)
  OrigDataType: (ptr64 (fn T_69 (T_66)))
T_68: (in signature of register_tm_clones : void)
  Class: Eq_67
  DataType: (ptr64 Eq_67)
  OrigDataType: 
T_69: (in register_tm_clones(rbp) : void)
  Class: Eq_69
  DataType: void
  OrigDataType: void
T_70: (in esi : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_71: (in edi : word32)
  Class: Eq_71
  DataType: word32
  OrigDataType: word32
T_72: (in calloc : ptr64)
  Class: Eq_72
  DataType: (ptr64 Eq_72)
  OrigDataType: (ptr64 (fn T_78 (T_76, T_77)))
T_73: (in signature of calloc : void)
  Class: Eq_72
  DataType: (ptr64 Eq_72)
  OrigDataType: 
T_74: (in num : size_t)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: 
T_75: (in size : size_t)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: 
T_76: (in (int64) edi : int64)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: (union (int64 u0) (size_t u1))
T_77: (in (int64) esi : int64)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: (union (int64 u0) (size_t u1))
T_78: (in calloc((int64) edi, (int64) esi) : (ptr64 void))
  Class: Eq_78
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_79: (in sil : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in rdi : (ptr64 byte))
  Class: Eq_80
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_83 t0000)))
T_81: (in 0x0000000000000000 : word64)
  Class: Eq_81
  DataType: word64
  OrigDataType: word64
T_82: (in rdi + 0x0000000000000000 : word64)
  Class: Eq_82
  DataType: word64
  OrigDataType: word64
T_83: (in Mem15[rdi + 0x0000000000000000:byte] : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_84: (in esi : int32)
  Class: Eq_84
  DataType: int32
  OrigDataType: int32
T_85: (in edi : int32)
  Class: Eq_85
  DataType: int32
  OrigDataType: int32
T_86: (in (uint64) edi : uint64)
  Class: Eq_86
  DataType: uint64
  OrigDataType: uint64
T_87: (in (word32) (uint64) edi : word32)
  Class: Eq_84
  DataType: int32
  OrigDataType: int32
T_88: (in (word32) (uint64) edi >= esi : bool)
  Class: Eq_88
  DataType: bool
  OrigDataType: bool
T_89: (in (uint64) edi : uint64)
  Class: Eq_89
  DataType: uint64
  OrigDataType: uint64
T_90: (in (word32) (uint64) edi : word32)
  Class: Eq_90
  DataType: ui32
  OrigDataType: ui32
T_91: (in 0x00000001 : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_92: (in (word32) (uint64) edi << 0x00000001 : word32)
  Class: Eq_92
  DataType: ui32
  OrigDataType: ui32
T_93: (in (uint64) ((word32) (uint64) edi << 0x00000001) : uint64)
  Class: Eq_93
  DataType: uint64
  OrigDataType: uint64
T_94: (in (word32) (uint64) ((word32) (uint64) edi << 0x00000001) : word32)
  Class: Eq_94
  DataType: int32
  OrigDataType: int32
T_95: (in (uint64) esi : uint64)
  Class: Eq_95
  DataType: uint64
  OrigDataType: uint64
T_96: (in (word32) (uint64) esi : word32)
  Class: Eq_96
  DataType: ui32
  OrigDataType: ui32
T_97: (in 0x00000001 : word32)
  Class: Eq_97
  DataType: word32
  OrigDataType: word32
T_98: (in (word32) (uint64) esi << 0x00000001 : word32)
  Class: Eq_98
  DataType: ui32
  OrigDataType: ui32
T_99: (in (uint64) ((word32) (uint64) esi << 0x00000001) : uint64)
  Class: Eq_99
  DataType: uint64
  OrigDataType: uint64
T_100: (in (word32) (uint64) ((word32) (uint64) esi << 0x00000001) : word32)
  Class: Eq_94
  DataType: int32
  OrigDataType: int32
T_101: (in (word32) (uint64) ((word32) (uint64) edi << 0x00000001) >= (word32) ((uint64) ((word32) ((uint64) esi) << 0x00000001)) : bool)
  Class: Eq_101
  DataType: bool
  OrigDataType: bool
T_102: (in 0x00000003 : word32)
  Class: Eq_102
  DataType: int32
  OrigDataType: int32
T_103: (in edi *s 0x00000003 : int32)
  Class: Eq_103
  DataType: int32
  OrigDataType: int32
T_104: (in (uint64) (edi *s 0x00000003) : uint64)
  Class: Eq_104
  DataType: uint64
  OrigDataType: uint64
T_105: (in (word32) (uint64) (edi *s 0x00000003) : word32)
  Class: Eq_105
  DataType: int32
  OrigDataType: int32
T_106: (in 0x00000003 : word32)
  Class: Eq_106
  DataType: int32
  OrigDataType: int32
T_107: (in esi *s 0x00000003 : int32)
  Class: Eq_107
  DataType: int32
  OrigDataType: int32
T_108: (in (uint64) (esi *s 0x00000003) : uint64)
  Class: Eq_108
  DataType: uint64
  OrigDataType: uint64
T_109: (in (word32) (uint64) (esi *s 0x00000003) : word32)
  Class: Eq_105
  DataType: int32
  OrigDataType: int32
T_110: (in (word32) (uint64) (edi *s 0x00000003) >= (word32) ((uint64) (esi *s 0x00000003)) : bool)
  Class: Eq_110
  DataType: bool
  OrigDataType: bool
T_111: (in (uint64) edi : uint64)
  Class: Eq_111
  DataType: uint64
  OrigDataType: uint64
T_112: (in (word32) (uint64) edi : word32)
  Class: Eq_112
  DataType: ui32
  OrigDataType: ui32
T_113: (in 0x00000002 : word32)
  Class: Eq_113
  DataType: word32
  OrigDataType: word32
T_114: (in (word32) (uint64) edi << 0x00000002 : word32)
  Class: Eq_114
  DataType: ui32
  OrigDataType: ui32
T_115: (in (uint64) ((word32) (uint64) edi << 0x00000002) : uint64)
  Class: Eq_115
  DataType: uint64
  OrigDataType: uint64
T_116: (in (word32) (uint64) ((word32) (uint64) edi << 0x00000002) : word32)
  Class: Eq_116
  DataType: int32
  OrigDataType: int32
T_117: (in (uint64) esi : uint64)
  Class: Eq_117
  DataType: uint64
  OrigDataType: uint64
T_118: (in (word32) (uint64) esi : word32)
  Class: Eq_118
  DataType: ui32
  OrigDataType: ui32
T_119: (in 0x00000002 : word32)
  Class: Eq_119
  DataType: word32
  OrigDataType: word32
T_120: (in (word32) (uint64) esi << 0x00000002 : word32)
  Class: Eq_120
  DataType: ui32
  OrigDataType: ui32
T_121: (in (uint64) ((word32) (uint64) esi << 0x00000002) : uint64)
  Class: Eq_121
  DataType: uint64
  OrigDataType: uint64
T_122: (in (word32) (uint64) ((word32) (uint64) esi << 0x00000002) : word32)
  Class: Eq_116
  DataType: int32
  OrigDataType: int32
T_123: (in (word32) (uint64) ((word32) (uint64) edi << 0x00000002) >= (word32) ((uint64) ((word32) ((uint64) esi) << 0x00000002)) : bool)
  Class: Eq_123
  DataType: bool
  OrigDataType: bool
T_124: (in rax_59 : uint64)
  Class: Eq_124
  DataType: uint64
  OrigDataType: uint64
T_125: (in (uint64) esi : uint64)
  Class: Eq_125
  DataType: uint64
  OrigDataType: uint64
T_126: (in (word32) (uint64) esi : word32)
  Class: Eq_126
  DataType: word32
  OrigDataType: word32
T_127: (in (uint64) (word32) (uint64) esi : uint64)
  Class: Eq_124
  DataType: uint64
  OrigDataType: uint64
T_128: (in eax_66 : int32)
  Class: Eq_128
  DataType: int32
  OrigDataType: int32
T_129: (in (word32) rax_59 : word32)
  Class: Eq_129
  DataType: word32
  OrigDataType: word32
T_130: (in (int64) (word32) rax_59 : int64)
  Class: Eq_130
  DataType: int64
  OrigDataType: int64
T_131: (in 0x00000002 : word32)
  Class: Eq_131
  DataType: int32
  OrigDataType: int32
T_132: (in (int64) (word32) rax_59 / 0x00000002 : word32)
  Class: Eq_132
  DataType: int32
  OrigDataType: int32
T_133: (in (int32) ((int64) (word32) rax_59 / 0x00000002) : int32)
  Class: Eq_128
  DataType: int32
  OrigDataType: int32
T_134: (in rax_84 : (ptr64 void))
  Class: Eq_134
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_135: (in DPB(rax_59, eax_66, 0) : word64)
  Class: Eq_134
  DataType: (ptr64 void)
  OrigDataType: uint64
T_136: (in (uint64) edi : uint64)
  Class: Eq_136
  DataType: uint64
  OrigDataType: uint64
T_137: (in (word32) (uint64) edi : word32)
  Class: Eq_137
  DataType: word32
  OrigDataType: word32
T_138: (in (uint64) (word32) (uint64) edi : uint64)
  Class: Eq_138
  DataType: uint64
  OrigDataType: uint64
T_139: (in (word32) (uint64) (word32) (uint64) edi : word32)
  Class: Eq_139
  DataType: word32
  OrigDataType: word32
T_140: (in (int64) (word32) (uint64) (word32) (uint64) edi : int64)
  Class: Eq_140
  DataType: int64
  OrigDataType: int64
T_141: (in 0x00000002 : word32)
  Class: Eq_141
  DataType: int32
  OrigDataType: int32
T_142: (in (int64) (word32) (uint64) (word32) (uint64) edi / 0x00000002 : word32)
  Class: Eq_142
  DataType: int32
  OrigDataType: int32
T_143: (in (int32) ((int64) (word32) (uint64) (word32) (uint64) edi / 0x00000002) : int32)
  Class: Eq_143
  DataType: int32
  OrigDataType: int32
T_144: (in (uint64) (int32) ((int64) (word32) (uint64) (word32) (uint64) edi / 0x00000002) : uint64)
  Class: Eq_144
  DataType: uint64
  OrigDataType: uint64
T_145: (in (word32) (uint64) (int32) ((int64) (word32) (uint64) (word32) (uint64) edi / 0x00000002) : word32)
  Class: Eq_128
  DataType: int32
  OrigDataType: int32
T_146: (in (word32) (uint64) (int32) ((int64) (word32) (uint64) (word32) (uint64) edi / 0x00000002) >= eax_66 : bool)
  Class: Eq_146
  DataType: bool
  OrigDataType: bool
T_147: (in my1 : ptr64)
  Class: Eq_147
  DataType: (ptr64 Eq_147)
  OrigDataType: (ptr64 (fn T_153 (T_150, T_152)))
T_148: (in signature of my1 : void)
  Class: Eq_147
  DataType: (ptr64 Eq_147)
  OrigDataType: 
T_149: (in (uint64) esi : uint64)
  Class: Eq_149
  DataType: uint64
  OrigDataType: uint64
T_150: (in (word32) (uint64) esi : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_151: (in (uint64) edi : uint64)
  Class: Eq_151
  DataType: uint64
  OrigDataType: uint64
T_152: (in (word32) (uint64) edi : word32)
  Class: Eq_71
  DataType: word32
  OrigDataType: word32
T_153: (in my1((word32) (uint64) esi, (word32) (uint64) edi) : void)
  Class: Eq_153
  DataType: void
  OrigDataType: void
T_154: (in free : ptr64)
  Class: Eq_154
  DataType: (ptr64 Eq_154)
  OrigDataType: (ptr64 (fn T_157 (T_134)))
T_155: (in signature of free : void)
  Class: Eq_154
  DataType: (ptr64 Eq_154)
  OrigDataType: 
T_156: (in p : (ptr64 void))
  Class: Eq_134
  DataType: (ptr64 void)
  OrigDataType: 
T_157: (in free(rax_84) : void)
  Class: Eq_157
  DataType: void
  OrigDataType: void
T_158: (in __llvm_retpoline_r11 : ptr64)
  Class: Eq_158
  DataType: (ptr64 Eq_158)
  OrigDataType: (ptr64 (fn T_160 ()))
T_159: (in signature of __llvm_retpoline_r11 : void)
  Class: Eq_158
  DataType: (ptr64 Eq_158)
  OrigDataType: 
T_160: (in __llvm_retpoline_r11() : void)
  Class: Eq_160
  DataType: void
  OrigDataType: void
T_161: (in stackArg0 : word64)
  Class: Eq_161
  DataType: word64
  OrigDataType: word64
T_162: (in <invalid> : void)
  Class: Eq_161
  DataType: word64
  OrigDataType: void
T_163: (in fn0000000000400700 : ptr64)
  Class: Eq_163
  DataType: (ptr64 Eq_163)
  OrigDataType: (ptr64 (fn T_166 (T_161)))
T_164: (in signature of fn0000000000400700 : void)
  Class: Eq_163
  DataType: (ptr64 Eq_163)
  OrigDataType: 
T_165: (in qwArg00 : word64)
  Class: Eq_161
  DataType: word64
  OrigDataType: word64
T_166: (in fn0000000000400700(stackArg0) : void)
  Class: Eq_166
  DataType: void
  OrigDataType: void
T_167: (in __pause : ptr64)
  Class: Eq_167
  DataType: (ptr64 Eq_167)
  OrigDataType: (ptr64 (fn T_169 ()))
T_168: (in signature of __pause : void)
  Class: Eq_167
  DataType: (ptr64 Eq_167)
  OrigDataType: 
T_169: (in __pause() : void)
  Class: Eq_169
  DataType: void
  OrigDataType: void
T_170: (in rdx : word64)
  Class: Eq_170
  DataType: word64
  OrigDataType: word64
T_171: (in rbx : word64)
  Class: Eq_171
  DataType: word64
  OrigDataType: word64
T_172: (in rbp : word64)
  Class: Eq_172
  DataType: word64
  OrigDataType: word64
T_173: (in rsi : word64)
  Class: Eq_173
  DataType: word64
  OrigDataType: word64
T_174: (in edi : word32)
  Class: Eq_174
  DataType: word32
  OrigDataType: word32
T_175: (in r12 : word64)
  Class: Eq_175
  DataType: word64
  OrigDataType: word64
T_176: (in r13 : word64)
  Class: Eq_176
  DataType: word64
  OrigDataType: word64
T_177: (in r14 : word64)
  Class: Eq_177
  DataType: word64
  OrigDataType: word64
T_178: (in r15 : word64)
  Class: Eq_178
  DataType: word64
  OrigDataType: word64
T_179: (in r15_10 : uint64)
  Class: Eq_179
  DataType: uint64
  OrigDataType: uint64
T_180: (in (uint64) edi : uint64)
  Class: Eq_179
  DataType: uint64
  OrigDataType: uint64
T_181: (in r15d_83 : word32)
  Class: Eq_181
  DataType: word32
  OrigDataType: word32
T_182: (in (word32) r15_10 : word32)
  Class: Eq_181
  DataType: word32
  OrigDataType: word32
T_183: (in r15_55 : uint64)
  Class: Eq_183
  DataType: uint64
  OrigDataType: uint64
T_184: (in DPB(r15_10, r15d_83, 0) : word64)
  Class: Eq_183
  DataType: uint64
  OrigDataType: uint64
T_185: (in rbp_29 : int64)
  Class: Eq_185
  DataType: int64
  OrigDataType: int64
T_186: (in 0000000000600E18 : ptr64)
  Class: Eq_186
  DataType: int64
  OrigDataType: (union (int64 u0) (ptr64 u1))
T_187: (in 0000000000600E10 : ptr64)
  Class: Eq_187
  DataType: int64
  OrigDataType: (union (int64 u1) (ptr64 u0))
T_188: (in 0x0000000000600E18 - 0x0000000000600E10 : word64)
  Class: Eq_185
  DataType: int64
  OrigDataType: int64
T_189: (in rax_33 : word64)
  Class: Eq_189
  DataType: word64
  OrigDataType: word64
T_190: (in _init : ptr64)
  Class: Eq_190
  DataType: (ptr64 Eq_190)
  OrigDataType: (ptr64 (fn T_192 ()))
T_191: (in signature of _init : void)
  Class: Eq_190
  DataType: (ptr64 Eq_190)
  OrigDataType: 
T_192: (in _init() : word64)
  Class: Eq_189
  DataType: word64
  OrigDataType: word64
T_193: (in 0x0000000000000003 : word64)
  Class: Eq_193
  DataType: word64
  OrigDataType: word64
T_194: (in rbp_29 >> 0x0000000000000003 : word64)
  Class: Eq_194
  DataType: int64
  OrigDataType: int64
T_195: (in 0x0000000000000000 : word64)
  Class: Eq_194
  DataType: int64
  OrigDataType: word64
T_196: (in rbp_29 >> 0x0000000000000003 == 0x0000000000000000 : bool)
  Class: Eq_196
  DataType: bool
  OrigDataType: bool
T_197: (in rbx_41 : Eq_197)
  Class: Eq_197
  DataType: Eq_197
  OrigDataType: word64
T_198: (in 0x0000000000000000 : uint64)
  Class: Eq_197
  DataType: uint64
  OrigDataType: uint64
T_199: (in DPB(r15_55, r15d_83, 0) : word64)
  Class: Eq_183
  DataType: uint64
  OrigDataType: uint64
T_200: (in 0000000000600E10 : ptr64)
  Class: Eq_200
  DataType: (ptr64 (arr (ptr64 code)))
  OrigDataType: (ptr64 (struct (0 (arr T_208) a0000)))
T_201: (in 0x0000000000000008 : word64)
  Class: Eq_201
  DataType: ui64
  OrigDataType: ui64
T_202: (in rbx_41 * 0x0000000000000008 : word64)
  Class: Eq_202
  DataType: ui64
  OrigDataType: ui64
T_203: (in 0x0000000000600E10[rbx_41 * 0x0000000000000008] : word64)
  Class: Eq_203
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_204: (in 0x0000000000000001 : word64)
  Class: Eq_204
  DataType: word64
  OrigDataType: word64
T_205: (in rbx_41 + 0x0000000000000001 : word64)
  Class: Eq_197
  DataType: Eq_197
  OrigDataType: uint64
T_206: (in rbp_29 >> 0x0000000000000003 : word64)
  Class: Eq_197
  DataType: Eq_197
  OrigDataType: int64
T_207: (in rbp_29 >> 0x0000000000000003 != rbx_41 : bool)
  Class: Eq_207
  DataType: bool
  OrigDataType: bool
T_208:
  Class: Eq_208
  DataType: (ptr64 code)
  OrigDataType: (struct 0008 (0 T_203 t0000))
*/
typedef struct Globals {
	Eq_21 t400660;	// 400660
	Eq_24 t400710;	// 400710
	Eq_25 t400780;	// 400780
	<anonymous> * a600E10[];	// 600E10
	word64 qw600FF8;	// 600FF8
	byte b601040;	// 601040
} Eq_1;

typedef void (Eq_10)();

typedef union Eq_11 {
	int32 u0;
	word64 u1;
} Eq_11;

typedef void (Eq_12)(ptr64);

typedef int32 (Eq_19)( *, Eq_11, char * *,  *,  *,  *, void);

typedef int32 (Eq_21)(int32 rdi, char * * rsi, char * * rdx);

typedef void (Eq_24)();

typedef void (Eq_25)();

typedef void (Eq_33)();

typedef void (Eq_57)(ptr64, word64);

typedef void (Eq_67)(word64);

typedef void (Eq_72)(Eq_74, Eq_74);

typedef union Eq_74 {
	int64 u0;
	size_t u1;
} Eq_74;

typedef void (Eq_147)(word32, word32);

typedef void (Eq_154)(void);

typedef void (Eq_158)();

typedef void (Eq_163)(word64);

typedef void (Eq_167)();

typedef union Eq_186 {
	int64 u0;
	ptr64 u1;
} Eq_186;

typedef union Eq_187 {
	int64 u0;
	ptr64 u1;
} Eq_187;

typedef word64 (Eq_190)();

typedef union Eq_197 {
	int64 u0;
	uint64 u1;
} Eq_197;

