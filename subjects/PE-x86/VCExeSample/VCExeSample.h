// VCExeSample.h
// Generated by decompiling D:\dev\uxmal\reko\master\subjects\PE-x86\VCExeSample\VCExeSample.exe
// using Decompiler version 0.6.0.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (4020C0 (str char) str4020C0) (4020C8 (str char) str4020C8))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_5: (fn void ((ptr char), int32, (ptr char), real32))
	T_5 (in test1 : ptr32)
	T_6 (in signature of test1 : void)
Eq_20: (fn int32 ((ptr char)))
	T_20 (in printf : ptr32)
	T_21 (in signature of printf : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in eax : int32)
  Class: Eq_2
  DataType: int32
  OrigDataType: int32
T_3: (in argc : int32)
  Class: Eq_3
  DataType: int32
  OrigDataType: int32
T_4: (in argv : (ptr (ptr char)))
  Class: Eq_4
  DataType: (ptr (ptr char))
  OrigDataType: (ptr (ptr char))
T_5: (in test1 : ptr32)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (fn T_18 (T_14, T_15, T_16, T_17)))
T_6: (in signature of test1 : void)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: 
T_7: (in arg1 : (ptr char))
  Class: Eq_7
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_8: (in arg2 : int32)
  Class: Eq_8
  DataType: int32
  OrigDataType: int32
T_9: (in arg3 : (ptr char))
  Class: Eq_9
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_10: (in arg4 : real32)
  Class: Eq_10
  DataType: real32
  OrigDataType: real32
T_11: (in argv : (ptr (ptr char)))
  Class: Eq_11
  DataType: (ptr (ptr char))
  OrigDataType: (ptr (union ((ptr char) u0) ((struct (0 (ptr char) ptr0000)) u1)))
T_12: (in 0x00000000 : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_13: (in argv + 0x00000000 : word32)
  Class: Eq_13
  DataType: ptr32
  OrigDataType: ptr32
T_14: (in Mem0[argv + 0x00000000:word32] : word32)
  Class: Eq_7
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_15: (in argc : int32)
  Class: Eq_8
  DataType: int32
  OrigDataType: int32
T_16: (in 0x004020C0 : word32)
  Class: Eq_9
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_17: (in 1F : real32)
  Class: Eq_10
  DataType: real32
  OrigDataType: real32
T_18: (in test1(*argv, argc, "test123", 1F) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_19: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: int32
  OrigDataType: word32
T_20: (in printf : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_24 (T_23)))
T_21: (in signature of printf : void)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: 
T_22: (in ptrArg00 : (ptr char))
  Class: Eq_22
  DataType: (ptr char)
  OrigDataType: 
T_23: (in 0x004020C8 : word32)
  Class: Eq_22
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_24: (in printf("%s %d %s %f") : int32)
  Class: Eq_24
  DataType: int32
  OrigDataType: int32
*/
typedef struct Globals {
	char str4020C0[];	// 4020C0
	char str4020C8[];	// 4020C8
} Eq_1;

typedef void (Eq_5)(char *, int32, char *, real32);

typedef int32 (Eq_20)(char *);

