/*
  Copyright (c) INRIA and Microsoft Corporation. All rights reserved.
  Licensed under the Apache 2.0 License.

  This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
  KreMLin invocation: C:\cygwin64\home\everest\everest\kremlin\_build\src\Kremlin.native -fparentheses -fcurly-braces -fno-shadow -header copyright-header.txt -minimal -tmpdir dist/generic -warn-error +9+11 -skip-compilation -extract-uints -add-include <inttypes.h> -add-include "kremlib.h" -add-include "kremlin/internal/compat.h" -add-include "kremlin/internal/target.h" -bundle FStar.UInt64+FStar.UInt32+FStar.UInt16+FStar.UInt8=[rename=FStar_UInt_8_16_32_64] -bundle C.Endianness= -bundle FStar.Reflection,FStar.Reflection.*,FStar.Tactics,FStar.Tactics.*,FStar.Range -library C,C.Endianness,C.Failure,C.Loops,FStar.BitVector,FStar.Bytes,FStar.Char,FStar.Int,FStar.Kremlin.Endianness,FStar.Math.Lib,FStar.ModifiesGen,FStar.Monotonic.Heap,FStar.Monotonic.HyperStack,FStar.Mul,FStar.Pervasives,FStar.Pervasives.Native,FStar.ST,FStar.UInt,FStar.UInt128,FStar.UInt63,LowStar.Printf fstar_uint16.c fstar_uint128.c fstar_dyn.c fstar_string.c fstar_io.c lowstar_printf.c fstar_int16.c fstar_bytes.c fstar_uint64.c fstar_uint32.c c_string.c testlib.c c.c fstar_int32.c fstar_uint8.c fstar_hyperstack_io.c fstar_int64.c fstar_date.c fstar_char.c prims.c fstar_int8.c -o libkremlib.a .extract/prims.krml .extract/FStar_Pervasives_Native.krml .extract/FStar_Pervasives.krml .extract/FStar_Preorder.krml .extract/FStar_Calc.krml .extract/FStar_Squash.krml .extract/FStar_Classical.krml .extract/FStar_StrongExcludedMiddle.krml .extract/FStar_FunctionalExtensionality.krml .extract/FStar_List_Tot_Base.krml .extract/FStar_List_Tot_Properties.krml .extract/FStar_List_Tot.krml .extract/FStar_Seq_Base.krml .extract/FStar_Seq_Properties.krml .extract/FStar_Seq.krml .extract/FStar_Mul.krml .extract/FStar_Math_Lib.krml .extract/FStar_Math_Lemmas.krml .extract/FStar_BitVector.krml .extract/FStar_UInt.krml .extract/FStar_UInt32.krml .extract/FStar_Int.krml .extract/FStar_Int16.krml .extract/FStar_Reflection_Types.krml .extract/FStar_Reflection_Data.krml .extract/FStar_Order.krml .extract/FStar_Reflection_Basic.krml .extract/FStar_Ghost.krml .extract/FStar_ErasedLogic.krml .extract/FStar_UInt64.krml .extract/FStar_Set.krml .extract/FStar_PropositionalExtensionality.krml .extract/FStar_PredicateExtensionality.krml .extract/FStar_TSet.krml .extract/FStar_Monotonic_Heap.krml .extract/FStar_Heap.krml .extract/FStar_Map.krml .extract/FStar_Monotonic_HyperHeap.krml .extract/FStar_Monotonic_HyperStack.krml .extract/FStar_HyperStack.krml .extract/FStar_Monotonic_Witnessed.krml .extract/FStar_HyperStack_ST.krml .extract/FStar_HyperStack_All.krml .extract/FStar_Char.krml .extract/FStar_Exn.krml .extract/FStar_ST.krml .extract/FStar_All.krml .extract/FStar_List.krml .extract/FStar_String.krml .extract/FStar_Reflection_Const.krml .extract/FStar_Reflection_Derived.krml .extract/FStar_Reflection_Derived_Lemmas.krml .extract/FStar_Date.krml .extract/FStar_Universe.krml .extract/FStar_GSet.krml .extract/FStar_ModifiesGen.krml .extract/FStar_Range.krml .extract/FStar_Tactics_Types.krml .extract/FStar_Tactics_Result.krml .extract/FStar_Tactics_Effect.krml .extract/FStar_Tactics_Util.krml .extract/FStar_Tactics_Builtins.krml .extract/FStar_Reflection_Formula.krml .extract/FStar_Reflection.krml .extract/FStar_Tactics_Derived.krml .extract/FStar_Tactics_Logic.krml .extract/FStar_Tactics.krml .extract/FStar_BigOps.krml .extract/LowStar_Monotonic_Buffer.krml .extract/LowStar_Buffer.krml .extract/Spec_Loops.krml .extract/LowStar_BufferOps.krml .extract/C_Loops.krml .extract/FStar_UInt8.krml .extract/FStar_Kremlin_Endianness.krml .extract/FStar_UInt63.krml .extract/FStar_Dyn.krml .extract/FStar_Int63.krml .extract/FStar_Int64.krml .extract/FStar_Int32.krml .extract/FStar_Int8.krml .extract/FStar_UInt16.krml .extract/FStar_Int_Cast.krml .extract/FStar_UInt128.krml .extract/C_Endianness.krml .extract/WasmSupport.krml .extract/FStar_Float.krml .extract/FStar_IO.krml .extract/C.krml .extract/LowStar_Modifies.krml .extract/C_String.krml .extract/FStar_Bytes.krml .extract/FStar_HyperStack_IO.krml .extract/LowStar_Printf.krml .extract/C_Failure.krml .extract/TestLib.krml .extract/FStar_Int_Cast_Full.krml
  F* version: 946ec3ee
  KreMLin version: 88253438
*/


#include "FStar_Order.h"

bool FStar_Order_uu___is_Lt(FStar_Order_order projectee)
{
  switch (projectee)
  {
    case FStar_Order_Lt:
      {
        return true;
      }
    default:
      {
        return false;
      }
  }
}

bool FStar_Order_uu___is_Eq(FStar_Order_order projectee)
{
  switch (projectee)
  {
    case FStar_Order_Eq:
      {
        return true;
      }
    default:
      {
        return false;
      }
  }
}

bool FStar_Order_uu___is_Gt(FStar_Order_order projectee)
{
  switch (projectee)
  {
    case FStar_Order_Gt:
      {
        return true;
      }
    default:
      {
        return false;
      }
  }
}

static bool __neq__FStar_Order_order(FStar_Order_order y, FStar_Order_order x)
{
  switch (x)
  {
    case FStar_Order_Lt:
      {
        switch (y)
        {
          case FStar_Order_Lt:
            {
              return false;
            }
          default:
            {
              return true;
            }
        }
        break;
      }
    case FStar_Order_Eq:
      {
        switch (y)
        {
          case FStar_Order_Eq:
            {
              return false;
            }
          default:
            {
              return true;
            }
        }
        break;
      }
    case FStar_Order_Gt:
      {
        switch (y)
        {
          case FStar_Order_Gt:
            {
              return false;
            }
          default:
            {
              return true;
            }
        }
        break;
      }
    default:
      {
        return true;
      }
  }
}

bool FStar_Order_ge(FStar_Order_order o)
{
  return __neq__FStar_Order_order(o, FStar_Order_Lt);
}

bool FStar_Order_le(FStar_Order_order o)
{
  return __neq__FStar_Order_order(o, FStar_Order_Gt);
}

bool FStar_Order_ne(FStar_Order_order o)
{
  return __neq__FStar_Order_order(o, FStar_Order_Eq);
}

static bool __eq__FStar_Order_order(FStar_Order_order y, FStar_Order_order x)
{
  switch (x)
  {
    case FStar_Order_Lt:
      {
        switch (y)
        {
          case FStar_Order_Lt:
            {
              return true;
            }
          default:
            {
              return false;
            }
        }
        break;
      }
    case FStar_Order_Eq:
      {
        switch (y)
        {
          case FStar_Order_Eq:
            {
              return true;
            }
          default:
            {
              return false;
            }
        }
        break;
      }
    case FStar_Order_Gt:
      {
        switch (y)
        {
          case FStar_Order_Gt:
            {
              return true;
            }
          default:
            {
              return false;
            }
        }
        break;
      }
    default:
      {
        return false;
      }
  }
}

bool FStar_Order_gt(FStar_Order_order o)
{
  return __eq__FStar_Order_order(o, FStar_Order_Gt);
}

bool FStar_Order_lt(FStar_Order_order o)
{
  return __eq__FStar_Order_order(o, FStar_Order_Lt);
}

bool FStar_Order_eq(FStar_Order_order o)
{
  return __eq__FStar_Order_order(o, FStar_Order_Eq);
}

FStar_Order_order FStar_Order_lex(FStar_Order_order o1, FStar_Order_order (*o2)())
{
  switch (o1)
  {
    case FStar_Order_Lt:
      {
        return FStar_Order_Lt;
      }
    case FStar_Order_Eq:
      {
        return o2();
      }
    case FStar_Order_Gt:
      {
        return FStar_Order_Gt;
      }
    default:
      {
        KRML_HOST_EPRINTF("KreMLin incomplete match at %s:%d\n", __FILE__, __LINE__);
        KRML_HOST_EXIT(253U);
      }
  }
}

FStar_Order_order FStar_Order_order_from_int(Prims_int i)
{
  if (Prims_op_LessThan(i, (krml_checked_int_t)0))
  {
    return FStar_Order_Lt;
  }
  else if (i == (krml_checked_int_t)0)
  {
    return FStar_Order_Eq;
  }
  else
  {
    return FStar_Order_Gt;
  }
}

Prims_int FStar_Order_int_of_order(FStar_Order_order uu___0_129)
{
  switch (uu___0_129)
  {
    case FStar_Order_Lt:
      {
        return (krml_checked_int_t)-1;
      }
    case FStar_Order_Eq:
      {
        return (krml_checked_int_t)0;
      }
    case FStar_Order_Gt:
      {
        return (krml_checked_int_t)1;
      }
    default:
      {
        KRML_HOST_EPRINTF("KreMLin incomplete match at %s:%d\n", __FILE__, __LINE__);
        KRML_HOST_EXIT(253U);
      }
  }
}

FStar_Order_order FStar_Order_compare_int(Prims_int i, Prims_int j)
{
  return FStar_Order_order_from_int(Prims_op_Subtraction(i, j));
}

