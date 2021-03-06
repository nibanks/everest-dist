/*
  Copyright (c) INRIA and Microsoft Corporation. All rights reserved.
  Licensed under the Apache 2.0 License.

  This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
  KreMLin invocation: ../krml -fparentheses -fcurly-braces -fno-shadow -header copyright-header.txt -minimal -tmpdir dist/generic -warn-error +9+11 -skip-compilation -extract-uints -add-include <inttypes.h> -add-include "kremlib.h" -add-include "kremlin/internal/compat.h" -add-include "kremlin/internal/target.h" -bundle FStar.UInt64+FStar.UInt32+FStar.UInt16+FStar.UInt8=[rename=FStar_UInt_8_16_32_64] -bundle C.Endianness= -bundle FStar.Reflection,FStar.Reflection.*,FStar.Tactics,FStar.Tactics.*,FStar.Range -library C,C.Endianness,C.Failure,C.Loops,FStar.BitVector,FStar.Bytes,FStar.Char,FStar.Int,FStar.Kremlin.Endianness,FStar.Math.Lib,FStar.ModifiesGen,FStar.Monotonic.Heap,FStar.Monotonic.HyperStack,FStar.Mul,FStar.Pervasives,FStar.Pervasives.Native,FStar.ST,FStar.UInt,FStar.UInt128,FStar.UInt63,LowStar.Printf fstar_int8.c fstar_hyperstack_io.c prims.c c_string.c fstar_char.c fstar_date.c fstar_int64.c fstar_uint8.c fstar_int32.c c.c testlib.c fstar_uint32.c fstar_uint64.c fstar_bytes.c fstar_int16.c lowstar_printf.c fstar_io.c fstar_string.c fstar_dyn.c fstar_uint128.c fstar_uint16.c -o libkremlib.a .extract/prims.krml .extract/FStar_Pervasives_Native.krml .extract/FStar_Pervasives.krml .extract/FStar_Reflection_Types.krml .extract/FStar_Reflection_Data.krml .extract/FStar_Order.krml .extract/FStar_Reflection_Basic.krml .extract/FStar_Preorder.krml .extract/FStar_Calc.krml .extract/FStar_Squash.krml .extract/FStar_Classical.krml .extract/FStar_StrongExcludedMiddle.krml .extract/FStar_FunctionalExtensionality.krml .extract/FStar_List_Tot_Base.krml .extract/FStar_List_Tot_Properties.krml .extract/FStar_List_Tot.krml .extract/FStar_Seq_Base.krml .extract/FStar_Seq_Properties.krml .extract/FStar_Seq.krml .extract/FStar_Mul.krml .extract/FStar_Math_Lib.krml .extract/FStar_Math_Lemmas.krml .extract/FStar_BitVector.krml .extract/FStar_UInt.krml .extract/FStar_UInt32.krml .extract/FStar_Int.krml .extract/FStar_Int16.krml .extract/FStar_Ghost.krml .extract/FStar_ErasedLogic.krml .extract/FStar_UInt64.krml .extract/FStar_Set.krml .extract/FStar_PropositionalExtensionality.krml .extract/FStar_PredicateExtensionality.krml .extract/FStar_TSet.krml .extract/FStar_Monotonic_Heap.krml .extract/FStar_Heap.krml .extract/FStar_Map.krml .extract/FStar_Monotonic_HyperHeap.krml .extract/FStar_Monotonic_HyperStack.krml .extract/FStar_HyperStack.krml .extract/FStar_Monotonic_Witnessed.krml .extract/FStar_HyperStack_ST.krml .extract/FStar_HyperStack_All.krml .extract/FStar_Date.krml .extract/FStar_Char.krml .extract/FStar_Exn.krml .extract/FStar_ST.krml .extract/FStar_All.krml .extract/FStar_List.krml .extract/FStar_String.krml .extract/FStar_Reflection_Const.krml .extract/FStar_Reflection_Derived.krml .extract/FStar_Reflection_Derived_Lemmas.krml .extract/FStar_Universe.krml .extract/FStar_GSet.krml .extract/FStar_ModifiesGen.krml .extract/FStar_Range.krml .extract/FStar_Tactics_Types.krml .extract/FStar_Tactics_Result.krml .extract/FStar_Tactics_Effect.krml .extract/FStar_Tactics_Util.krml .extract/FStar_Tactics_Builtins.krml .extract/FStar_Reflection_Formula.krml .extract/FStar_Reflection.krml .extract/FStar_Tactics_Derived.krml .extract/FStar_Tactics_Logic.krml .extract/FStar_Tactics.krml .extract/FStar_BigOps.krml .extract/LowStar_Monotonic_Buffer.krml .extract/LowStar_Buffer.krml .extract/Spec_Loops.krml .extract/LowStar_BufferOps.krml .extract/C_Loops.krml .extract/FStar_UInt8.krml .extract/FStar_Kremlin_Endianness.krml .extract/FStar_UInt63.krml .extract/FStar_Dyn.krml .extract/FStar_Int63.krml .extract/FStar_Int64.krml .extract/FStar_Int32.krml .extract/FStar_Int8.krml .extract/FStar_UInt16.krml .extract/FStar_Int_Cast.krml .extract/FStar_UInt128.krml .extract/C_Endianness.krml .extract/WasmSupport.krml .extract/FStar_Float.krml .extract/FStar_IO.krml .extract/C.krml .extract/LowStar_Modifies.krml .extract/C_String.krml .extract/FStar_Bytes.krml .extract/FStar_HyperStack_IO.krml .extract/LowStar_Printf.krml .extract/C_Failure.krml .extract/TestLib.krml .extract/FStar_Int_Cast_Full.krml
  F* version: 946ec3ee
  KreMLin version: 88253438
*/

#include <inttypes.h>
#include "kremlib.h"
#include "kremlin/internal/compat.h"
#include "kremlin/internal/target.h"

#ifndef __LowStar_Printf_H
#define __LowStar_Printf_H




extern void LowStar_Printf_print_string(Prims_string uu____92);

extern void LowStar_Printf_print_char(FStar_Char_char uu____104);

extern void LowStar_Printf_print_u8(uint8_t uu____115);

extern void LowStar_Printf_print_u16(uint16_t uu____125);

extern void LowStar_Printf_print_u32(uint32_t uu____135);

extern void LowStar_Printf_print_u64(uint64_t uu____145);

extern void LowStar_Printf_print_i8(int8_t uu____155);

extern void LowStar_Printf_print_i16(int16_t uu____165);

extern void LowStar_Printf_print_i32(int32_t uu____175);

extern void LowStar_Printf_print_i64(int64_t uu____185);

extern void LowStar_Printf_print_bool(bool uu____196);

extern void LowStar_Printf_print_lmbuffer_bool(uint32_t l, bool *r);

extern void LowStar_Printf_print_lmbuffer_char(uint32_t l, FStar_Char_char *r);

extern void LowStar_Printf_print_lmbuffer_string(uint32_t l, Prims_string *r);

extern void LowStar_Printf_print_lmbuffer_u8(uint32_t l, uint8_t *r);

extern void LowStar_Printf_print_lmbuffer_u16(uint32_t l, uint16_t *r);

extern void LowStar_Printf_print_lmbuffer_u32(uint32_t l, uint32_t *r);

extern void LowStar_Printf_print_lmbuffer_u64(uint32_t l, uint64_t *r);

extern void LowStar_Printf_print_lmbuffer_i8(uint32_t l, int8_t *r);

extern void LowStar_Printf_print_lmbuffer_i16(uint32_t l, int16_t *r);

extern void LowStar_Printf_print_lmbuffer_i32(uint32_t l, int32_t *r);

extern void LowStar_Printf_print_lmbuffer_i64(uint32_t l, int64_t *r);

extern void LowStar_Printf_test(uint64_t m, uint32_t l, bool *r);

typedef struct K___Prims_int_Prims_int_s
{
  Prims_int fst;
  Prims_int snd;
}
K___Prims_int_Prims_int;

extern void
LowStar_Printf_test2(K___Prims_int_Prims_int x, void (*print_pair)(K___Prims_int_Prims_int x0));

extern void LowStar_Printf_test3(uint64_t m, uint32_t l, bool *r);

#define __LowStar_Printf_H_DEFINED
#endif
