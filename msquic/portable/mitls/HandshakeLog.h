/* 
  This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
  KreMLin invocation: /home/everest/everest/kremlin/krml -minimal -add-include "kremlib.h" -fnoanonymous-unions -warn-error -9-7-6@4-14-15 -fsopts --debug,yes -verbose -library EverCrypt,EverCrypt.*,Hacl.*,Interop_assumptions,Check_sha_stdcall,Sha_update_bytes_stdcall,Check_aesni_stdcall -drop MonotoneMap -drop MonotoneMapNonDep -drop FStar.Tactics.\* -drop FStar.Tactics -drop Crypto.AEAD.\* -drop Crypto.HKDF -drop Crypto.HMAC -add-include "hacks.h" -add-include "kremlin/internal/compat.h" -bundle LowParse.\*,LowParseWrappers[rename=LowParse] -bundle Format.\* -bundle EverCrypt=EverCrypt,EverCrypt.\* -bundle FStar.\*,LowStar.\*,C,C.\*[rename=Mitls_Kremlib] -bundle Parsers.\* -bundle Spec.\* -bundle Meta.\* -bundle Lib.*[rename=Hacl_Lib] -bundle TLSConstants=TLSConstants,QD.TLS_protocolVersion,List.Helpers -bundle Hashing=Hashing.Spec,Hashing,Hashing.CRF,HMAC,HKDF,HMAC.UFCMA -bundle Old.Handshake=Old.HMAC.UFCMA,Old.Epochs,Old.KeySchedule,Old.Handshake -bundle StatefulLHAE=AEAD_GCM,LHAEPlain,StatefulPlain,StatefulLHAE -bundle StreamAE=StreamPlain,StreamAE -bundle CommonDH=TLS.Curve25519,DHGroup,ECGroup,CommonDH -bundle Content=Content,DataStream -bundle Record=Record,StAE,Transport,StreamDeltas -bundle PMS=PMS,RSAKey,TLSPRF -bundle Crypto.Plain=Buffer.Utils,Crypto.Indexing,Crypto.Plain,Crypto.Symmetric.Bytes -bundle Flags=DebugFlags,Flags,Flag,TLSInfoFlags -bundle Vale.Stdcalls.*,Vale.Interop,Vale.Interop.*,Vale.Wrapper.X64.*[rename=Vale] -bundle Vale.Inline.X64.*[rename=Vale_Inline] -bundle Vale.*[rename=Unused2] -ldopts -L,/home/everest/everest/MLCrypto/openssl,-lcrypto,-lssl extract/Kremlin/FStar_Pervasives_Native.krml extract/Kremlin/FStar_Pervasives.krml extract/Kremlin/FStar_Squash.krml extract/Kremlin/FStar_Classical.krml extract/Kremlin/FStar_Preorder.krml extract/Kremlin/FStar_Calc.krml extract/Kremlin/FStar_Mul.krml extract/Kremlin/FStar_Math_Lib.krml extract/Kremlin/FStar_Math_Lemmas.krml extract/Kremlin/FStar_StrongExcludedMiddle.krml extract/Kremlin/FStar_FunctionalExtensionality.krml extract/Kremlin/FStar_List_Tot_Base.krml extract/Kremlin/FStar_List_Tot_Properties.krml extract/Kremlin/FStar_List_Tot.krml extract/Kremlin/FStar_Seq_Base.krml extract/Kremlin/FStar_Seq_Properties.krml extract/Kremlin/FStar_Seq.krml extract/Kremlin/FStar_BitVector.krml extract/Kremlin/FStar_UInt.krml extract/Kremlin/FStar_UInt32.krml extract/Kremlin/FStar_UInt8.krml extract/Kremlin/FStar_Exn.krml extract/Kremlin/FStar_Set.krml extract/Kremlin/FStar_Monotonic_Witnessed.krml extract/Kremlin/FStar_Ghost.krml extract/Kremlin/FStar_ErasedLogic.krml extract/Kremlin/FStar_PropositionalExtensionality.krml extract/Kremlin/FStar_PredicateExtensionality.krml extract/Kremlin/FStar_TSet.krml extract/Kremlin/FStar_Monotonic_Heap.krml extract/Kremlin/FStar_Heap.krml extract/Kremlin/FStar_ST.krml extract/Kremlin/FStar_All.krml extract/Kremlin/Lib_LoopCombinators.krml extract/Kremlin/FStar_Int.krml extract/Kremlin/FStar_Int64.krml extract/Kremlin/FStar_Int63.krml extract/Kremlin/FStar_Int32.krml extract/Kremlin/FStar_Int16.krml extract/Kremlin/FStar_Int8.krml extract/Kremlin/FStar_UInt64.krml extract/Kremlin/FStar_UInt63.krml extract/Kremlin/FStar_UInt16.krml extract/Kremlin/FStar_Int_Cast.krml extract/Kremlin/FStar_UInt128.krml extract/Kremlin/FStar_Int_Cast_Full.krml extract/Kremlin/FStar_Int128.krml extract/Kremlin/Lib_IntTypes.krml extract/Kremlin/Lib_RawIntTypes.krml extract/Kremlin/Lib_Sequence.krml extract/Kremlin/Lib_ByteSequence.krml extract/Kremlin/Spec_Chacha20.krml extract/Kremlin/Meta_Attribute.krml extract/Kremlin/FStar_Map.krml extract/Kremlin/FStar_Monotonic_HyperHeap.krml extract/Kremlin/FStar_Monotonic_HyperStack.krml extract/Kremlin/FStar_HyperStack.krml extract/Kremlin/FStar_HyperStack_ST.krml extract/Kremlin/FStar_Universe.krml extract/Kremlin/FStar_GSet.krml extract/Kremlin/FStar_ModifiesGen.krml extract/Kremlin/FStar_Range.krml extract/Kremlin/FStar_Reflection_Types.krml extract/Kremlin/FStar_Tactics_Types.krml extract/Kremlin/FStar_Tactics_Result.krml extract/Kremlin/FStar_Tactics_Effect.krml extract/Kremlin/FStar_Tactics_Util.krml extract/Kremlin/FStar_Reflection_Data.krml extract/Kremlin/FStar_Reflection_Const.krml extract/Kremlin/FStar_Char.krml extract/Kremlin/FStar_List.krml extract/Kremlin/FStar_String.krml extract/Kremlin/FStar_Order.krml extract/Kremlin/FStar_Reflection_Basic.krml extract/Kremlin/FStar_Reflection_Derived.krml extract/Kremlin/FStar_Tactics_Builtins.krml extract/Kremlin/FStar_Reflection_Formula.krml extract/Kremlin/FStar_Reflection_Derived_Lemmas.krml extract/Kremlin/FStar_Reflection.krml extract/Kremlin/FStar_Tactics_Derived.krml extract/Kremlin/FStar_Tactics_Logic.krml extract/Kremlin/FStar_Tactics.krml extract/Kremlin/FStar_BigOps.krml extract/Kremlin/LowStar_Monotonic_Buffer.krml extract/Kremlin/LowStar_Buffer.krml extract/Kremlin/LowStar_BufferOps.krml extract/Kremlin/Spec_Loops.krml extract/Kremlin/C_Loops.krml extract/Kremlin/Lib_Loops.krml extract/Kremlin/FStar_Endianness.krml extract/Kremlin/LowStar_Endianness.krml extract/Kremlin/LowStar_ImmutableBuffer.krml extract/Kremlin/Lib_Buffer.krml extract/Kremlin/Lib_ByteBuffer.krml extract/Kremlin/FStar_HyperStack_All.krml extract/Kremlin/Lib_IntVector_Intrinsics.krml extract/Kremlin/Spec_GaloisField.krml extract/Kremlin/Spec_AES.krml extract/Kremlin/Lib_IntVector.krml extract/Kremlin/Hacl_Spec_Chacha20_Vec.krml extract/Kremlin/Hacl_Spec_Chacha20_Lemmas.krml extract/Kremlin/Lib_Sequence_Lemmas.krml extract/Kremlin/Hacl_Spec_Chacha20_Equiv.krml extract/Kremlin/Hacl_Impl_Chacha20_Core32xN.krml extract/Kremlin/Hacl_Impl_Chacha20_Vec.krml extract/Kremlin/Vale_Lib_Set.krml extract/Kremlin/Vale_Def_Opaque_s.krml extract/Kremlin/Vale_Lib_Meta.krml extract/Kremlin/Vale_Def_Words_s.krml extract/Kremlin/Vale_Def_Words_Two_s.krml extract/Kremlin/Vale_Lib_Seqs_s.krml extract/Kremlin/Vale_Def_Words_Four_s.krml extract/Kremlin/Vale_Def_Words_Seq_s.krml extract/Kremlin/Vale_Def_Types_s.krml extract/Kremlin/Vale_Def_Words_Two.krml extract/Kremlin/Vale_Lib_Seqs.krml extract/Kremlin/Vale_Def_TypesNative_s.krml extract/Kremlin/Vale_Arch_TypesNative.krml extract/Kremlin/Vale_Def_Words_Seq.krml extract/Kremlin/Vale_Arch_Types.krml extract/Kremlin/Vale_Def_Prop_s.krml extract/Kremlin/Vale_Arch_MachineHeap_s.krml extract/Kremlin/Vale_Arch_MachineHeap.krml extract/Kremlin/FStar_Option.krml extract/Kremlin/Vale_X64_Machine_s.krml extract/Kremlin/Vale_X64_Instruction_s.krml extract/Kremlin/Vale_X64_Bytes_Code_s.krml extract/Kremlin/Vale_AES_AES_s.krml extract/Kremlin/Vale_Math_Poly2_Defs_s.krml extract/Kremlin/Vale_Math_Poly2_s.krml extract/Kremlin/Vale_Math_Poly2_Bits_s.krml extract/Kremlin/Spec_Hash_Definitions.krml extract/Kremlin/Spec_Hash_Lemmas0.krml extract/Kremlin/Spec_Hash_PadFinish.krml extract/Kremlin/Spec_SHA2_Constants.krml extract/Kremlin/Spec_SHA2.krml extract/Kremlin/Vale_X64_CryptoInstructions_s.krml extract/Kremlin/Vale_X64_CPU_Features_s.krml extract/Kremlin/Vale_X64_Instructions_s.krml extract/Kremlin/LowStar_BufferView_Down.krml extract/Kremlin/LowStar_BufferView_Up.krml extract/Kremlin/Vale_Interop_Views.krml extract/Kremlin/Vale_Arch_HeapTypes_s.krml extract/Kremlin/Vale_Interop_Types.krml extract/Kremlin/Vale_Interop_Heap_s.krml extract/Kremlin/LowStar_Modifies.krml extract/Kremlin/LowStar_ModifiesPat.krml extract/Kremlin/LowStar_BufferView.krml extract/Kremlin/Vale_Lib_BufferViewHelpers.krml extract/Kremlin/Vale_Interop.krml extract/Kremlin/Vale_Arch_HeapImpl.krml extract/Kremlin/Vale_Arch_Heap.krml extract/Kremlin/Vale_X64_Machine_Semantics_s.krml extract/Kremlin/Vale_Interop_Base.krml extract/Kremlin/Vale_X64_Memory.krml extract/Kremlin/Vale_X64_Stack_i.krml extract/Kremlin/Vale_Lib_Map16.krml extract/Kremlin/Vale_X64_Flags.krml extract/Kremlin/Vale_Curve25519_Fast_lemmas_internal.krml extract/Kremlin/Vale_Curve25519_Fast_defs.krml extract/Kremlin/FStar_Algebra_CommMonoid.krml extract/Kremlin/FStar_Tactics_CanonCommSemiring.krml extract/Kremlin/Vale_Curve25519_FastUtil_helpers.krml extract/Kremlin/Vale_Curve25519_FastHybrid_helpers.krml extract/Kremlin/Vale_Curve25519_Fast_lemmas_external.krml extract/Kremlin/Vale_X64_Regs.krml extract/Kremlin/FStar_Float.krml extract/Kremlin/FStar_IO.krml extract/Kremlin/Vale_Def_PossiblyMonad.krml extract/Kremlin/Vale_X64_Stack_Sems.krml extract/Kremlin/Vale_X64_BufferViewStore.krml extract/Kremlin/Vale_X64_Memory_Sems.krml extract/Kremlin/Vale_X64_State.krml extract/Kremlin/Vale_X64_StateLemmas.krml extract/Kremlin/Vale_X64_Lemmas.krml extract/Kremlin/Vale_X64_Print_s.krml extract/Kremlin/Vale_X64_Decls.krml extract/Kremlin/Vale_X64_QuickCode.krml extract/Kremlin/Vale_X64_QuickCodes.krml extract/Kremlin/Vale_X64_Taint_Semantics.krml extract/Kremlin/Vale_X64_InsLemmas.krml extract/Kremlin/Vale_X64_InsBasic.krml extract/Kremlin/Vale_X64_InsMem.krml extract/Kremlin/Vale_X64_InsVector.krml extract/Kremlin/Vale_X64_InsStack.krml extract/Kremlin/Vale_Curve25519_X64_FastHybrid.krml extract/Kremlin/Vale_Bignum_Defs.krml extract/Kremlin/Vale_Bignum_X64.krml extract/Kremlin/Vale_Curve25519_FastSqr_helpers.krml extract/Kremlin/Vale_Curve25519_X64_FastSqr.krml extract/Kremlin/Vale_Curve25519_FastMul_helpers.krml extract/Kremlin/Vale_Curve25519_X64_FastMul.krml extract/Kremlin/Vale_Curve25519_X64_FastWide.krml extract/Kremlin/Vale_Curve25519_X64_FastUtil.krml extract/Kremlin/Vale_X64_MemoryAdapters.krml extract/Kremlin/Vale_Interop_Assumptions.krml extract/Kremlin/Vale_Interop_X64.krml extract/Kremlin/Vale_AsLowStar_ValeSig.krml extract/Kremlin/Vale_AsLowStar_LowStarSig.krml extract/Kremlin/Vale_AsLowStar_MemoryHelpers.krml extract/Kremlin/Vale_AsLowStar_Wrapper.krml extract/Kremlin/Vale_Stdcalls_X64_Fadd.krml extract/Kremlin/Vale_Wrapper_X64_Fadd.krml extract/Kremlin/Spec_SHA1.krml extract/Kremlin/Spec_MD5.krml extract/Kremlin/Spec_Agile_Hash.krml extract/Kremlin/Spec_Hash_Incremental.krml extract/Kremlin/Spec_Hash_Lemmas.krml extract/Kremlin/FStar_Kremlin_Endianness.krml extract/Kremlin/Hacl_Hash_Lemmas.krml extract/Kremlin/Hacl_Hash_Definitions.krml extract/Kremlin/Hacl_Hash_PadFinish.krml extract/Kremlin/Hacl_Hash_MD.krml extract/Kremlin/Spec_SHA2_Lemmas.krml extract/Kremlin/Vale_X64_Stack.krml extract/Kremlin/Vale_SHA_SHA_helpers.krml extract/Kremlin/Vale_X64_InsSha.krml extract/Kremlin/Vale_SHA_X64.krml extract/Kremlin/Vale_Stdcalls_X64_Sha.krml extract/Kremlin/FStar_BV.krml extract/Kremlin/FStar_Reflection_Arith.krml extract/Kremlin/FStar_Tactics_BV.krml extract/Kremlin/Vale_Lib_Bv_s.krml extract/Kremlin/Vale_Math_Bits.krml extract/Kremlin/Vale_Lib_Tactics.krml extract/Kremlin/Vale_Poly1305_Bitvectors.krml extract/Kremlin/Vale_Math_Lemmas_Int.krml extract/Kremlin/FStar_Tactics_Canon.krml extract/Kremlin/Vale_Poly1305_Spec_s.krml extract/Kremlin/Vale_Poly1305_Math.krml extract/Kremlin/Vale_Poly1305_Util.krml extract/Kremlin/Vale_Poly1305_X64.krml extract/Kremlin/Vale_Stdcalls_X64_Poly.krml extract/Kremlin/Vale_Wrapper_X64_Poly.krml extract/Kremlin/Vale_Arch_BufferFriend.krml extract/Kremlin/Vale_SHA_Simplify_Sha.krml extract/Kremlin/Vale_Wrapper_X64_Sha.krml extract/Kremlin/Hacl_Hash_Core_SHA2_Constants.krml extract/Kremlin/Hacl_Hash_Core_SHA2.krml extract/Kremlin/Hacl_Hash_SHA2.krml extract/Kremlin/Hacl_Hash_Core_SHA1.krml extract/Kremlin/Hacl_Hash_SHA1.krml extract/Kremlin/Hacl_Hash_Core_MD5.krml extract/Kremlin/Hacl_Hash_MD5.krml extract/Kremlin/C_Endianness.krml extract/Kremlin/C.krml extract/Kremlin/C_String.krml extract/Kremlin/C_Failure.krml extract/Kremlin/FStar_Int31.krml extract/Kremlin/FStar_UInt31.krml extract/Kremlin/FStar_Integers.krml extract/Kremlin/EverCrypt_StaticConfig.krml extract/Kremlin/EverCrypt_TargetConfig.krml extract/Kremlin/Vale_Lib_Basic.krml extract/Kremlin/Vale_Lib_X64_Cpuid.krml extract/Kremlin/Vale_Lib_X64_Cpuidstdcall.krml extract/Kremlin/Vale_Stdcalls_X64_Cpuid.krml extract/Kremlin/Vale_Wrapper_X64_Cpuid.krml extract/Kremlin/EverCrypt_AutoConfig2.krml extract/Kremlin/EverCrypt_Helpers.krml extract/Kremlin/EverCrypt_Hash.krml extract/Kremlin/Spec_Agile_HMAC.krml extract/Kremlin/Hacl_HMAC.krml extract/Kremlin/EverCrypt_HMAC.krml extract/Kremlin/Declassify.krml extract/Kremlin/FStar_Bytes.krml extract/Kremlin/Hashing_Spec.krml extract/Kremlin/LowParse_Bytes32.krml extract/Kremlin/LowParse_Bytes.krml extract/Kremlin/LowParse_Spec_Base.krml extract/Kremlin/LowParse_SLow_Base.krml extract/Kremlin/LowParse_Spec_Option.krml extract/Kremlin/LowParse_SLow_Option.krml extract/Kremlin/LowParse_Spec_Combinators.krml extract/Kremlin/LowParse_Spec_IfThenElse.krml extract/Kremlin/Spec_Curve25519_Lemmas.krml extract/Kremlin/Spec_Curve25519.krml extract/Kremlin/Hacl_Spec_Curve25519_AddAndDouble.krml extract/Kremlin/Hacl_Impl_Curve25519_Lemmas.krml extract/Kremlin/Hacl_Spec_Curve25519_Field64_Definition.krml extract/Kremlin/Hacl_Spec_Curve25519_Field64_Lemmas.krml extract/Kremlin/Hacl_Spec_Curve25519_Field64_Core.krml extract/Kremlin/Hacl_Spec_Curve25519_Field64.krml extract/Kremlin/Hacl_Spec_Curve25519_Field51_Definition.krml extract/Kremlin/Hacl_Spec_Curve25519_Field51_Lemmas.krml extract/Kremlin/Hacl_Spec_Curve25519_Field51.krml extract/Kremlin/Hacl_Impl_Curve25519_Fields_Core.krml extract/Kremlin/Hacl_Impl_Curve25519_Field64.krml extract/Kremlin/Hacl_Impl_Curve25519_Field51.krml extract/Kremlin/Hacl_Impl_Curve25519_Fields.krml extract/Kremlin/Hacl_Impl_Curve25519_AddAndDouble.krml extract/Kremlin/LowParse_SLow_Combinators.krml extract/Kremlin/LowParse_Spec_List.krml extract/Kremlin/LowParse_SLow_List.krml extract/Kremlin/Spec_Poly1305.krml extract/Kremlin/Hacl_Spec_Poly1305_Vec.krml extract/Kremlin/Hacl_Spec_Poly1305_Field32xN.krml extract/Kremlin/Hacl_Poly1305_Field32xN_Lemmas.krml extract/Kremlin/Hacl_Impl_Poly1305_Lemmas.krml extract/Kremlin/Hacl_Spec_Poly1305_Field32xN_Lemmas.krml extract/Kremlin/Hacl_Impl_Poly1305_Field32xN.krml extract/Kremlin/Hacl_Spec_Poly1305_Lemmas.krml extract/Kremlin/Hacl_Spec_Poly1305_Equiv.krml extract/Kremlin/Hacl_Impl_Poly1305_Field32xN_256.krml extract/Kremlin/Hacl_Impl_Poly1305_Field32xN_128.krml extract/Kremlin/Hacl_Impl_Poly1305_Field32xN_32.krml extract/Kremlin/Hacl_Impl_Poly1305_Fields.krml extract/Kremlin/Hacl_Impl_Poly1305.krml extract/Kremlin/Spec_Chacha20Poly1305.krml extract/Kremlin/Hacl_Impl_Chacha20Poly1305_PolyCore.krml extract/Kremlin/Hacl_Impl_Chacha20Poly1305.krml extract/Kremlin/FStar_List_Pure_Base.krml extract/Kremlin/FStar_List_Pure_Properties.krml extract/Kremlin/FStar_List_Pure.krml extract/Kremlin/Meta_Interface.krml extract/Kremlin/Hacl_Meta_Chacha20Poly1305.krml extract/Kremlin/Hacl_Impl_Chacha20_Core32.krml extract/Kremlin/Hacl_Impl_Chacha20.krml extract/Kremlin/Hacl_Chacha20.krml extract/Kremlin/Hacl_Meta_Poly1305.krml extract/Kremlin/Hacl_Poly1305_32.krml extract/Kremlin/Hacl_Chacha20Poly1305_32.krml extract/Kremlin/FStar_Dyn.krml extract/Kremlin/EverCrypt_Vale.krml extract/Kremlin/EverCrypt_Specs.krml extract/Kremlin/EverCrypt_OpenSSL.krml extract/Kremlin/EverCrypt_Hacl.krml extract/Kremlin/EverCrypt_BCrypt.krml extract/Kremlin/EverCrypt_Cipher.krml extract/Kremlin/Hacl_Spec_Curve25519_Finv.krml extract/Kremlin/Hacl_Impl_Curve25519_Finv.krml extract/Kremlin/Hacl_Impl_Curve25519_Generic.krml extract/Kremlin/Hacl_Meta_Curve25519.krml extract/Kremlin/Hacl_Curve25519_51.krml extract/Kremlin/Vale_Stdcalls_X64_Fswap.krml extract/Kremlin/Vale_Wrapper_X64_Fswap.krml extract/Kremlin/Vale_X64_Print_Inline_s.krml extract/Kremlin/Vale_Inline_X64_Fswap_inline.krml extract/Kremlin/Vale_Stdcalls_X64_Fsqr.krml extract/Kremlin/Vale_Wrapper_X64_Fsqr.krml extract/Kremlin/Vale_Inline_X64_Fsqr_inline.krml extract/Kremlin/Vale_Stdcalls_X64_Fmul.krml extract/Kremlin/Vale_Wrapper_X64_Fmul.krml extract/Kremlin/Vale_Inline_X64_Fmul_inline.krml extract/Kremlin/Vale_Stdcalls_X64_Fsub.krml extract/Kremlin/Vale_Wrapper_X64_Fsub.krml extract/Kremlin/Vale_Inline_X64_Fadd_inline.krml extract/Kremlin/Hacl_Impl_Curve25519_Field64_Vale.krml extract/Kremlin/Hacl_Curve25519_64.krml extract/Kremlin/EverCrypt_Curve25519.krml extract/Kremlin/Hacl_Poly1305_128.krml extract/Kremlin/Hacl_Poly1305_256.krml extract/Kremlin/Vale_Poly1305_Equiv.krml extract/Kremlin/Vale_Poly1305_CallingFromLowStar.krml extract/Kremlin/EverCrypt_Poly1305.krml extract/Kremlin/Lib_Memzero.krml extract/Kremlin/Spec_HMAC_DRBG.krml extract/Kremlin/Hacl_HMAC_DRBG.krml extract/Kremlin/Lib_RandomBuffer_System.krml extract/Kremlin/EverCrypt_DRBG.krml extract/Kremlin/Spec_Agile_HKDF.krml extract/Kremlin/Hacl_HKDF.krml extract/Kremlin/EverCrypt_HKDF.krml extract/Kremlin/EverCrypt.krml extract/Kremlin/FStar_Printf.krml extract/Kremlin/FStar_Error.krml extract/Kremlin/FStar_Tcp.krml extract/Kremlin/LowParse_Spec_FLData.krml extract/Kremlin/LowParse_Math.krml extract/Kremlin/LowParse_Slice.krml extract/Kremlin/LowParse_Low_Base.krml extract/Kremlin/LowParse_Low_Combinators.krml extract/Kremlin/LowParse_Low_FLData.krml extract/Kremlin/LowParse_BigEndian.krml extract/Kremlin/LowParse_Spec_Int_Aux.krml extract/Kremlin/LowParse_Spec_Int.krml extract/Kremlin/LowParse_Spec_BoundedInt.krml extract/Kremlin/LowParse_BigEndianImpl_Base.krml extract/Kremlin/LowParse_BigEndianImpl_Low.krml extract/Kremlin/LowParse_Low_BoundedInt.krml extract/Kremlin/LowParse_Spec_SeqBytes_Base.krml extract/Kremlin/LowParse_Spec_DER.krml extract/Kremlin/LowParse_Spec_BCVLI.krml extract/Kremlin/LowParse_Spec_AllIntegers.krml extract/Kremlin/LowParse_Spec_VLData.krml extract/Kremlin/LowParse_Low_VLData.krml extract/Kremlin/LowParse_Spec_VLGen.krml extract/Kremlin/LowParse_Low_VLGen.krml extract/Kremlin/LowParse_Spec_Int_Unique.krml extract/Kremlin/LowParse_Low_Int_Aux.krml extract/Kremlin/LowParse_Low_Int.krml extract/Kremlin/LowParse_Low_DER.krml extract/Kremlin/LowParse_Low_BCVLI.krml extract/Kremlin/LowParse_Low_List.krml extract/Kremlin/LowParse_Spec_Array.krml extract/Kremlin/LowParse_Spec_VCList.krml extract/Kremlin/LowParse_Low_VCList.krml extract/Kremlin/LowParse_Low_IfThenElse.krml extract/Kremlin/LowParse_TacLib.krml extract/Kremlin/LowParse_Spec_Enum.krml extract/Kremlin/LowParse_Spec_Sum.krml extract/Kremlin/LowParse_Low_Enum.krml extract/Kremlin/LowParse_Low_Sum.krml extract/Kremlin/LowParse_Low_Tac_Sum.krml extract/Kremlin/LowParse_Low_Option.krml extract/Kremlin/LowParse_Spec_Bytes.krml extract/Kremlin/LowParse_Low_Bytes.krml extract/Kremlin/LowParse_Low_Array.krml extract/Kremlin/LowParse_Low.krml extract/Kremlin/LowParse_SLow_FLData.krml extract/Kremlin/LowParse_SLow_VLGen.krml extract/Kremlin/LowParse_BigEndianImpl_SLow.krml extract/Kremlin/LowParse_SLow_BoundedInt.krml extract/Kremlin/LowParse_SLow_Int_Aux.krml extract/Kremlin/LowParse_SLow_Int.krml extract/Kremlin/LowParse_SLow_DER.krml extract/Kremlin/LowParse_SLow_BCVLI.krml extract/Kremlin/LowParse_SLow_VCList.krml extract/Kremlin/LowParse_SLow_IfThenElse.krml extract/Kremlin/LowParse_SLow_Enum.krml extract/Kremlin/LowParse_SLow_Sum.krml extract/Kremlin/LowParse_SLow_Tac_Enum.krml extract/Kremlin/LowParse_SLow_Tac_Sum.krml extract/Kremlin/LowParse_SLow_VLData.krml extract/Kremlin/LowParse_SLow_Bytes.krml extract/Kremlin/LowParse_SLow_Array.krml extract/Kremlin/LowParse_Spec_Tac_Combinators.krml extract/Kremlin/LowParse_SLow.krml extract/Kremlin/Parsers_AlertDescription.krml extract/Kremlin/Parsers_AlertLevel.krml extract/Kremlin/Parsers_Alert.krml extract/Kremlin/TLSError.krml extract/Kremlin/Parsers_NamedGroup.krml extract/Kremlin/Format_Constants.krml extract/Kremlin/Format_UncompressedPointRepresentation.krml extract/Kremlin/Format_KeyShareEntry.krml extract/Kremlin/Flags.krml extract/Kremlin/Parsers_ECCurveType.krml extract/Kremlin/DebugFlags.krml extract/Kremlin/FStar_DependentMap.krml extract/Kremlin/FStar_Monotonic_DependentMap.krml extract/Kremlin/Mem.krml extract/Kremlin/Random.krml extract/Kremlin/TLS_Curve25519.krml extract/Kremlin/Parse.krml extract/Kremlin/ECGroup.krml extract/Kremlin/DHGroup.krml extract/Kremlin/Parsers_NamedGroupList.krml extract/Kremlin/CommonDH.krml extract/Kremlin/FFICallbacks.krml extract/Kremlin/Parsers_CompressionMethod.krml extract/Kremlin/Parsers_SignatureScheme.krml extract/Kremlin/Parsers_SignatureSchemeList.krml extract/Kremlin/LowParseWrappers.krml extract/Kremlin/Parsers_CipherSuite.krml extract/Kremlin/CipherSuite.krml extract/Kremlin/Parsers_ProtocolVersion.krml extract/Kremlin/TLSConstants.krml extract/Kremlin/HMAC.krml extract/Kremlin/RSAKey.krml extract/Kremlin/PMS.krml extract/Kremlin/List_Helpers.krml extract/Kremlin/PSK.krml extract/Kremlin/Extensions.krml extract/Kremlin/Cert.krml extract/Kremlin/TLSInfoFlags.krml extract/Kremlin/FStar_Date.krml extract/Kremlin/Nonce.krml extract/Kremlin/TLSInfo.krml extract/Kremlin/Crypto_Indexing.krml extract/Kremlin/Flag.krml extract/Kremlin/FStar_Old_Endianness.krml extract/Kremlin/FStar_Buffer.krml extract/Kremlin/C_Compat_Loops.krml extract/Kremlin/Buffer_Utils.krml extract/Kremlin/Crypto_Symmetric_Bytes.krml extract/Kremlin/Crypto_Plain.krml extract/Kremlin/AEADProvider.krml extract/Kremlin/Range.krml extract/Kremlin/DataStream.krml extract/Kremlin/Alert.krml extract/Kremlin/Content.krml extract/Kremlin/StreamPlain.krml extract/Kremlin/Hashing.krml extract/Kremlin/TLSPRF.krml extract/Kremlin/Hashing_CRF.krml extract/Kremlin/HandshakeMessages.krml extract/Kremlin/HandshakeLog.krml extract/Kremlin/Parsers_Boolean.krml extract/Kremlin/Parsers_TicketContents13_custom_data.krml extract/Kremlin/Parsers_TicketContents13_nonce.krml extract/Kremlin/Parsers_TicketContents13_rms.krml extract/Kremlin/Parsers_TicketContents13.krml extract/Kremlin/Parsers_TicketContents12_master_secret.krml extract/Kremlin/Parsers_TicketContents12.krml extract/Kremlin/Parsers_TicketVersion.krml extract/Kremlin/Parsers_TicketContents.krml extract/Kremlin/Parsers_TicketContents12_master_secret_Low.krml extract/Kremlin/Parsers_Ticket_Low.krml extract/Kremlin/Ticket.krml extract/Kremlin/Negotiation.krml extract/Kremlin/FStar_Monotonic_Seq.krml extract/Kremlin/StreamAE.krml extract/Kremlin/StatefulPlain.krml extract/Kremlin/LHAEPlain.krml extract/Kremlin/AEAD_GCM.krml extract/Kremlin/StatefulLHAE.krml extract/Kremlin/StAE.krml extract/Kremlin/Old_HMAC_UFCMA.krml extract/Kremlin/Parsers_HKDF_HkdfLabel_context.krml extract/Kremlin/Parsers_HKDF_HkdfLabel_label.krml extract/Kremlin/Parsers_HKDF_HkdfLabel.krml extract/Kremlin/HKDF.krml extract/Kremlin/Old_KeySchedule.krml extract/Kremlin/Old_Epochs.krml extract/Kremlin/FStar_HyperStack_IO.krml extract/Kremlin/StreamDeltas.krml extract/Kremlin/Old_Handshake.krml extract/Kremlin/Transport.krml extract/Kremlin/BufferBytes.krml extract/Kremlin/Record.krml extract/Kremlin/Connection.krml extract/Kremlin/TLS.krml extract/Kremlin/FFI.krml extract/Kremlin/Pkg.krml extract/Kremlin/Idx.krml extract/Kremlin/Model.krml extract/Kremlin/FStar_Test.krml extract/Kremlin/Pkg_Tree.krml extract/Kremlin/KDF.krml extract/Kremlin/QUIC.krml extract/Kremlin/IV.krml extract/Kremlin/KDF_Rekey.krml -tmpdir extract/Kremlin-Library -skip-compilation
  F* version: 946ec3ee
  KreMLin version: 88253438
 */
#include "kremlib.h"
#include "hacks.h"
#include "kremlin/internal/compat.h"

#ifndef __HandshakeLog_H
#define __HandshakeLog_H

#include "Parse.h"
#include "Spec.h"
#include "Parsers.h"
#include "Format.h"
#include "EverCrypt.h"
#include "Mitls_Kremlib.h"
#include "CipherSuite.h"
#include "Prims.h"
#include "TLSInfo.h"
#include "Extensions.h"
#include "CommonDH.h"
#include "HandshakeMessages.h"
#include "Hashing.h"
#include "TLSConstants.h"
#include "TLSError.h"


typedef HandshakeMessages_hs_msg HandshakeLog_msg;

bool HandshakeLog_eoflight(HandshakeMessages_hs_msg uu___0_33);

bool HandshakeLog_tagged(HandshakeMessages_hs_msg m);

bool HandshakeLog_weak_valid_transcript(Prims_list__HandshakeMessages_hs_msg *hsl);

FStar_Pervasives_Native_option__Parsers_ProtocolVersion_protocolVersion
HandshakeLog_transcript_version(Prims_list__HandshakeMessages_hs_msg *x);

typedef Prims_list__HandshakeMessages_hs_msg *HandshakeLog_hs_transcript;

Prims_list__HandshakeMessages_hs_msg
*HandshakeLog_append_transcript(
  Prims_list__HandshakeMessages_hs_msg *l,
  Prims_list__HandshakeMessages_hs_msg *m
);

FStar_Bytes_bytes
HandshakeLog_narrowTag(Spec_Hash_Definitions_hash_alg a, FStar_Bytes_bytes b);

uint32_t HandshakeLog_hash_length(FStar_Bytes_bytes b);

#define HandshakeLog_OpenHash 0
#define HandshakeLog_FixedHash 1

typedef uint8_t HandshakeLog_hashState_tags;

typedef struct HandshakeLog_hashState_s
{
  HandshakeLog_hashState_tags tag;
  union {
    FStar_Bytes_bytes case_OpenHash;
    struct 
    {
      Spec_Hash_Definitions_hash_alg a;
      FStar_Bytes_bytes state;
      Prims_list__FStar_Bytes_bytes *hashes;
    }
    case_FixedHash;
  }
  val;
}
HandshakeLog_hashState;

bool
HandshakeLog_uu___is_OpenHash(
  Prims_list__HandshakeMessages_hs_msg *parsed1,
  HandshakeLog_hashState projectee
);

FStar_Bytes_bytes
HandshakeLog___proj__OpenHash__item__b(
  Prims_list__HandshakeMessages_hs_msg *parsed1,
  HandshakeLog_hashState projectee
);

bool
HandshakeLog_uu___is_FixedHash(
  Prims_list__HandshakeMessages_hs_msg *parsed1,
  HandshakeLog_hashState projectee
);

Spec_Hash_Definitions_hash_alg
HandshakeLog___proj__FixedHash__item__a(
  Prims_list__HandshakeMessages_hs_msg *parsed1,
  HandshakeLog_hashState projectee
);

FStar_Bytes_bytes
HandshakeLog___proj__FixedHash__item__state(
  Prims_list__HandshakeMessages_hs_msg *parsed1,
  HandshakeLog_hashState projectee
);

Prims_list__FStar_Bytes_bytes
*HandshakeLog___proj__FixedHash__item__hashes(
  Prims_list__HandshakeMessages_hs_msg *parsed1,
  HandshakeLog_hashState projectee
);

typedef struct K___bool_FStar_Pervasives_Native_option__FStar_Bytes_bytes_bool_bool_s
{
  bool fst;
  FStar_Pervasives_Native_option__FStar_Bytes_bytes snd;
  bool thd;
  bool f3;
}
K___bool_FStar_Pervasives_Native_option__FStar_Bytes_bytes_bool_bool;

typedef struct
FStar_Pervasives_Native_option__K___bool_FStar_Pervasives_Native_option__FStar_Bytes_bytes_bool_bool_s
{
  FStar_Pervasives_Native_option__Prims_string_tags tag;
  K___bool_FStar_Pervasives_Native_option__FStar_Bytes_bytes_bool_bool v;
}
FStar_Pervasives_Native_option__K___bool_FStar_Pervasives_Native_option__FStar_Bytes_bytes_bool_bool;

typedef struct HandshakeLog_state_s
{
  FStar_Bytes_bytes outgoing;
  FStar_Pervasives_Native_option__K___bool_FStar_Pervasives_Native_option__FStar_Bytes_bytes_bool_bool
  outgoing_next_keys;
  bool outgoing_complete;
  FStar_Bytes_bytes incoming;
  Prims_list__HandshakeMessages_hs_msg *parsed;
  HandshakeLog_hashState hashes;
  FStar_Pervasives_Native_option__Parsers_ProtocolVersion_protocolVersion pv;
  FStar_Pervasives_Native_option__CipherSuite_kexAlg kex;
  FStar_Pervasives_Native_option__CommonDH_group_ dh_group;
}
HandshakeLog_state;

bool HandshakeLog_uu___is_State(HandshakeLog_state projectee);

FStar_Bytes_bytes HandshakeLog___proj__State__item__outgoing(HandshakeLog_state projectee);

FStar_Pervasives_Native_option__K___bool_FStar_Pervasives_Native_option__FStar_Bytes_bytes_bool_bool
HandshakeLog___proj__State__item__outgoing_next_keys(HandshakeLog_state projectee);

bool HandshakeLog___proj__State__item__outgoing_complete(HandshakeLog_state projectee);

FStar_Bytes_bytes HandshakeLog___proj__State__item__incoming(HandshakeLog_state projectee);

Prims_list__HandshakeMessages_hs_msg
*HandshakeLog___proj__State__item__parsed(HandshakeLog_state projectee);

HandshakeLog_hashState HandshakeLog___proj__State__item__hashes(HandshakeLog_state projectee);

FStar_Pervasives_Native_option__Parsers_ProtocolVersion_protocolVersion
HandshakeLog___proj__State__item__pv(HandshakeLog_state projectee);

FStar_Pervasives_Native_option__CipherSuite_kexAlg
HandshakeLog___proj__State__item__kex(HandshakeLog_state projectee);

FStar_Pervasives_Native_option__CommonDH_group_
HandshakeLog___proj__State__item__dh_group(HandshakeLog_state projectee);

typedef HandshakeLog_state *HandshakeLog_log;

typedef HandshakeLog_state *HandshakeLog_t;

HandshakeLog_state
*HandshakeLog_create(
  FStar_Pervasives_Native_option__Parsers_ProtocolVersion_protocolVersion pv
);

void
HandshakeLog_setParams(
  HandshakeLog_state *l,
  Parsers_ProtocolVersion_protocolVersion pv,
  Spec_Hash_Definitions_hash_alg ha,
  FStar_Pervasives_Native_option__CipherSuite_kexAlg kexo,
  FStar_Pervasives_Native_option__CommonDH_group_ dho
);

void
HandshakeLog_load_stateless_cookie(
  HandshakeLog_state *l,
  HandshakeMessages_hrr hrr,
  FStar_Bytes_bytes digest
);

void HandshakeLog_send(HandshakeLog_state *l, HandshakeMessages_hs_msg m);

FStar_Bytes_bytes
HandshakeLog_hash_tag(Spec_Hash_Definitions_hash_alg a, HandshakeLog_state *l);

FStar_Bytes_bytes
HandshakeLog_hash_tag_truncated(
  Spec_Hash_Definitions_hash_alg a,
  HandshakeLog_state *l,
  Prims_int len1
);

FStar_Bytes_bytes
HandshakeLog_send_tag(
  Spec_Hash_Definitions_hash_alg a,
  HandshakeLog_state *l,
  HandshakeMessages_hs_msg m
);

FStar_Bytes_bytes
HandshakeLog_send_CCS_tag(
  Spec_Hash_Definitions_hash_alg a,
  HandshakeLog_state *l,
  HandshakeMessages_hs_msg m,
  bool cf
);

typedef struct K___bool_bool_bool_s
{
  bool fst;
  bool snd;
  bool thd;
}
K___bool_bool_bool;

typedef struct FStar_Pervasives_Native_option__K___bool_bool_bool_s
{
  FStar_Pervasives_Native_option__Prims_string_tags tag;
  K___bool_bool_bool v;
}
FStar_Pervasives_Native_option__K___bool_bool_bool;

void
HandshakeLog_send_signals(
  HandshakeLog_state *l,
  FStar_Pervasives_Native_option__K___bool_bool_bool next_keys1,
  bool complete1
);

typedef TLSInfo_id HandshakeLog_id;

typedef struct HandshakeLog_next_keys_use_s
{
  bool out_appdata;
  bool out_ccs_first;
  bool out_skip_0RTT;
  bool out_0RTT_reject;
}
HandshakeLog_next_keys_use;

bool
HandshakeLog___proj__Mknext_keys_use__item__out_appdata(HandshakeLog_next_keys_use projectee);

bool
HandshakeLog___proj__Mknext_keys_use__item__out_ccs_first(HandshakeLog_next_keys_use projectee);

bool
HandshakeLog___proj__Mknext_keys_use__item__out_skip_0RTT(HandshakeLog_next_keys_use projectee);

bool
HandshakeLog___proj__Mknext_keys_use__item__out_0RTT_reject(
  HandshakeLog_next_keys_use projectee
);

typedef struct Prims_dtuple2__K___Prims_int_Prims_int_FStar_Bytes_bytes_s
{
  K___Prims_int_Prims_int fst;
  FStar_Bytes_bytes snd;
}
Prims_dtuple2__K___Prims_int_Prims_int_FStar_Bytes_bytes;

typedef struct
FStar_Pervasives_Native_option__Prims_dtuple2__K___Prims_int_Prims_int_FStar_Bytes_bytes_s
{
  FStar_Pervasives_Native_option__Prims_string_tags tag;
  Prims_dtuple2__K___Prims_int_Prims_int_FStar_Bytes_bytes v;
}
FStar_Pervasives_Native_option__Prims_dtuple2__K___Prims_int_Prims_int_FStar_Bytes_bytes;

typedef struct FStar_Pervasives_Native_option__HandshakeLog_next_keys_use_s
{
  FStar_Pervasives_Native_option__Prims_string_tags tag;
  HandshakeLog_next_keys_use v;
}
FStar_Pervasives_Native_option__HandshakeLog_next_keys_use;

typedef struct HandshakeLog_outgoing_s
{
  FStar_Pervasives_Native_option__Prims_dtuple2__K___Prims_int_Prims_int_FStar_Bytes_bytes
  send_first;
  FStar_Pervasives_Native_option__HandshakeLog_next_keys_use next_keys;
  bool complete;
}
HandshakeLog_outgoing;

bool HandshakeLog_uu___is_Outgoing(TLSInfo_id i1, HandshakeLog_outgoing projectee);

FStar_Pervasives_Native_option__Prims_dtuple2__K___Prims_int_Prims_int_FStar_Bytes_bytes
HandshakeLog___proj__Outgoing__item__send_first(TLSInfo_id i1, HandshakeLog_outgoing projectee);

FStar_Pervasives_Native_option__HandshakeLog_next_keys_use
HandshakeLog___proj__Outgoing__item__next_keys(TLSInfo_id i1, HandshakeLog_outgoing projectee);

bool
HandshakeLog___proj__Outgoing__item__complete(TLSInfo_id i1, HandshakeLog_outgoing projectee);

Prims_int HandshakeLog_to_be_written(HandshakeLog_state *l);

HandshakeLog_outgoing
HandshakeLog_write_at_most(HandshakeLog_state *l, TLSInfo_id i1, Prims_int max1);

HandshakeLog_outgoing HandshakeLog_next_fragment(HandshakeLog_state *l, TLSInfo_id i1);

typedef struct K___Prims_list__HandshakeMessages_hs_msg_Prims_list__FStar_Bytes_bytes_s
{
  Prims_list__HandshakeMessages_hs_msg *fst;
  Prims_list__FStar_Bytes_bytes *snd;
}
K___Prims_list__HandshakeMessages_hs_msg_Prims_list__FStar_Bytes_bytes;

typedef struct
FStar_Pervasives_Native_option__K___Prims_list__HandshakeMessages_hs_msg_Prims_list__FStar_Bytes_bytes_s
{
  FStar_Pervasives_Native_option__Prims_string_tags tag;
  K___Prims_list__HandshakeMessages_hs_msg_Prims_list__FStar_Bytes_bytes v;
}
FStar_Pervasives_Native_option__K___Prims_list__HandshakeMessages_hs_msg_Prims_list__FStar_Bytes_bytes;

typedef struct
FStar_Error_optResult__K___Parsers_Alert_alert_Prims_string_FStar_Pervasives_Native_option__K___Prims_list__HandshakeMessages_hs_msg_Prims_list__FStar_Bytes_bytes_s
{
  FStar_Error_optResult__K___Parsers_Alert_alert_Prims_string_K___FStar_Bytes_bytes_FStar_Bytes_bytes_tags
  tag;
  union {
    K___Parsers_Alert_alert_Prims_string case_Error;
    FStar_Pervasives_Native_option__K___Prims_list__HandshakeMessages_hs_msg_Prims_list__FStar_Bytes_bytes
    case_Correct;
  }
  val;
}
FStar_Error_optResult__K___Parsers_Alert_alert_Prims_string_FStar_Pervasives_Native_option__K___Prims_list__HandshakeMessages_hs_msg_Prims_list__FStar_Bytes_bytes;

FStar_Error_optResult__K___Parsers_Alert_alert_Prims_string_FStar_Pervasives_Native_option__K___Prims_list__HandshakeMessages_hs_msg_Prims_list__FStar_Bytes_bytes
HandshakeLog_receive(HandshakeLog_state *l, FStar_Bytes_bytes mb);

typedef struct
K___Prims_list__HandshakeMessages_hs_msg_Prims_list__FStar_Bytes_bytes_FStar_Bytes_bytes_s
{
  Prims_list__HandshakeMessages_hs_msg *fst;
  Prims_list__FStar_Bytes_bytes *snd;
  FStar_Bytes_bytes thd;
}
K___Prims_list__HandshakeMessages_hs_msg_Prims_list__FStar_Bytes_bytes_FStar_Bytes_bytes;

typedef struct
FStar_Error_optResult__K___Parsers_Alert_alert_Prims_string_K___Prims_list__HandshakeMessages_hs_msg_Prims_list__FStar_Bytes_bytes_FStar_Bytes_bytes_s
{
  FStar_Error_optResult__K___Parsers_Alert_alert_Prims_string_K___FStar_Bytes_bytes_FStar_Bytes_bytes_tags
  tag;
  union {
    K___Parsers_Alert_alert_Prims_string case_Error;
    K___Prims_list__HandshakeMessages_hs_msg_Prims_list__FStar_Bytes_bytes_FStar_Bytes_bytes
    case_Correct;
  }
  val;
}
FStar_Error_optResult__K___Parsers_Alert_alert_Prims_string_K___Prims_list__HandshakeMessages_hs_msg_Prims_list__FStar_Bytes_bytes_FStar_Bytes_bytes;

FStar_Error_optResult__K___Parsers_Alert_alert_Prims_string_K___Prims_list__HandshakeMessages_hs_msg_Prims_list__FStar_Bytes_bytes_FStar_Bytes_bytes
TLSError_fatal__Prims_list_HandshakeMessages_hs_msg___Prims_list_FStar_Bytes_bytes___FStar_Bytes_bytes(
  Parsers_AlertDescription_alertDescription a,
  Prims_string s
);

FStar_Error_optResult__K___Parsers_Alert_alert_Prims_string_K___Prims_list__HandshakeMessages_hs_msg_Prims_list__FStar_Bytes_bytes_FStar_Bytes_bytes
HandshakeLog_receive_CCS(Spec_Hash_Definitions_hash_alg a, HandshakeLog_state *l);

#define __HandshakeLog_H_DEFINED
#endif
