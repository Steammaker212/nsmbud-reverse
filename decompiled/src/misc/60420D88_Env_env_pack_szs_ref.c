/* Env_env_pack_szs_ref
 * address: 0x60420D88   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Env_env_pack_szs_ref(int r0_0, int a2)
{
  void *v3; // r10
  int v4; // r6
  int (__fastcall ***v5)(_DWORD, int *); // r4
  char v6; // r12
  int (**v9)(); // [sp+Ch] [bp-104h] BYREF
  const char *v10; // [sp+10h] [bp-100h]
  _DWORD v11[2]; // [sp+14h] [bp-FCh] BYREF
  int v12; // [sp+1Ch] [bp-F4h]
  int v13; // [sp+20h] [bp-F0h]
  int v14; // [sp+24h] [bp-ECh]
  int v15; // [sp+28h] [bp-E8h]
  int v16; // [sp+2Ch] [bp-E4h]
  int v17; // [sp+30h] [bp-E0h]
  int v18; // [sp+34h] [bp-DCh]
  sead_IDisposer *v19; // [sp+38h] [bp-D8h]
  int v20; // [sp+3Ch] [bp-D4h]
  int v21; // [sp+40h] [bp-D0h]
  char v22; // [sp+44h] [bp-CCh]
  int v23; // [sp+48h] [bp-C8h]
  sead_IDisposer v24[5]; // [sp+4Ch] [bp-C4h] BYREF
  sead_IDisposer a1; // [sp+A0h] [bp-70h] BYREF
  int v26; // [sp+B0h] [bp-60h]
  int v27; // [sp+B4h] [bp-5Ch]
  sead_IDisposer *p_a1; // [sp+B8h] [bp-58h]
  int v29; // [sp+BCh] [bp-54h]
  int (**v30)(); // [sp+C0h] [bp-50h] BYREF
  int *v31; // [sp+C4h] [bp-4Ch]
  int v32; // [sp+C8h] [bp-48h]
  int v33; // [sp+CCh] [bp-44h] BYREF

  v3 = (void *)operator_new_8DE2C8(0x100000u, a2, -64);
  v4 = 0;
  a1.vtable = (int)off_60C5CB68;
  v26 = 0;
  v27 = 0;
  p_a1 = &a1;
  v29 = 0;
  sead_IDisposer_ctor(&a1);
  a1.vtable = (int)off_60C5CB68;
  v31 = &v33;
  v30 = &BufferedSafeStringBase_char_vtable_probably;
  v32 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v30);
  *(_BYTE *)v31 = 0;
  v30 = &off_60BD4C20;
  a1.vtable = (int)off_60BF9EF4;
  sub_60903F5C(v24, 0x100000u, (int)v3);
  v11[0] = &sead__SafeStringBase__vtable;
  v11[1] = &byte_60B3BA34;
  v12 = 0;
  v13 = 0;
  v14 = 32;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v16 = 0;
  v15 = 0;
  v22 = 1;
  v9 = &sead__SafeStringBase__vtable;
  v23 = 0;
  v10 = "Env/env_pack.szs";
  sead__SafeStringBase__operator_assign((int)v11, (int)&v9);
  v9 = &sead__SafeStringBase__vtable;
  v19 = &a1;
  v13 = a2;
  v12 = a2;
  v10 = "sarc";
  v5 = (int (__fastcall ***)(_DWORD, int *))sub_60902A08(sead__ResourceMgr__sInstance, v11, &v9, v24);
  if ( ((unsigned int)&dword_60C9BB1C & ~(1614941952 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB1C) )
  {
    dword_60C9BB18 = (int)&off_60BF9F34;
    _cxa_guard_release(&dword_60C9BB1C);
  }
  if ( v5 )
  {
    v4 = (**v5)(v5, &dword_60C9BB18);
    if ( v4 )
      v4 = (int)v5;
  }
  FIELD_U32(r0_0, 20) = v4;
  if ( v3 )
    operator_delete_8DE3FC(v3);
  v24[0].vtable = (int)sead_Decompressor_vtable;
  if ( sead__ResourceMgr__sInstance )
    sub_609029CC(sead__ResourceMgr__sInstance, (int)v24);
  sead__IDisposer__dtor(v24);
  return sub_60902104(&a1);
}
