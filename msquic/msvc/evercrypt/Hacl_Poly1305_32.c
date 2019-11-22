/* 
  This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
  KreMLin invocation: C:\cygwin64\home\everest\everest\kremlin\_build\src\Kremlin.native -bundle Lib.RandomBuffer.System= -bundle Lib.PrintBuffer= -add-include "evercrypt_targetconfig.h" -bundle Test,Test.*,Hacl.Test.* -ccopts -march=native,-mtune=native -add-include "libintvector.h" -bundle Hacl.Hash.MD5+Hacl.Hash.Core.MD5+Hacl.Hash.SHA1+Hacl.Hash.Core.SHA1+Hacl.Hash.SHA2+Hacl.Hash.Core.SHA2+Hacl.Hash.Core.SHA2.Constants=Hacl.Hash.*[rename=Hacl_Hash] -bundle EverCrypt.Hash+EverCrypt.Hash.Incremental=[rename=EverCrypt_Hash] -bundle Hacl.Impl.SHA3+Hacl.SHA3=[rename=Hacl_SHA3] -bundle Hacl.Chacha20=Hacl.Impl.Chacha20,Hacl.Impl.Chacha20.* -bundle Hacl.Salsa20=Hacl.Impl.Salsa20,Hacl.Impl.Salsa20.*,Hacl.Impl.HSalsa20 -bundle Hacl.Curve25519_64=Hacl.Impl.Curve25519.Field64.Vale -bundle Hacl.Curve25519_64_Slow=Hacl.Impl.Curve25519.Field64.Hacl,Hacl.Spec.Curve25519,Hacl.Spec.Curve25519.\* -bundle Hacl.Curve25519_51=Hacl.Impl.Curve25519.Field51 -bundle Hacl.Impl.Curve25519.\*[rename=Hacl_Curve_Leftovers] -bundle Hacl.Curve25519_64_Local -bundle Hacl.Impl.Chacha20Poly1305 -bundle Hacl.Ed25519=Hacl.Impl.Ed25519.*,Hacl.Impl.BignumQ.Mul,Hacl.Impl.Load56,Hacl.Impl.SHA512.ModQ,Hacl.Impl.Store56,Hacl.Bignum25519 -bundle Hacl.Poly1305_32=Hacl.Impl.Poly1305.Field32xN_32 -bundle Hacl.Poly1305_128=Hacl.Impl.Poly1305.Field32xN_128 -bundle Hacl.Poly1305_256=Hacl.Impl.Poly1305.Field32xN_256 -bundle Hacl.NaCl=Hacl.Impl.SecretBox,Hacl.Impl.Box -bundle MerkleTree.New.Low+MerkleTree.New.Low.Serialization=[rename=MerkleTree] -bundle WasmSupport -bundle EverCrypt.CTR=EverCrypt.CTR.* -bundle Hacl.Frodo.KEM=Frodo.Params,Hacl.Impl.Frodo.*,Hacl.Impl.Matrix,Hacl.Frodo.*,Hacl.Keccak -bundle Hacl.Poly1305.Field32xN.Lemmas[rename=Hacl_Lemmas] -drop EverCrypt.TargetConfig -bundle EverCrypt.BCrypt -bundle EverCrypt.OpenSSL -bundle MerkleTree.Spec,MerkleTree.Spec.*,MerkleTree.New.High,MerkleTree.New.High.* -bundle Vale.Stdcalls.*,Vale.Interop,Vale.Interop.*,Vale.Wrapper.X64.*[rename=Vale] -bundle Vale.Inline.X64.*[rename=Vale_Inline] -bundle Vale.*[rename=Unused2] -library Vale.Stdcalls.* -no-prefix Vale.Stdcalls.* -static-header Vale_Inline -library Vale.Inline.X64.Fadd_inline -library Vale.Inline.X64.Fmul_inline -library Vale.Inline.X64.Fswap_inline -library Vale.Inline.X64.Fsqr_inline -no-prefix Vale.Inline.X64.Fadd_inline -no-prefix Vale.Inline.X64.Fmul_inline -no-prefix Vale.Inline.X64.Fswap_inline -no-prefix Vale.Inline.X64.Fsqr_inline -no-prefix EverCrypt.Vale -add-include Hacl_Curve25519_64:"curve25519-inline.h" -no-prefix MerkleTree.New.Low -no-prefix MerkleTree.New.Low.Serialization -bundle Hacl.Impl.Poly1305.Fields -bundle EverCrypt.Spec.* -library EverCrypt.AutoConfig,EverCrypt.OpenSSL,EverCrypt.BCrypt -no-prefix Hacl.Frodo.Random -bundle Hacl.Spec.*,Spec.*[rename=Hacl_Spec] -bundle Lib.*[rename=Hacl_Lib] -drop Lib.IntVector.Intrinsics -fparentheses -fno-shadow -fcurly-braces -bundle LowStar.* -bundle Prims,C.Failure,C,C.String,C.Loops,Spec.Loops,C.Endianness,FStar.*[rename=Hacl_Kremlib] -bundle Meta.* -minimal -add-include "kremlin/internal/types.h" -add-include "kremlin/lowstar_endianness.h" -add-include <string.h> -add-include "kremlin/internal/target.h" -falloca -ftail-calls -tmpdir dist/compact-msvc/ -skip-compilation obj/prims.krml obj/FStar_Pervasives_Native.krml obj/FStar_Pervasives.krml obj/FStar_Squash.krml obj/FStar_Classical.krml obj/FStar_FunctionalExtensionality.krml obj/FStar_Set.krml obj/FStar_Map.krml obj/FStar_StrongExcludedMiddle.krml obj/FStar_List_Tot_Base.krml obj/FStar_List_Tot_Properties.krml obj/FStar_List_Tot.krml obj/FStar_Seq_Base.krml obj/FStar_Seq_Properties.krml obj/FStar_Seq.krml obj/FStar_Mul.krml obj/Vale_Lib_Seqs_s.krml obj/FStar_Preorder.krml obj/FStar_Calc.krml obj/FStar_Math_Lib.krml obj/FStar_Math_Lemmas.krml obj/FStar_BitVector.krml obj/FStar_UInt.krml obj/FStar_UInt32.krml obj/FStar_UInt8.krml obj/Vale_Def_Words_s.krml obj/Vale_Def_Words_Four_s.krml obj/Vale_Def_Words_Two_s.krml obj/Vale_Def_Words_Seq_s.krml obj/Vale_Def_Opaque_s.krml obj/Vale_Def_Types_s.krml obj/Vale_X64_Machine_s.krml obj/Vale_Lib_Map16.krml obj/Vale_Def_Prop_s.krml obj/Vale_X64_Flags.krml obj/Vale_AES_AES_s.krml obj/FStar_Float.krml obj/FStar_UInt64.krml obj/FStar_Exn.krml obj/FStar_Monotonic_Witnessed.krml obj/FStar_Ghost.krml obj/FStar_ErasedLogic.krml obj/FStar_PropositionalExtensionality.krml obj/FStar_PredicateExtensionality.krml obj/FStar_TSet.krml obj/FStar_Monotonic_Heap.krml obj/FStar_Heap.krml obj/FStar_ST.krml obj/FStar_All.krml obj/FStar_IO.krml obj/Vale_Def_PossiblyMonad.krml obj/FStar_List.krml obj/Vale_Lib_Meta.krml obj/Vale_Def_Words_Two.krml obj/Vale_Lib_Seqs.krml obj/Vale_Def_TypesNative_s.krml obj/Vale_Arch_TypesNative.krml obj/Vale_Def_Words_Seq.krml obj/Vale_Arch_Types.krml obj/FStar_UInt16.krml obj/FStar_Monotonic_HyperHeap.krml obj/FStar_Monotonic_HyperStack.krml obj/FStar_HyperStack.krml obj/FStar_HyperStack_ST.krml obj/FStar_Universe.krml obj/FStar_GSet.krml obj/FStar_ModifiesGen.krml obj/FStar_Range.krml obj/FStar_Reflection_Types.krml obj/FStar_Tactics_Types.krml obj/FStar_Tactics_Result.krml obj/FStar_Tactics_Effect.krml obj/FStar_Tactics_Util.krml obj/FStar_Reflection_Data.krml obj/FStar_Reflection_Const.krml obj/FStar_Char.krml obj/FStar_String.krml obj/FStar_Order.krml obj/FStar_Reflection_Basic.krml obj/FStar_Reflection_Derived.krml obj/FStar_Tactics_Builtins.krml obj/FStar_Reflection_Formula.krml obj/FStar_Reflection_Derived_Lemmas.krml obj/FStar_Reflection.krml obj/FStar_Tactics_Derived.krml obj/FStar_Tactics_Logic.krml obj/FStar_Tactics.krml obj/FStar_BigOps.krml obj/LowStar_Monotonic_Buffer.krml obj/LowStar_BufferView_Down.krml obj/LowStar_BufferView_Up.krml obj/Vale_Interop_Views.krml obj/FStar_Option.krml obj/Vale_Lib_Set.krml obj/Vale_X64_Instruction_s.krml obj/Vale_X64_Bytes_Code_s.krml obj/Vale_Math_Poly2_Defs_s.krml obj/Vale_Math_Poly2_s.krml obj/Vale_Math_Poly2_Bits_s.krml obj/Lib_LoopCombinators.krml obj/FStar_Int.krml obj/FStar_Int64.krml obj/FStar_Int63.krml obj/FStar_Int32.krml obj/FStar_Int16.krml obj/FStar_Int8.krml obj/FStar_UInt63.krml obj/FStar_Int_Cast.krml obj/FStar_UInt128.krml obj/FStar_Int_Cast_Full.krml obj/FStar_Int128.krml obj/Lib_IntTypes.krml obj/Lib_RawIntTypes.krml obj/Lib_Sequence.krml obj/Lib_ByteSequence.krml obj/Spec_Hash_Definitions.krml obj/Spec_Hash_Lemmas0.krml obj/Spec_Hash_PadFinish.krml obj/Spec_Loops.krml obj/Spec_SHA2_Constants.krml obj/Spec_SHA2.krml obj/Vale_X64_CryptoInstructions_s.krml obj/Vale_X64_CPU_Features_s.krml obj/Vale_X64_Instructions_s.krml obj/LowStar_Buffer.krml obj/Vale_Arch_HeapTypes_s.krml obj/Vale_Interop_Types.krml obj/Vale_Arch_MachineHeap_s.krml obj/Vale_Interop_Heap_s.krml obj/LowStar_Modifies.krml obj/LowStar_ModifiesPat.krml obj/LowStar_BufferView.krml obj/Vale_Lib_BufferViewHelpers.krml obj/Vale_Interop.krml obj/Vale_Arch_HeapImpl.krml obj/Vale_Arch_Heap.krml obj/Vale_X64_Machine_Semantics_s.krml obj/LowStar_ImmutableBuffer.krml obj/Vale_Interop_Base.krml obj/Vale_X64_Memory.krml obj/Vale_Arch_MachineHeap.krml obj/Vale_X64_Stack_i.krml obj/Vale_X64_Stack_Sems.krml obj/Vale_X64_BufferViewStore.krml obj/Vale_X64_Memory_Sems.krml obj/Vale_X64_Regs.krml obj/Vale_X64_State.krml obj/Vale_X64_StateLemmas.krml obj/Vale_X64_Lemmas.krml obj/Vale_X64_Print_s.krml obj/Vale_X64_Decls.krml obj/Vale_X64_Taint_Semantics.krml obj/Vale_X64_InsLemmas.krml obj/Vale_X64_QuickCode.krml obj/Vale_X64_InsAes.krml obj/Spec_Chacha20.krml obj/Meta_Attribute.krml obj/LowStar_BufferOps.krml obj/C_Loops.krml obj/Lib_Loops.krml obj/FStar_Endianness.krml obj/LowStar_Endianness.krml obj/Lib_Buffer.krml obj/Lib_ByteBuffer.krml obj/FStar_HyperStack_All.krml obj/Lib_IntVector_Intrinsics.krml obj/Spec_GaloisField.krml obj/Spec_AES.krml obj/Lib_IntVector.krml obj/Hacl_Spec_Chacha20_Vec.krml obj/Hacl_Spec_Chacha20_Lemmas.krml obj/Lib_Sequence_Lemmas.krml obj/Hacl_Spec_Chacha20_Equiv.krml obj/Hacl_Impl_Chacha20_Core32xN.krml obj/Hacl_Impl_Chacha20_Vec.krml obj/Vale_Curve25519_Fast_lemmas_internal.krml obj/Vale_Curve25519_Fast_defs.krml obj/FStar_Algebra_CommMonoid.krml obj/FStar_Tactics_CanonCommSemiring.krml obj/Vale_Curve25519_FastUtil_helpers.krml obj/Vale_Curve25519_FastHybrid_helpers.krml obj/Vale_Curve25519_Fast_lemmas_external.krml obj/Vale_X64_QuickCodes.krml obj/Vale_X64_InsBasic.krml obj/Vale_X64_InsMem.krml obj/Vale_X64_InsVector.krml obj/Vale_X64_InsStack.krml obj/Vale_Curve25519_X64_FastHybrid.krml obj/Vale_Bignum_Defs.krml obj/Vale_Bignum_X64.krml obj/Vale_Curve25519_FastSqr_helpers.krml obj/Vale_Curve25519_X64_FastSqr.krml obj/Vale_Curve25519_FastMul_helpers.krml obj/Vale_Curve25519_X64_FastMul.krml obj/Vale_Curve25519_X64_FastWide.krml obj/Vale_Curve25519_X64_FastUtil.krml obj/Vale_X64_MemoryAdapters.krml obj/Vale_Interop_Assumptions.krml obj/Vale_Interop_X64.krml obj/Vale_AsLowStar_ValeSig.krml obj/Vale_AsLowStar_LowStarSig.krml obj/Vale_AsLowStar_MemoryHelpers.krml obj/Vale_AsLowStar_Wrapper.krml obj/Vale_Stdcalls_X64_Fadd.krml obj/Vale_Wrapper_X64_Fadd.krml obj/Lib_Meta.krml obj/Spec_HMAC_DRBG_Test_Vectors.krml obj/Vale_Math_Poly2_Defs.krml obj/Vale_Math_Poly2.krml obj/Vale_Math_Poly2_Lemmas.krml obj/Vale_Math_Poly2_Bits.krml obj/Vale_Math_Poly2_Words.krml obj/Vale_AES_GF128_s.krml obj/Vale_AES_GF128.krml obj/Vale_AES_OptPublic.krml obj/Vale_AES_X64_GF128_Mul.krml obj/Vale_AES_X64_PolyOps.krml obj/Vale_X64_Stack.krml obj/FStar_BV.krml obj/Vale_Lib_Bv_s.krml obj/Vale_Math_Bits.krml obj/Vale_Lib_Tactics.krml obj/FStar_Reflection_Arith.krml obj/FStar_Tactics_BV.krml obj/Vale_Poly1305_Bitvectors.krml obj/Vale_AES_GCTR_s.krml obj/Vale_AES_GCM_helpers.krml obj/Vale_AES_GCTR.krml obj/Vale_AES_AES256_helpers.krml obj/Vale_AES_X64_AES256.krml obj/Vale_AES_AES_helpers.krml obj/Vale_AES_X64_AES128.krml obj/Vale_AES_X64_AES.krml obj/Vale_AES_GHash_s.krml obj/Vale_AES_GHash.krml obj/Vale_AES_X64_GF128_Init.krml obj/Vale_Transformers_Locations.krml obj/Spec_SHA1.krml obj/Spec_MD5.krml obj/Spec_Agile_Hash.krml obj/Spec_Hash_Incremental.krml obj/Spec_Hash_Lemmas.krml obj/FStar_Kremlin_Endianness.krml obj/Hacl_Hash_Lemmas.krml obj/Hacl_Hash_Definitions.krml obj/Hacl_Hash_PadFinish.krml obj/Hacl_Hash_MD.krml obj/Spec_SHA2_Lemmas.krml obj/Vale_SHA_SHA_helpers.krml obj/Vale_X64_InsSha.krml obj/Vale_SHA_X64.krml obj/Vale_Stdcalls_X64_Sha.krml obj/Vale_Math_Lemmas_Int.krml obj/FStar_Tactics_Canon.krml obj/Vale_Poly1305_Spec_s.krml obj/Vale_Poly1305_Math.krml obj/Vale_Poly1305_Util.krml obj/Vale_Poly1305_X64.krml obj/Vale_Stdcalls_X64_Poly.krml obj/Vale_Wrapper_X64_Poly.krml obj/Vale_Arch_BufferFriend.krml obj/Vale_SHA_Simplify_Sha.krml obj/Vale_Wrapper_X64_Sha.krml obj/Hacl_Hash_Core_SHA2_Constants.krml obj/Hacl_Hash_Core_SHA2.krml obj/Hacl_Hash_SHA2.krml obj/Hacl_Hash_Core_SHA1.krml obj/Hacl_Hash_SHA1.krml obj/Hacl_Hash_Core_MD5.krml obj/Hacl_Hash_MD5.krml obj/C_Endianness.krml obj/C.krml obj/C_String.krml obj/C_Failure.krml obj/FStar_Int31.krml obj/FStar_UInt31.krml obj/FStar_Integers.krml obj/EverCrypt_StaticConfig.krml obj/EverCrypt_TargetConfig.krml obj/Vale_Lib_Basic.krml obj/Vale_Lib_X64_Cpuid.krml obj/Vale_Lib_X64_Cpuidstdcall.krml obj/Vale_Stdcalls_X64_Cpuid.krml obj/Vale_Wrapper_X64_Cpuid.krml obj/EverCrypt_AutoConfig2.krml obj/EverCrypt_Helpers.krml obj/EverCrypt_Hash.krml obj/Spec_SHA3_Constants.krml obj/Spec_Curve25519_Lemmas.krml obj/Spec_Curve25519.krml obj/Spec_Ed25519.krml obj/Hacl_Spec_Ed25519_Field56_Definition.krml obj/Hacl_Impl_Ed25519_Field56.krml obj/Hacl_Spec_Curve25519_Field51_Definition.krml obj/Hacl_Impl_Curve25519_Lemmas.krml obj/Hacl_Spec_Curve25519_Field51_Lemmas.krml obj/Hacl_Spec_Curve25519_Field51.krml obj/Hacl_Spec_Curve25519_Field64_Definition.krml obj/Hacl_Spec_Curve25519_Field64_Lemmas.krml obj/Hacl_Spec_Curve25519_Field64_Core.krml obj/Hacl_Spec_Curve25519_Field64.krml obj/Hacl_Impl_Curve25519_Fields_Core.krml obj/Hacl_Impl_Curve25519_Field51.krml obj/Hacl_Impl_Ed25519_Field51.krml obj/Hacl_Spec_Curve25519_Finv.krml obj/Hacl_Impl_Curve25519_Field64.krml obj/Hacl_Impl_Curve25519_Fields.krml obj/FStar_List_Pure_Base.krml obj/FStar_List_Pure_Properties.krml obj/FStar_List_Pure.krml obj/Meta_Interface.krml obj/Hacl_Spec_Curve25519_AddAndDouble.krml obj/Hacl_Impl_Curve25519_AddAndDouble.krml obj/Hacl_Impl_Curve25519_Finv.krml obj/Hacl_Impl_Curve25519_Generic.krml obj/Hacl_Meta_Curve25519.krml obj/Hacl_Curve25519_51.krml obj/Hacl_Curve25519_Finv_Field51.krml obj/Hacl_Bignum25519.krml obj/Hacl_Impl_Ed25519_PointAdd.krml obj/Hacl_Impl_Ed25519_PointDouble.krml obj/Lib_IntTypes_Compatibility.krml obj/Hacl_Impl_Ed25519_SwapConditional.krml obj/Hacl_Impl_Ed25519_Ladder.krml obj/Hacl_Impl_Ed25519_PointCompress.krml obj/Hacl_Impl_Ed25519_SecretExpand.krml obj/Hacl_Impl_Ed25519_SecretToPublic.krml obj/Hacl_Spec_BignumQ_Definitions.krml obj/Hacl_Spec_BignumQ_Lemmas.krml obj/Hacl_Spec_BignumQ_Mul.krml obj/Hacl_Impl_BignumQ_Mul.krml obj/Hacl_Impl_Load56.krml obj/Hacl_Impl_Store56.krml obj/Hacl_Impl_SHA512_ModQ.krml obj/Hacl_Impl_Ed25519_Sign_Steps.krml obj/Hacl_Impl_Ed25519_Sign.krml obj/Hacl_Impl_Ed25519_Sign_Expanded.krml obj/Vale_AES_X64_AESopt2.krml obj/Vale_AES_X64_AESGCM_expected_code.krml obj/MerkleTree_Spec.krml obj/Spec_Poly1305.krml obj/Hacl_Spec_Poly1305_Vec.krml obj/Hacl_Spec_Poly1305_Field32xN.krml obj/Hacl_Poly1305_Field32xN_Lemmas.krml obj/Hacl_Impl_Poly1305_Lemmas.krml obj/Hacl_Spec_Poly1305_Field32xN_Lemmas.krml obj/Hacl_Impl_Poly1305_Field32xN.krml obj/Hacl_Spec_Poly1305_Lemmas.krml obj/Hacl_Spec_Poly1305_Equiv.krml obj/Hacl_Impl_Poly1305_Field32xN_256.krml obj/Hacl_Impl_Poly1305_Field32xN_128.krml obj/Hacl_Impl_Poly1305_Field32xN_32.krml obj/Hacl_Impl_Poly1305_Fields.krml obj/Hacl_Impl_Poly1305.krml obj/Spec_Chacha20Poly1305.krml obj/Hacl_Impl_Chacha20Poly1305_PolyCore.krml obj/Hacl_Impl_Chacha20Poly1305.krml obj/Hacl_Meta_Chacha20Poly1305.krml obj/Hacl_Meta_Chacha20_Vec.krml obj/Hacl_Chacha20_Vec256.krml obj/Hacl_Meta_Poly1305.krml obj/Hacl_Poly1305_256.krml obj/Hacl_Chacha20Poly1305_256.krml obj/Hacl_Impl_Chacha20_Core32.krml obj/Hacl_Impl_Chacha20.krml obj/Hacl_Chacha20.krml obj/Hacl_Poly1305_32.krml obj/Hacl_Chacha20Poly1305_32.krml obj/FStar_Dyn.krml obj/EverCrypt_Vale.krml obj/EverCrypt_Specs.krml obj/EverCrypt_OpenSSL.krml obj/EverCrypt_Hacl.krml obj/EverCrypt_BCrypt.krml obj/EverCrypt_Cipher.krml obj/Vale_Stdcalls_X64_Fswap.krml obj/Vale_Wrapper_X64_Fswap.krml obj/Vale_X64_Print_Inline_s.krml obj/Vale_Inline_X64_Fswap_inline.krml obj/Vale_Stdcalls_X64_Fsqr.krml obj/Vale_Wrapper_X64_Fsqr.krml obj/Vale_Inline_X64_Fsqr_inline.krml obj/Vale_Stdcalls_X64_Fmul.krml obj/Vale_Wrapper_X64_Fmul.krml obj/Vale_Inline_X64_Fmul_inline.krml obj/Vale_Stdcalls_X64_Fsub.krml obj/Vale_Wrapper_X64_Fsub.krml obj/Vale_Inline_X64_Fadd_inline.krml obj/Hacl_Impl_Curve25519_Field64_Vale.krml obj/Hacl_Curve25519_64.krml obj/EverCrypt_Curve25519.krml obj/Hacl_Poly1305_128.krml obj/Vale_Poly1305_Equiv.krml obj/Vale_Poly1305_CallingFromLowStar.krml obj/EverCrypt_Poly1305.krml obj/Lib_Memzero.krml obj/Spec_Agile_HMAC.krml obj/Hacl_HMAC.krml obj/EverCrypt_HMAC.krml obj/Spec_HMAC_DRBG.krml obj/Hacl_HMAC_DRBG.krml obj/Lib_RandomBuffer_System.krml obj/EverCrypt_DRBG.krml obj/Spec_Agile_HKDF.krml obj/Hacl_HKDF.krml obj/EverCrypt_HKDF.krml obj/EverCrypt.krml obj/Spec_Salsa20.krml obj/Spec_SecretBox.krml obj/Spec_SecretBox_Test.krml obj/Vale_AES_X64_GHash.krml obj/Vale_AES_X64_AESCTR.krml obj/Vale_AES_X64_AESCTRplain.krml obj/Hacl_Impl_Salsa20_Core32.krml obj/Hacl_Impl_Salsa20.krml obj/Hacl_Impl_HSalsa20.krml obj/Hacl_Salsa20.krml obj/Vale_AES_Gcm_simplify.krml obj/Vale_AES_GCM_s.krml obj/Vale_Transformers_BoundedInstructionEffects.krml obj/Vale_Transformers_InstructionReorder.krml obj/Vale_Transformers_Transform.krml obj/Vale_AES_X64_AESopt.krml obj/Vale_AES_X64_AESGCM.krml obj/Vale_AES_X64_GCTR.krml obj/Vale_AES_GCM.krml obj/Vale_AES_X64_GCMencryptOpt.krml obj/Vale_AES_X64_GCMdecryptOpt.krml obj/Vale_Stdcalls_X64_GCMdecryptOpt.krml obj/Vale_Stdcalls_X64_Aes.krml obj/Vale_Wrapper_X64_AES.krml obj/Vale_Wrapper_X64_GCMdecryptOpt.krml obj/Vale_Wrapper_X64_GCMdecryptOpt256.krml obj/Hacl_Chacha20_Vec128.krml obj/Hacl_Chacha20Poly1305_128.krml obj/EverCrypt_Chacha20Poly1305.krml obj/Vale_Stdcalls_X64_GCM_IV.krml obj/Vale_Wrapper_X64_GCM_IV.krml obj/Vale_Stdcalls_X64_GCMencryptOpt.krml obj/Vale_Wrapper_X64_GCMencryptOpt.krml obj/Vale_Wrapper_X64_GCMencryptOpt256.krml obj/Vale_Stdcalls_X64_AesHash.krml obj/Vale_Wrapper_X64_AEShash.krml obj/Spec_Agile_Cipher.krml obj/Spec_Cipher_Expansion.krml obj/EverCrypt_CTR_Keys.krml obj/Spec_Agile_AEAD.krml obj/EverCrypt_Error.krml obj/EverCrypt_AEAD.krml obj/WasmSupport.krml obj/Lib_RandomSequence.krml obj/Vale_Transformers_InstructionReorderSanityChecks.krml obj/Spec_SHA3.krml obj/Hacl_Impl_SHA3.krml obj/LowStar_Vector.krml obj/LowStar_Regional.krml obj/LowStar_RVector.krml obj/LowStar_Regional_Instances.krml obj/Hacl_AES128.krml obj/TestLib.krml obj/MerkleTree_New_High.krml obj/MerkleTree_New_Low.krml obj/Spec_Frodo_Random.krml obj/Spec_Frodo_Lemmas.krml obj/Spec_Matrix.krml obj/Spec_Frodo_Gen.krml obj/Frodo_Params.krml obj/Spec_Frodo_Sample.krml obj/Spec_Frodo_Pack.krml obj/Spec_Frodo_Params.krml obj/Spec_Frodo_Encode.krml obj/Spec_Frodo_KEM_Encaps.krml obj/Hacl_SHA3.krml obj/Hacl_Keccak.krml obj/Hacl_Impl_Matrix.krml obj/Hacl_Impl_Frodo_Gen.krml obj/Hacl_Impl_Ed25519_Pow2_252m2.krml obj/Hacl_Impl_Ed25519_RecoverX.krml obj/Hacl_Impl_Ed25519_PointDecompress.krml obj/Hacl_Impl_Ed25519_PointEqual.krml obj/Hacl_Impl_Ed25519_Verify.krml obj/Hacl_Ed25519.krml obj/Lib_PrintBuffer.krml obj/Hacl_Test_Ed25519.krml obj/Spec_Frodo_KEM_Decaps.krml obj/Spec_Frodo_KEM_KeyGen.krml obj/Spec_Frodo_Test.krml obj/Spec_Frodo_KEM.krml obj/EverCrypt_Hash_Incremental.krml obj/Test_Vectors_Chacha20Poly1305.krml obj/Hacl_Impl_Frodo_Params.krml obj/Hacl_Impl_Frodo_Sample.krml obj/Spec_HMAC_DRBG_Test.krml obj/Vale_Test_X64_Args.krml obj/LowStar_Printf.krml obj/Vale_Test_X64_Vale_memcpy.krml obj/MerkleTree_New_High_Correct_Base.krml obj/MerkleTree_New_High_Correct_Flushing.krml obj/MerkleTree_New_High_Correct_Rhs.krml obj/Test_Vectors_Curve25519.krml obj/Spec_Box.krml obj/Hacl_Impl_SecretBox.krml obj/Hacl_Impl_Box.krml obj/Hacl_NaCl.krml obj/Vale_Test_X64_Memcpy.krml obj/Hacl_Impl_Curve25519_Field64_Hacl.krml obj/Hacl_Curve25519_64_Slow.krml obj/Test_Lowstarize.krml obj/Hacl_Test_HMAC_DRBG.krml obj/Vale_Math_Poly2_Galois_IntTypes.krml obj/Vale_Math_Poly2_Galois.krml obj/Vale_Math_Poly2_Galois_Lemmas.krml obj/Lib_RawBuffer.krml obj/Vale_Lib_MapTree.krml obj/Test_Vectors_Poly1305.krml obj/Vale_X64_Leakage_s.krml obj/Vale_X64_Leakage_Helpers.krml obj/Vale_X64_Leakage_Ins.krml obj/Vale_X64_Leakage.krml obj/Test_Vectors.krml obj/Spec_Agile_CTR.krml obj/Lib_PrintSequence.krml obj/Spec_Curve25519_Test.krml obj/Spec_Chacha20_Test.krml obj/Hacl_Impl_Frodo_Pack.krml obj/Vale_Lib_Operator.krml obj/MerkleTree_New_Low_Serialization.krml obj/Hacl_Frodo_Random.krml obj/Hacl_Impl_Frodo_KEM.krml obj/Hacl_Impl_Frodo_KEM_KeyGen.krml obj/Test_Hash.krml obj/MerkleTree_New_High_Correct_Path.krml obj/MerkleTree_New_High_Correct_Insertion.krml obj/MerkleTree_New_High_Correct.krml obj/Hacl_Impl_Curve25519_Field64_Local.krml obj/Hacl_Test_CSHAKE.krml obj/Spec_Hash_Test.krml obj/Vale_Stdcalls_X64_GCTR.krml obj/Vale_Wrapper_X64_GCTR.krml obj/Vale_Bignum_Lemmas.krml obj/Hacl_Impl_Frodo_Encode.krml obj/Hacl_Impl_Frodo_KEM_Encaps.krml obj/Hacl_Impl_Frodo_KEM_Decaps.krml obj/Hacl_Frodo_KEM.krml obj/Test_Vectors_Aes128.krml obj/Hacl_Curve25519_64_Local.krml obj/Hacl_Hash_Agile.krml obj/EverCrypt_Ed25519.krml obj/Hacl_Chacha20_Vec32.krml obj/Vale_X64_Xmms.krml obj/Hacl_Test_SHA3.krml obj/Spec_Chacha20Poly1305_Test.krml obj/Spec_Salsa20_Test.krml obj/Vale_Transformers_DebugPrint.krml obj/Vale_Lib_Lists.krml obj/Vale_FDefMulx_X64.krml obj/Vale_AsLowStar_Test.krml obj/Spec_SHA3_Test.krml obj/EverCrypt_CTR.krml obj/Test_NoHeap.krml obj/Test_Vectors_Aes128Gcm.krml obj/Spec_Box_Test.krml obj/Vale_X64_Bytes_Semantics.krml obj/Test.krml -silent -ccopt -Wno-unused -warn-error @4-6 -fparentheses Hacl_AES.c Lib_PrintBuffer.c Lib_Memzero.c Lib_RandomBuffer_System.c evercrypt_vale_stubs.c -o libevercrypt.a
  F* version: 946ec3ee
  KreMLin version: 88253438
 */

#include "Hacl_Poly1305_32.h"

uint32_t Hacl_Poly1305_32_blocklen = (uint32_t)16U;

void Hacl_Poly1305_32_poly1305_init(uint64_t *ctx, uint8_t *key)
{
  uint64_t *acc = ctx;
  uint64_t *pre = ctx + (uint32_t)5U;
  uint8_t *kr = key;
  acc[0U] = (uint64_t)0U;
  acc[1U] = (uint64_t)0U;
  acc[2U] = (uint64_t)0U;
  acc[3U] = (uint64_t)0U;
  acc[4U] = (uint64_t)0U;
  uint64_t u0 = load64_le(kr);
  uint64_t lo = u0;
  uint64_t u = load64_le(kr + (uint32_t)8U);
  uint64_t hi = u;
  uint64_t mask0 = (uint64_t)0x0ffffffc0fffffffU;
  uint64_t mask1 = (uint64_t)0x0ffffffc0ffffffcU;
  uint64_t lo1 = lo & mask0;
  uint64_t hi1 = hi & mask1;
  uint64_t *r = pre;
  uint64_t *r5 = pre + (uint32_t)5U;
  uint64_t *rn = pre + (uint32_t)10U;
  uint64_t *rn_5 = pre + (uint32_t)15U;
  uint64_t r_vec0 = lo1;
  uint64_t r_vec1 = hi1;
  uint64_t f00 = r_vec0 & (uint64_t)0x3ffffffU;
  uint64_t f10 = r_vec0 >> (uint32_t)26U & (uint64_t)0x3ffffffU;
  uint64_t f20 = r_vec0 >> (uint32_t)52U | (r_vec1 & (uint64_t)0x3fffU) << (uint32_t)12U;
  uint64_t f30 = r_vec1 >> (uint32_t)14U & (uint64_t)0x3ffffffU;
  uint64_t f40 = r_vec1 >> (uint32_t)40U;
  uint64_t f0 = f00;
  uint64_t f1 = f10;
  uint64_t f2 = f20;
  uint64_t f3 = f30;
  uint64_t f4 = f40;
  r[0U] = f0;
  r[1U] = f1;
  r[2U] = f2;
  r[3U] = f3;
  r[4U] = f4;
  uint64_t f200 = r[0U];
  uint64_t f21 = r[1U];
  uint64_t f22 = r[2U];
  uint64_t f23 = r[3U];
  uint64_t f24 = r[4U];
  r5[0U] = f200 * (uint64_t)5U;
  r5[1U] = f21 * (uint64_t)5U;
  r5[2U] = f22 * (uint64_t)5U;
  r5[3U] = f23 * (uint64_t)5U;
  r5[4U] = f24 * (uint64_t)5U;
  rn[0U] = r[0U];
  rn[1U] = r[1U];
  rn[2U] = r[2U];
  rn[3U] = r[3U];
  rn[4U] = r[4U];
  rn_5[0U] = r5[0U];
  rn_5[1U] = r5[1U];
  rn_5[2U] = r5[2U];
  rn_5[3U] = r5[3U];
  rn_5[4U] = r5[4U];
}

void Hacl_Poly1305_32_poly1305_update1(uint64_t *ctx, uint8_t *text)
{
  uint64_t *pre = ctx + (uint32_t)5U;
  uint64_t *acc = ctx;
  uint64_t e[5U] = { 0U };
  uint64_t u0 = load64_le(text);
  uint64_t lo = u0;
  uint64_t u = load64_le(text + (uint32_t)8U);
  uint64_t hi = u;
  uint64_t f0 = lo;
  uint64_t f1 = hi;
  uint64_t f010 = f0 & (uint64_t)0x3ffffffU;
  uint64_t f110 = f0 >> (uint32_t)26U & (uint64_t)0x3ffffffU;
  uint64_t f20 = f0 >> (uint32_t)52U | (f1 & (uint64_t)0x3fffU) << (uint32_t)12U;
  uint64_t f30 = f1 >> (uint32_t)14U & (uint64_t)0x3ffffffU;
  uint64_t f40 = f1 >> (uint32_t)40U;
  uint64_t f01 = f010;
  uint64_t f111 = f110;
  uint64_t f2 = f20;
  uint64_t f3 = f30;
  uint64_t f41 = f40;
  e[0U] = f01;
  e[1U] = f111;
  e[2U] = f2;
  e[3U] = f3;
  e[4U] = f41;
  uint64_t b = (uint64_t)0x1000000U;
  uint64_t mask = b;
  uint64_t f4 = e[4U];
  e[4U] = f4 | mask;
  uint64_t *r = pre;
  uint64_t *r5 = pre + (uint32_t)5U;
  uint64_t r0 = r[0U];
  uint64_t r1 = r[1U];
  uint64_t r2 = r[2U];
  uint64_t r3 = r[3U];
  uint64_t r4 = r[4U];
  uint64_t r51 = r5[1U];
  uint64_t r52 = r5[2U];
  uint64_t r53 = r5[3U];
  uint64_t r54 = r5[4U];
  uint64_t f10 = e[0U];
  uint64_t f11 = e[1U];
  uint64_t f12 = e[2U];
  uint64_t f13 = e[3U];
  uint64_t f14 = e[4U];
  uint64_t a0 = acc[0U];
  uint64_t a1 = acc[1U];
  uint64_t a2 = acc[2U];
  uint64_t a3 = acc[3U];
  uint64_t a4 = acc[4U];
  uint64_t a01 = a0 + f10;
  uint64_t a11 = a1 + f11;
  uint64_t a21 = a2 + f12;
  uint64_t a31 = a3 + f13;
  uint64_t a41 = a4 + f14;
  uint64_t a02 = r0 * a01;
  uint64_t a12 = r1 * a01;
  uint64_t a22 = r2 * a01;
  uint64_t a32 = r3 * a01;
  uint64_t a42 = r4 * a01;
  uint64_t a03 = a02 + r54 * a11;
  uint64_t a13 = a12 + r0 * a11;
  uint64_t a23 = a22 + r1 * a11;
  uint64_t a33 = a32 + r2 * a11;
  uint64_t a43 = a42 + r3 * a11;
  uint64_t a04 = a03 + r53 * a21;
  uint64_t a14 = a13 + r54 * a21;
  uint64_t a24 = a23 + r0 * a21;
  uint64_t a34 = a33 + r1 * a21;
  uint64_t a44 = a43 + r2 * a21;
  uint64_t a05 = a04 + r52 * a31;
  uint64_t a15 = a14 + r53 * a31;
  uint64_t a25 = a24 + r54 * a31;
  uint64_t a35 = a34 + r0 * a31;
  uint64_t a45 = a44 + r1 * a31;
  uint64_t a06 = a05 + r51 * a41;
  uint64_t a16 = a15 + r52 * a41;
  uint64_t a26 = a25 + r53 * a41;
  uint64_t a36 = a35 + r54 * a41;
  uint64_t a46 = a45 + r0 * a41;
  uint64_t t0 = a06;
  uint64_t t1 = a16;
  uint64_t t2 = a26;
  uint64_t t3 = a36;
  uint64_t t4 = a46;
  uint64_t l = t0 + (uint64_t)0U;
  uint64_t tmp0 = l & (uint64_t)0x3ffffffU;
  uint64_t c0 = l >> (uint32_t)26U;
  uint64_t l0 = t1 + c0;
  uint64_t tmp1 = l0 & (uint64_t)0x3ffffffU;
  uint64_t c1 = l0 >> (uint32_t)26U;
  uint64_t l1 = t2 + c1;
  uint64_t tmp2 = l1 & (uint64_t)0x3ffffffU;
  uint64_t c2 = l1 >> (uint32_t)26U;
  uint64_t l2 = t3 + c2;
  uint64_t tmp3 = l2 & (uint64_t)0x3ffffffU;
  uint64_t c3 = l2 >> (uint32_t)26U;
  uint64_t l3 = t4 + c3;
  uint64_t tmp4 = l3 & (uint64_t)0x3ffffffU;
  uint64_t c4 = l3 >> (uint32_t)26U;
  uint64_t l4 = tmp0 + c4 * (uint64_t)5U;
  uint64_t tmp01 = l4 & (uint64_t)0x3ffffffU;
  uint64_t c5 = l4 >> (uint32_t)26U;
  uint64_t tmp11 = tmp1 + c5;
  uint64_t o0 = tmp01;
  uint64_t o1 = tmp11;
  uint64_t o2 = tmp2;
  uint64_t o3 = tmp3;
  uint64_t o4 = tmp4;
  acc[0U] = o0;
  acc[1U] = o1;
  acc[2U] = o2;
  acc[3U] = o3;
  acc[4U] = o4;
}

void Hacl_Poly1305_32_poly1305_update(uint64_t *ctx, uint32_t len, uint8_t *text)
{
  uint64_t *pre = ctx + (uint32_t)5U;
  uint64_t *acc = ctx;
  uint32_t nb = len / (uint32_t)16U;
  uint32_t rem1 = len % (uint32_t)16U;
  for (uint32_t i = (uint32_t)0U; i < nb; i = i + (uint32_t)1U)
  {
    uint8_t *block = text + i * (uint32_t)16U;
    uint64_t e[5U] = { 0U };
    uint64_t u0 = load64_le(block);
    uint64_t lo = u0;
    uint64_t u = load64_le(block + (uint32_t)8U);
    uint64_t hi = u;
    uint64_t f0 = lo;
    uint64_t f1 = hi;
    uint64_t f010 = f0 & (uint64_t)0x3ffffffU;
    uint64_t f110 = f0 >> (uint32_t)26U & (uint64_t)0x3ffffffU;
    uint64_t f20 = f0 >> (uint32_t)52U | (f1 & (uint64_t)0x3fffU) << (uint32_t)12U;
    uint64_t f30 = f1 >> (uint32_t)14U & (uint64_t)0x3ffffffU;
    uint64_t f40 = f1 >> (uint32_t)40U;
    uint64_t f01 = f010;
    uint64_t f111 = f110;
    uint64_t f2 = f20;
    uint64_t f3 = f30;
    uint64_t f41 = f40;
    e[0U] = f01;
    e[1U] = f111;
    e[2U] = f2;
    e[3U] = f3;
    e[4U] = f41;
    uint64_t b = (uint64_t)0x1000000U;
    uint64_t mask = b;
    uint64_t f4 = e[4U];
    e[4U] = f4 | mask;
    uint64_t *r = pre;
    uint64_t *r5 = pre + (uint32_t)5U;
    uint64_t r0 = r[0U];
    uint64_t r1 = r[1U];
    uint64_t r2 = r[2U];
    uint64_t r3 = r[3U];
    uint64_t r4 = r[4U];
    uint64_t r51 = r5[1U];
    uint64_t r52 = r5[2U];
    uint64_t r53 = r5[3U];
    uint64_t r54 = r5[4U];
    uint64_t f10 = e[0U];
    uint64_t f11 = e[1U];
    uint64_t f12 = e[2U];
    uint64_t f13 = e[3U];
    uint64_t f14 = e[4U];
    uint64_t a0 = acc[0U];
    uint64_t a1 = acc[1U];
    uint64_t a2 = acc[2U];
    uint64_t a3 = acc[3U];
    uint64_t a4 = acc[4U];
    uint64_t a01 = a0 + f10;
    uint64_t a11 = a1 + f11;
    uint64_t a21 = a2 + f12;
    uint64_t a31 = a3 + f13;
    uint64_t a41 = a4 + f14;
    uint64_t a02 = r0 * a01;
    uint64_t a12 = r1 * a01;
    uint64_t a22 = r2 * a01;
    uint64_t a32 = r3 * a01;
    uint64_t a42 = r4 * a01;
    uint64_t a03 = a02 + r54 * a11;
    uint64_t a13 = a12 + r0 * a11;
    uint64_t a23 = a22 + r1 * a11;
    uint64_t a33 = a32 + r2 * a11;
    uint64_t a43 = a42 + r3 * a11;
    uint64_t a04 = a03 + r53 * a21;
    uint64_t a14 = a13 + r54 * a21;
    uint64_t a24 = a23 + r0 * a21;
    uint64_t a34 = a33 + r1 * a21;
    uint64_t a44 = a43 + r2 * a21;
    uint64_t a05 = a04 + r52 * a31;
    uint64_t a15 = a14 + r53 * a31;
    uint64_t a25 = a24 + r54 * a31;
    uint64_t a35 = a34 + r0 * a31;
    uint64_t a45 = a44 + r1 * a31;
    uint64_t a06 = a05 + r51 * a41;
    uint64_t a16 = a15 + r52 * a41;
    uint64_t a26 = a25 + r53 * a41;
    uint64_t a36 = a35 + r54 * a41;
    uint64_t a46 = a45 + r0 * a41;
    uint64_t t0 = a06;
    uint64_t t1 = a16;
    uint64_t t2 = a26;
    uint64_t t3 = a36;
    uint64_t t4 = a46;
    uint64_t l = t0 + (uint64_t)0U;
    uint64_t tmp0 = l & (uint64_t)0x3ffffffU;
    uint64_t c0 = l >> (uint32_t)26U;
    uint64_t l0 = t1 + c0;
    uint64_t tmp1 = l0 & (uint64_t)0x3ffffffU;
    uint64_t c1 = l0 >> (uint32_t)26U;
    uint64_t l1 = t2 + c1;
    uint64_t tmp2 = l1 & (uint64_t)0x3ffffffU;
    uint64_t c2 = l1 >> (uint32_t)26U;
    uint64_t l2 = t3 + c2;
    uint64_t tmp3 = l2 & (uint64_t)0x3ffffffU;
    uint64_t c3 = l2 >> (uint32_t)26U;
    uint64_t l3 = t4 + c3;
    uint64_t tmp4 = l3 & (uint64_t)0x3ffffffU;
    uint64_t c4 = l3 >> (uint32_t)26U;
    uint64_t l4 = tmp0 + c4 * (uint64_t)5U;
    uint64_t tmp01 = l4 & (uint64_t)0x3ffffffU;
    uint64_t c5 = l4 >> (uint32_t)26U;
    uint64_t tmp11 = tmp1 + c5;
    uint64_t o0 = tmp01;
    uint64_t o1 = tmp11;
    uint64_t o2 = tmp2;
    uint64_t o3 = tmp3;
    uint64_t o4 = tmp4;
    acc[0U] = o0;
    acc[1U] = o1;
    acc[2U] = o2;
    acc[3U] = o3;
    acc[4U] = o4;
  }
  if (rem1 > (uint32_t)0U)
  {
    uint8_t *last1 = text + nb * (uint32_t)16U;
    uint64_t e[5U] = { 0U };
    uint8_t tmp[16U] = { 0U };
    memcpy(tmp, last1, rem1 * sizeof last1[0U]);
    uint64_t u0 = load64_le(tmp);
    uint64_t lo = u0;
    uint64_t u = load64_le(tmp + (uint32_t)8U);
    uint64_t hi = u;
    uint64_t f0 = lo;
    uint64_t f1 = hi;
    uint64_t f010 = f0 & (uint64_t)0x3ffffffU;
    uint64_t f110 = f0 >> (uint32_t)26U & (uint64_t)0x3ffffffU;
    uint64_t f20 = f0 >> (uint32_t)52U | (f1 & (uint64_t)0x3fffU) << (uint32_t)12U;
    uint64_t f30 = f1 >> (uint32_t)14U & (uint64_t)0x3ffffffU;
    uint64_t f40 = f1 >> (uint32_t)40U;
    uint64_t f01 = f010;
    uint64_t f111 = f110;
    uint64_t f2 = f20;
    uint64_t f3 = f30;
    uint64_t f4 = f40;
    e[0U] = f01;
    e[1U] = f111;
    e[2U] = f2;
    e[3U] = f3;
    e[4U] = f4;
    uint64_t b = (uint64_t)1U << rem1 * (uint32_t)8U % (uint32_t)26U;
    uint64_t mask = b;
    uint64_t fi = e[rem1 * (uint32_t)8U / (uint32_t)26U];
    e[rem1 * (uint32_t)8U / (uint32_t)26U] = fi | mask;
    uint64_t *r = pre;
    uint64_t *r5 = pre + (uint32_t)5U;
    uint64_t r0 = r[0U];
    uint64_t r1 = r[1U];
    uint64_t r2 = r[2U];
    uint64_t r3 = r[3U];
    uint64_t r4 = r[4U];
    uint64_t r51 = r5[1U];
    uint64_t r52 = r5[2U];
    uint64_t r53 = r5[3U];
    uint64_t r54 = r5[4U];
    uint64_t f10 = e[0U];
    uint64_t f11 = e[1U];
    uint64_t f12 = e[2U];
    uint64_t f13 = e[3U];
    uint64_t f14 = e[4U];
    uint64_t a0 = acc[0U];
    uint64_t a1 = acc[1U];
    uint64_t a2 = acc[2U];
    uint64_t a3 = acc[3U];
    uint64_t a4 = acc[4U];
    uint64_t a01 = a0 + f10;
    uint64_t a11 = a1 + f11;
    uint64_t a21 = a2 + f12;
    uint64_t a31 = a3 + f13;
    uint64_t a41 = a4 + f14;
    uint64_t a02 = r0 * a01;
    uint64_t a12 = r1 * a01;
    uint64_t a22 = r2 * a01;
    uint64_t a32 = r3 * a01;
    uint64_t a42 = r4 * a01;
    uint64_t a03 = a02 + r54 * a11;
    uint64_t a13 = a12 + r0 * a11;
    uint64_t a23 = a22 + r1 * a11;
    uint64_t a33 = a32 + r2 * a11;
    uint64_t a43 = a42 + r3 * a11;
    uint64_t a04 = a03 + r53 * a21;
    uint64_t a14 = a13 + r54 * a21;
    uint64_t a24 = a23 + r0 * a21;
    uint64_t a34 = a33 + r1 * a21;
    uint64_t a44 = a43 + r2 * a21;
    uint64_t a05 = a04 + r52 * a31;
    uint64_t a15 = a14 + r53 * a31;
    uint64_t a25 = a24 + r54 * a31;
    uint64_t a35 = a34 + r0 * a31;
    uint64_t a45 = a44 + r1 * a31;
    uint64_t a06 = a05 + r51 * a41;
    uint64_t a16 = a15 + r52 * a41;
    uint64_t a26 = a25 + r53 * a41;
    uint64_t a36 = a35 + r54 * a41;
    uint64_t a46 = a45 + r0 * a41;
    uint64_t t0 = a06;
    uint64_t t1 = a16;
    uint64_t t2 = a26;
    uint64_t t3 = a36;
    uint64_t t4 = a46;
    uint64_t l = t0 + (uint64_t)0U;
    uint64_t tmp0 = l & (uint64_t)0x3ffffffU;
    uint64_t c0 = l >> (uint32_t)26U;
    uint64_t l0 = t1 + c0;
    uint64_t tmp1 = l0 & (uint64_t)0x3ffffffU;
    uint64_t c1 = l0 >> (uint32_t)26U;
    uint64_t l1 = t2 + c1;
    uint64_t tmp2 = l1 & (uint64_t)0x3ffffffU;
    uint64_t c2 = l1 >> (uint32_t)26U;
    uint64_t l2 = t3 + c2;
    uint64_t tmp3 = l2 & (uint64_t)0x3ffffffU;
    uint64_t c3 = l2 >> (uint32_t)26U;
    uint64_t l3 = t4 + c3;
    uint64_t tmp4 = l3 & (uint64_t)0x3ffffffU;
    uint64_t c4 = l3 >> (uint32_t)26U;
    uint64_t l4 = tmp0 + c4 * (uint64_t)5U;
    uint64_t tmp01 = l4 & (uint64_t)0x3ffffffU;
    uint64_t c5 = l4 >> (uint32_t)26U;
    uint64_t tmp11 = tmp1 + c5;
    uint64_t o0 = tmp01;
    uint64_t o1 = tmp11;
    uint64_t o2 = tmp2;
    uint64_t o3 = tmp3;
    uint64_t o4 = tmp4;
    acc[0U] = o0;
    acc[1U] = o1;
    acc[2U] = o2;
    acc[3U] = o3;
    acc[4U] = o4;
  }
}

void Hacl_Poly1305_32_poly1305_finish(uint8_t *tag, uint8_t *key, uint64_t *ctx)
{
  uint64_t *acc = ctx;
  uint8_t *ks = key + (uint32_t)16U;
  uint64_t f0 = acc[0U];
  uint64_t f12 = acc[1U];
  uint64_t f22 = acc[2U];
  uint64_t f32 = acc[3U];
  uint64_t f40 = acc[4U];
  uint64_t l = f0 + (uint64_t)0U;
  uint64_t tmp0 = l & (uint64_t)0x3ffffffU;
  uint64_t c0 = l >> (uint32_t)26U;
  uint64_t l0 = f12 + c0;
  uint64_t tmp1 = l0 & (uint64_t)0x3ffffffU;
  uint64_t c1 = l0 >> (uint32_t)26U;
  uint64_t l1 = f22 + c1;
  uint64_t tmp2 = l1 & (uint64_t)0x3ffffffU;
  uint64_t c2 = l1 >> (uint32_t)26U;
  uint64_t l2 = f32 + c2;
  uint64_t tmp3 = l2 & (uint64_t)0x3ffffffU;
  uint64_t c3 = l2 >> (uint32_t)26U;
  uint64_t l3 = f40 + c3;
  uint64_t tmp4 = l3 & (uint64_t)0x3ffffffU;
  uint64_t c4 = l3 >> (uint32_t)26U;
  uint64_t l4 = tmp0 + c4 * (uint64_t)5U;
  uint64_t tmp0_ = l4 & (uint64_t)0x3ffffffU;
  uint64_t c5 = l4 >> (uint32_t)26U;
  uint64_t f010 = tmp0_;
  uint64_t f110 = tmp1 + c5;
  uint64_t f210 = tmp2;
  uint64_t f310 = tmp3;
  uint64_t f410 = tmp4;
  uint64_t mh = (uint64_t)0x3ffffffU;
  uint64_t ml = (uint64_t)0x3fffffbU;
  uint64_t mask = FStar_UInt64_eq_mask(f410, mh);
  uint64_t mask1 = mask & FStar_UInt64_eq_mask(f310, mh);
  uint64_t mask2 = mask1 & FStar_UInt64_eq_mask(f210, mh);
  uint64_t mask3 = mask2 & FStar_UInt64_eq_mask(f110, mh);
  uint64_t mask4 = mask3 & ~~FStar_UInt64_gte_mask(f010, ml);
  uint64_t ph = mask4 & mh;
  uint64_t pl = mask4 & ml;
  uint64_t o0 = f010 - pl;
  uint64_t o1 = f110 - ph;
  uint64_t o2 = f210 - ph;
  uint64_t o3 = f310 - ph;
  uint64_t o4 = f410 - ph;
  uint64_t f011 = o0;
  uint64_t f111 = o1;
  uint64_t f211 = o2;
  uint64_t f311 = o3;
  uint64_t f411 = o4;
  acc[0U] = f011;
  acc[1U] = f111;
  acc[2U] = f211;
  acc[3U] = f311;
  acc[4U] = f411;
  uint64_t f00 = acc[0U];
  uint64_t f1 = acc[1U];
  uint64_t f2 = acc[2U];
  uint64_t f3 = acc[3U];
  uint64_t f4 = acc[4U];
  uint64_t f01 = f00;
  uint64_t f112 = f1;
  uint64_t f212 = f2;
  uint64_t f312 = f3;
  uint64_t f41 = f4;
  uint64_t lo = (f01 | f112 << (uint32_t)26U) | f212 << (uint32_t)52U;
  uint64_t hi = (f212 >> (uint32_t)12U | f312 << (uint32_t)14U) | f41 << (uint32_t)40U;
  uint64_t f10 = lo;
  uint64_t f11 = hi;
  uint64_t u0 = load64_le(ks);
  uint64_t lo0 = u0;
  uint64_t u = load64_le(ks + (uint32_t)8U);
  uint64_t hi0 = u;
  uint64_t f20 = lo0;
  uint64_t f21 = hi0;
  uint64_t r0 = f10 + f20;
  uint64_t r1 = f11 + f21;
  uint64_t c = (r0 ^ ((r0 ^ f20) | ((r0 - f20) ^ f20))) >> (uint32_t)63U;
  uint64_t r11 = r1 + c;
  uint64_t f30 = r0;
  uint64_t f31 = r11;
  store64_le(tag, f30);
  store64_le(tag + (uint32_t)8U, f31);
}

void Hacl_Poly1305_32_poly1305_mac(uint8_t *tag, uint32_t len, uint8_t *text, uint8_t *key)
{
  uint64_t ctx[25U] = { 0U };
  Hacl_Poly1305_32_poly1305_init(ctx, key);
  Hacl_Poly1305_32_poly1305_update(ctx, len, text);
  Hacl_Poly1305_32_poly1305_finish(tag, key, ctx);
}

