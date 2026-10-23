/* sub_608211F8
 * address: 0x608211F8   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***__fastcall sub_608211F8(int r0_0, int a2))(_DWORD, int *)
{
  int (__fastcall ***v3)(_DWORD, int *); // r4
  int v5; // r7
  int (__fastcall ***v6)(_DWORD, int *); // r5
  char v7; // r12
  _DWORD v9[2]; // [sp+8h] [bp-1B8h] BYREF
  int v10; // [sp+10h] [bp-1B0h]
  int v11; // [sp+14h] [bp-1ACh]
  int v12; // [sp+18h] [bp-1A8h]
  int v13; // [sp+1Ch] [bp-1A4h]
  int v14; // [sp+20h] [bp-1A0h]
  int v15; // [sp+24h] [bp-19Ch]
  int v16; // [sp+28h] [bp-198h]
  sead_IDisposer *v17; // [sp+2Ch] [bp-194h]
  int v18; // [sp+30h] [bp-190h]
  int v19; // [sp+34h] [bp-18Ch]
  char v20; // [sp+38h] [bp-188h]
  int v21; // [sp+3Ch] [bp-184h]
  int (**v22)(); // [sp+40h] [bp-180h] BYREF
  int *v23; // [sp+44h] [bp-17Ch]
  int v24; // [sp+48h] [bp-178h]
  int v25; // [sp+4Ch] [bp-174h] BYREF
  sead_IDisposer a1; // [sp+150h] [bp-70h] BYREF
  int v27; // [sp+160h] [bp-60h]
  int v28; // [sp+164h] [bp-5Ch]
  sead_IDisposer *p_a1; // [sp+168h] [bp-58h]
  int v30; // [sp+16Ch] [bp-54h]
  int (**v31)(); // [sp+170h] [bp-50h] BYREF
  int *v32; // [sp+174h] [bp-4Ch]
  int v33; // [sp+178h] [bp-48h]
  int v34; // [sp+17Ch] [bp-44h] BYREF

  v3 = 0;
  a1.vtable = (int)off_60C5CB68;
  v27 = 0;
  v28 = 0;
  p_a1 = &a1;
  v30 = 0;
  sead_IDisposer_ctor(&a1);
  a1.vtable = (int)off_60C5CB68;
  v32 = &v34;
  v31 = &BufferedSafeStringBase_char_vtable_probably;
  v33 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v31);
  *(_BYTE *)v32 = 0;
  v31 = &off_60BD4C20;
  a1.vtable = (int)off_60BF9EF4;
  v23 = &v25;
  v22 = &BufferedSafeStringBase_char_vtable_probably;
  v24 = 260;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v22);
  *(_BYTE *)v23 = 0;
  v22 = &off_60BF9688;
  v5 = sub_608E8770(dword_60CCEBD0, r0_0, &v22);
  if ( v5 )
  {
    v3 = 0;
    v9[0] = &sead__SafeStringBase__vtable;
    v9[1] = &byte_60B3BA34;
    v10 = 0;
    v11 = 0;
    v12 = 32;
    v19 = 0;
    v18 = 0;
    v17 = 0;
    v16 = 0;
    v15 = 0;
    v14 = 0;
    v13 = 0;
    v20 = 1;
    v21 = 0;
    sead__SafeStringBase__operator_assign((int)v9, (int)&v22);
    v18 = v5;
    v11 = a2;
    v13 = 0x2000;
    v10 = a2;
    v12 = 0x2000;
    v17 = &a1;
    v6 = (int (__fastcall ***)(_DWORD, int *))sead_ResourceMgr_OpenFileRelated(sead__ResourceMgr__sInstance, (int)v9);
    if ( v6 )
    {
      if ( ((unsigned int)&dword_60C9BB24 & ~(1619137444 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB24) )
      {
        dword_60C9BB20 = (int)&off_60BF9F40;
        _cxa_guard_release(&dword_60C9BB24);
      }
      if ( !(**v6)(v6, &dword_60C9BB20) )
        v6 = 0;
      v3 = v6;
    }
  }
  sub_60902104(&a1);
  return v3;
}
