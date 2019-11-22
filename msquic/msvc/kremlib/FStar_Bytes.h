/*
  Copyright (c) INRIA and Microsoft Corporation. All rights reserved.
  Licensed under the Apache 2.0 License.

  This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
  KreMLin invocation: C:\cygwin64\home\everest\everest\kremlin\_build\src\Kremlin.native -fparentheses -fcurly-braces -fno-shadow -header copyright-header.txt -minimal -tmpdir dist/generic -warn-error +9+11 -skip-compilation -extract-uints -add-include <inttypes.h> -add-include "kremlib.h" -add-include "kremlin/internal/compat.h" -add-include "kremlin/internal/target.h" -bundle FStar.UInt64+FStar.UInt32+FStar.UInt16+FStar.UInt8=[rename=FStar_UInt_8_16_32_64] -bundle C.Endianness= -bundle FStar.Reflection,FStar.Reflection.*,FStar.Tactics,FStar.Tactics.*,FStar.Range -library C,C.Endianness,C.Failure,C.Loops,FStar.BitVector,FStar.Bytes,FStar.Char,FStar.Int,FStar.Kremlin.Endianness,FStar.Math.Lib,FStar.ModifiesGen,FStar.Monotonic.Heap,FStar.Monotonic.HyperStack,FStar.Mul,FStar.Pervasives,FStar.Pervasives.Native,FStar.ST,FStar.UInt,FStar.UInt128,FStar.UInt63,LowStar.Printf fstar_uint16.c fstar_uint128.c fstar_dyn.c fstar_string.c fstar_io.c lowstar_printf.c fstar_int16.c fstar_bytes.c fstar_uint64.c fstar_uint32.c c_string.c testlib.c c.c fstar_int32.c fstar_uint8.c fstar_hyperstack_io.c fstar_int64.c fstar_date.c fstar_char.c prims.c fstar_int8.c -o libkremlib.a .extract/prims.krml .extract/FStar_Pervasives_Native.krml .extract/FStar_Pervasives.krml .extract/FStar_Preorder.krml .extract/FStar_Calc.krml .extract/FStar_Squash.krml .extract/FStar_Classical.krml .extract/FStar_StrongExcludedMiddle.krml .extract/FStar_FunctionalExtensionality.krml .extract/FStar_List_Tot_Base.krml .extract/FStar_List_Tot_Properties.krml .extract/FStar_List_Tot.krml .extract/FStar_Seq_Base.krml .extract/FStar_Seq_Properties.krml .extract/FStar_Seq.krml .extract/FStar_Mul.krml .extract/FStar_Math_Lib.krml .extract/FStar_Math_Lemmas.krml .extract/FStar_BitVector.krml .extract/FStar_UInt.krml .extract/FStar_UInt32.krml .extract/FStar_Int.krml .extract/FStar_Int16.krml .extract/FStar_Reflection_Types.krml .extract/FStar_Reflection_Data.krml .extract/FStar_Order.krml .extract/FStar_Reflection_Basic.krml .extract/FStar_Ghost.krml .extract/FStar_ErasedLogic.krml .extract/FStar_UInt64.krml .extract/FStar_Set.krml .extract/FStar_PropositionalExtensionality.krml .extract/FStar_PredicateExtensionality.krml .extract/FStar_TSet.krml .extract/FStar_Monotonic_Heap.krml .extract/FStar_Heap.krml .extract/FStar_Map.krml .extract/FStar_Monotonic_HyperHeap.krml .extract/FStar_Monotonic_HyperStack.krml .extract/FStar_HyperStack.krml .extract/FStar_Monotonic_Witnessed.krml .extract/FStar_HyperStack_ST.krml .extract/FStar_HyperStack_All.krml .extract/FStar_Char.krml .extract/FStar_Exn.krml .extract/FStar_ST.krml .extract/FStar_All.krml .extract/FStar_List.krml .extract/FStar_String.krml .extract/FStar_Reflection_Const.krml .extract/FStar_Reflection_Derived.krml .extract/FStar_Reflection_Derived_Lemmas.krml .extract/FStar_Date.krml .extract/FStar_Universe.krml .extract/FStar_GSet.krml .extract/FStar_ModifiesGen.krml .extract/FStar_Range.krml .extract/FStar_Tactics_Types.krml .extract/FStar_Tactics_Result.krml .extract/FStar_Tactics_Effect.krml .extract/FStar_Tactics_Util.krml .extract/FStar_Tactics_Builtins.krml .extract/FStar_Reflection_Formula.krml .extract/FStar_Reflection.krml .extract/FStar_Tactics_Derived.krml .extract/FStar_Tactics_Logic.krml .extract/FStar_Tactics.krml .extract/FStar_BigOps.krml .extract/LowStar_Monotonic_Buffer.krml .extract/LowStar_Buffer.krml .extract/Spec_Loops.krml .extract/LowStar_BufferOps.krml .extract/C_Loops.krml .extract/FStar_UInt8.krml .extract/FStar_Kremlin_Endianness.krml .extract/FStar_UInt63.krml .extract/FStar_Dyn.krml .extract/FStar_Int63.krml .extract/FStar_Int64.krml .extract/FStar_Int32.krml .extract/FStar_Int8.krml .extract/FStar_UInt16.krml .extract/FStar_Int_Cast.krml .extract/FStar_UInt128.krml .extract/C_Endianness.krml .extract/WasmSupport.krml .extract/FStar_Float.krml .extract/FStar_IO.krml .extract/C.krml .extract/LowStar_Modifies.krml .extract/C_String.krml .extract/FStar_Bytes.krml .extract/FStar_HyperStack_IO.krml .extract/LowStar_Printf.krml .extract/C_Failure.krml .extract/TestLib.krml .extract/FStar_Int_Cast_Full.krml
  F* version: 946ec3ee
  KreMLin version: 88253438
*/

#include <inttypes.h>
#include "kremlib.h"
#include "kremlin/internal/compat.h"
#include "kremlin/internal/target.h"

#ifndef __FStar_Bytes_H
#define __FStar_Bytes_H




typedef uint8_t FStar_Bytes_u8;

typedef uint16_t FStar_Bytes_u16;

typedef uint32_t FStar_Bytes_u32;

typedef uint8_t FStar_Bytes_byte;

extern uint32_t FStar_Bytes_len(FStar_Bytes_bytes uu____9);

extern Prims_int FStar_Bytes_length(FStar_Bytes_bytes b);

extern FStar_Bytes_bytes FStar_Bytes_empty_bytes;

extern uint8_t FStar_Bytes_get(FStar_Bytes_bytes b, uint32_t pos);

extern uint8_t FStar_Bytes_op_String_Access(FStar_Bytes_bytes x0, uint32_t x1);

extern uint8_t FStar_Bytes_index(FStar_Bytes_bytes b, Prims_int i);

extern FStar_Bytes_bytes FStar_Bytes_create(uint32_t len1, uint8_t v1);

extern FStar_Bytes_bytes FStar_Bytes_create_(Prims_int n1, uint8_t v1);

extern FStar_Bytes_bytes FStar_Bytes_init(uint32_t len1, uint8_t (*f)(uint32_t x0));

extern FStar_Bytes_bytes FStar_Bytes_abyte(uint8_t b);

typedef struct K___uint8_t_uint8_t_s
{
  uint8_t fst;
  uint8_t snd;
}
K___uint8_t_uint8_t;

extern FStar_Bytes_bytes FStar_Bytes_twobytes(K___uint8_t_uint8_t b);

extern FStar_Bytes_bytes FStar_Bytes_append(FStar_Bytes_bytes b1, FStar_Bytes_bytes b2);

extern FStar_Bytes_bytes FStar_Bytes_op_At_Bar(FStar_Bytes_bytes x0, FStar_Bytes_bytes x1);

extern FStar_Bytes_bytes FStar_Bytes_slice(FStar_Bytes_bytes b, uint32_t s, uint32_t e);

extern FStar_Bytes_bytes FStar_Bytes_slice_(FStar_Bytes_bytes b, Prims_int s, Prims_int e);

extern FStar_Bytes_bytes FStar_Bytes_sub(FStar_Bytes_bytes b, uint32_t s, uint32_t l);

typedef struct K___FStar_Bytes_bytes_FStar_Bytes_bytes_s
{
  FStar_Bytes_bytes fst;
  FStar_Bytes_bytes snd;
}
K___FStar_Bytes_bytes_FStar_Bytes_bytes;

extern K___FStar_Bytes_bytes_FStar_Bytes_bytes
FStar_Bytes_split(FStar_Bytes_bytes b, uint32_t k);

extern K___FStar_Bytes_bytes_FStar_Bytes_bytes
FStar_Bytes_split_(FStar_Bytes_bytes b, Prims_int k);

extern Prims_pos FStar_Bytes_repr_bytes(Prims_int n1);

extern Prims_int FStar_Bytes_int_of_bytes(FStar_Bytes_bytes b);

extern FStar_Bytes_bytes FStar_Bytes_bytes_of_int(Prims_int k, Prims_int n1);

extern uint32_t FStar_Bytes_int32_of_bytes(FStar_Bytes_bytes b);

extern uint16_t FStar_Bytes_int16_of_bytes(FStar_Bytes_bytes b);

extern uint8_t FStar_Bytes_int8_of_bytes(FStar_Bytes_bytes b);

extern FStar_Bytes_bytes FStar_Bytes_bytes_of_int32(uint32_t n1);

extern FStar_Bytes_bytes FStar_Bytes_bytes_of_int16(uint16_t n1);

extern FStar_Bytes_bytes FStar_Bytes_bytes_of_int8(uint8_t n1);

extern FStar_Bytes_bytes
FStar_Bytes_xor(uint32_t n1, FStar_Bytes_bytes b1, FStar_Bytes_bytes b2);

extern FStar_Bytes_bytes
FStar_Bytes_xor_(Prims_int n1, FStar_Bytes_bytes b1, FStar_Bytes_bytes b2);

extern FStar_Bytes_bytes FStar_Bytes_utf8_encode(Prims_string s);

#define FStar_Pervasives_Native_None 0
#define FStar_Pervasives_Native_Some 1

typedef uint8_t FStar_Pervasives_Native_option__Prims_string_tags;

typedef struct FStar_Pervasives_Native_option__Prims_string_s
{
  FStar_Pervasives_Native_option__Prims_string_tags tag;
  Prims_string v;
}
FStar_Pervasives_Native_option__Prims_string;

extern FStar_Pervasives_Native_option__Prims_string FStar_Bytes_iutf8_opt(FStar_Bytes_bytes m);

extern Prims_string FStar_Bytes_string_of_hex(Prims_string uu____704);

extern FStar_Bytes_bytes FStar_Bytes_bytes_of_hex(Prims_string uu____718);

extern Prims_string FStar_Bytes_hex_of_string(Prims_string uu____732);

extern Prims_string FStar_Bytes_hex_of_bytes(FStar_Bytes_bytes uu____746);

extern Prims_string FStar_Bytes_print_bytes(FStar_Bytes_bytes uu____760);

extern FStar_Bytes_bytes FStar_Bytes_bytes_of_string(Prims_string uu____774);

extern FStar_Bytes_bytes FStar_Bytes_of_buffer(uint32_t l, uint8_t *buf1);

extern void FStar_Bytes_store_bytes(FStar_Bytes_bytes src, uint8_t *dst);

#define __FStar_Bytes_H_DEFINED
#endif
