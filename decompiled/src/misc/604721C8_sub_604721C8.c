/* sub_604721C8
 * address: 0x604721C8   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604721C8(int a1, const char **a2, int a3)
{
  int v4; // r6
  int (__fastcall ***v7)(_DWORD, int *); // r5
  char v8; // r12
  int v9; // r0
  _DWORD v11[67]; // [sp+0h] [bp-144h] BYREF
  _DWORD v12[2]; // [sp+10Ch] [bp-38h] BYREF
  int v13; // [sp+114h] [bp-30h]
  int v14; // [sp+118h] [bp-2Ch]
  int v15; // [sp+11Ch] [bp-28h]
  int v16; // [sp+120h] [bp-24h]
  int v17; // [sp+124h] [bp-20h]
  int v18; // [sp+128h] [bp-1Ch]
  int v19; // [sp+12Ch] [bp-18h]
  sead_IDisposer *v20; // [sp+130h] [bp-14h]
  int v21; // [sp+134h] [bp-10h]
  int v22; // [sp+138h] [bp-Ch]
  char v23; // [sp+13Ch] [bp-8h]
  int v24; // [sp+140h] [bp-4h]
  sead_IDisposer v25; // [sp+144h] [bp+0h] BYREF
  int v26; // [sp+154h] [bp+10h]
  int v27; // [sp+158h] [bp+14h]
  sead_IDisposer *v28; // [sp+15Ch] [bp+18h]
  int v29; // [sp+160h] [bp+1Ch]
  int (**v30)(); // [sp+164h] [bp+20h] BYREF
  int *v31; // [sp+168h] [bp+24h]
  int v32; // [sp+16Ch] [bp+28h]
  int v33; // [sp+170h] [bp+2Ch] BYREF

  v4 = 0;
  v25.vtable = (int)off_60C5CB68;
  v26 = 0;
  v27 = 0;
  v28 = &v25;
  v29 = 0;
  sead_IDisposer_ctor(&v25);
  v25.vtable = (int)off_60C5CB68;
  v31 = &v33;
  v30 = &BufferedSafeStringBase_char_vtable_probably;
  v32 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v30);
  *(_BYTE *)v31 = 0;
  v30 = &off_60BD4C20;
  v25.vtable = (int)off_60BFCA34;
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = &byte_60B3BA34;
  v13 = 0;
  v14 = 0;
  v15 = 32;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v16 = 0;
  v23 = 1;
  v24 = 0;
  (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
  sub_6017D5C0(v11, "Layout/anim_text/%s.bin", a2[1]);
  sead__SafeStringBase__operator_assign((int)v12, (int)v11);
  v14 = a3;
  v13 = a3;
  v20 = &v25;
  v7 = (int (__fastcall ***)(_DWORD, int *))sead_ResourceMgr_OpenFileRelated(sead__ResourceMgr__sInstance, (int)v12);
  if ( ((unsigned int)&dword_60C9BB2C & ~(1615274784 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB2C) )
  {
    dword_60C9BB28 = (int)&off_60BF9F4C;
    _cxa_guard_release(&dword_60C9BB2C);
  }
  if ( v7 )
  {
    v4 = (**v7)(v7, &dword_60C9BB28);
    if ( v4 )
      v4 = (int)v7;
  }
  sub_60902104(&v25);
  if ( !v4 )
    return 0;
  v9 = ((int (__fastcall *)(_DWORD *, _DWORD, _DWORD, _DWORD))sub_609051E4)(
         v11,
         FIELD_U32(v4, 4),
         FIELD_U32(v4, 8),
         0);
  sub_609052F4(v9, 0);
  sub_6047241C(a1, v11, a3);
  sub_60905250(v11);
  return 1;
}
