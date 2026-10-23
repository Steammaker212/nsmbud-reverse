/* ArchiveManager_loadSzs_helper
 * address: 0x60821458   size: 788   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***__fastcall ArchiveManager_loadSzs_helper(_DWORD *r0_0, int a2, int a3))(_DWORD, int *)
{
  int (__fastcall ***v4)(_DWORD, int *); // r4
  int v6; // r5
  int v7; // r4
  char *v8; // r1
  int v9; // r0
  int v10; // r2
  int v11; // r3
  char v12; // r12
  _DWORD v15[2]; // [sp+8h] [bp-1C0h] BYREF
  _DWORD v16[2]; // [sp+10h] [bp-1B8h] BYREF
  int v17; // [sp+18h] [bp-1B0h]
  int v18; // [sp+1Ch] [bp-1ACh]
  int v19; // [sp+20h] [bp-1A8h]
  int v20; // [sp+24h] [bp-1A4h]
  int v21; // [sp+28h] [bp-1A0h]
  int v22; // [sp+2Ch] [bp-19Ch]
  int v23; // [sp+30h] [bp-198h]
  sead_IDisposer *v24; // [sp+34h] [bp-194h]
  int v25; // [sp+38h] [bp-190h]
  int v26; // [sp+3Ch] [bp-18Ch]
  char v27; // [sp+40h] [bp-188h]
  int v28; // [sp+44h] [bp-184h]
  int (**v29)(); // [sp+48h] [bp-180h] BYREF
  int *v30; // [sp+4Ch] [bp-17Ch]
  int v31; // [sp+50h] [bp-178h]
  int v32; // [sp+54h] [bp-174h] BYREF
  sead_IDisposer a1; // [sp+158h] [bp-70h] BYREF
  int v34; // [sp+168h] [bp-60h]
  int v35; // [sp+16Ch] [bp-5Ch]
  sead_IDisposer *p_a1; // [sp+170h] [bp-58h]
  int v37; // [sp+174h] [bp-54h]
  int (**v38)(); // [sp+178h] [bp-50h] BYREF
  int *v39; // [sp+17Ch] [bp-4Ch]
  int v40; // [sp+180h] [bp-48h]
  int v41; // [sp+184h] [bp-44h] BYREF

  v4 = 0;
  a1.vtable = (int)off_60C5CB68;
  v34 = 0;
  v35 = 0;
  p_a1 = &a1;
  v37 = 0;
  sead_IDisposer_ctor(&a1);
  a1.vtable = (int)off_60C5CB68;
  v39 = &v41;
  v38 = &BufferedSafeStringBase_char_vtable_probably;
  v40 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v38);
  *(_BYTE *)v39 = 0;
  v38 = &off_60BD4C20;
  a1.vtable = (int)off_60BF9EF4;
  v30 = &v32;
  v29 = &BufferedSafeStringBase_char_vtable_probably;
  v31 = 260;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v29);
  *(_BYTE *)v30 = 0;
  v29 = &off_60BF9688;
  v6 = sub_608E8770(dword_60CCEBD0, r0_0, &v29);
  if ( v6 )
  {
    v7 = 0;
    v16[0] = &sead__SafeStringBase__vtable;
    v16[1] = &byte_60B3BA34;
    v17 = 0;
    v18 = 0;
    v19 = 32;
    v26 = 0;
    v25 = 0;
    v24 = 0;
    v23 = 0;
    v22 = 0;
    v21 = 0;
    v20 = 0;
    v27 = 1;
    v28 = 0;
    sead__SafeStringBase__operator_assign((int)v16, (int)&v29);
    v25 = v6;
    v18 = a2;
    while ( aEffect_1[v7] )
    {
      if ( v7 >= 0x80000 )
      {
        v7 = 0;
        break;
      }
      if ( !aEffect_1[v7 + 1] )
      {
        ++v7;
        break;
      }
      v7 += 2;
    }
    (*(void (__fastcall **)(_DWORD *))(*r0_0 + 12))(r0_0);
    (*(void (__fastcall **)(_DWORD *))(*r0_0 + 12))(r0_0);
    v8 = (char *)r0_0[1];
    v9 = 0x4000;
    if ( v8 != "Effect/" )
    {
      v10 = v7;
      if ( v7 >= 0x80000 )
        v10 = 0x80000;
      if ( v7 >= 1 )
      {
        v11 = 0;
        while ( v8[v11] == aEffect_1[v11] )
        {
          if ( v8[v11] )
          {
            if ( ++v11 < v10 )
              continue;
          }
          goto LABEL_19;
        }
        v9 = 0x2000;
      }
    }
LABEL_19:
    v20 = v9;
    v17 = a2;
    v19 = 0x2000;
    v24 = &a1;
    v15[0] = &sead__SafeStringBase__vtable;
    v15[1] = "sarc";
    v4 = (int (__fastcall ***)(_DWORD, int *))sub_60902A08(sead__ResourceMgr__sInstance, v16, v15, a3);
    if ( v4 )
    {
      if ( ((unsigned int)&dword_60C9BB24 & ~(1619138292 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB24) )
      {
        dword_60C9BB20 = (int)&off_60BF9F40;
        _cxa_guard_release(&dword_60C9BB24);
      }
      if ( !(**v4)(v4, &dword_60C9BB20) )
        v4 = 0;
    }
    else
    {
      v4 = 0;
    }
  }
  sub_60902104(&a1);
  return v4;
}
