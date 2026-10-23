/* sub_600C6BF4
 * address: 0x600C6BF4   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600C6BF4(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  int **v4; // r5
  int *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r6
  _DWORD *v10; // r1
  unsigned int v11; // r0
  _DWORD *v12; // r1
  unsigned int v13; // r0
  const char *v14; // r0
  int v15; // r5
  int v16; // r0
  char v17; // r12
  Vec3 v18; // [sp+4h] [bp-5Ch] BYREF
  _DWORD v19[2]; // [sp+10h] [bp-50h] BYREF
  _BYTE v20[12]; // [sp+18h] [bp-48h] BYREF
  float v21; // [sp+24h] [bp-3Ch]
  float v22; // [sp+34h] [bp-2Ch]
  float v23; // [sp+44h] [bp-1Ch]

  result = FIELD_U32(a1, 7112);
  if ( result != 1 )
    return result;
  v4 = (int **)(a1 + 7100);
  v3 = *(_DWORD **)(a1 + 7100);
  v5 = (int *)v3[3];
  v6 = v3[2];
  v7 = v3[17];
  if ( v6 > v7 )
    v5 += v7;
  v8 = *v5;
  if ( *(float *)(*v5 + 24) < 0.0 )
  {
    v9 = 0;
    if ( !sub_60418548(v8 + 4) )
    {
      v10 = (_DWORD *)(*v4)[3];
      v11 = (*v4)[17];
      if ( (*v4)[2] > v11 )
        v10 += v11;
      result = sub_60418548(*v10 + 4);
      v9 = 1;
      if ( result != 1 )
        return result;
    }
LABEL_14:
    AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 8, 1, 0, 0);
    v19[0] = &sead__SafeStringBase__vtable;
    if ( v9 == 1 )
      v14 = "FootR2";
    else
      v14 = "FootL2";
    v19[1] = v14;
    v15 = **v4;
    v16 = (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v15 + 84))(v15, v19);
    (*(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v15 + 108))(v15, v16, v20);
    v18.x = v21;
    v18.y = v22;
    v18.z = v23;
    if ( ((unsigned int)&dword_60C83C20[2] & ~(1611427260 << v17) & 1) == 0 )
    {
      if ( _cxa_guard_acquire(&dword_60C83C20[2]) )
      {
        flt_60C83CAC[0] = -3.0;
        flt_60C83CAC[1] = -2.0;
        flt_60C83CAC[2] = 0.0;
        _cxa_guard_release(&dword_60C83C20[2]);
      }
    }
    v18.x = v18.x + flt_60C83CAC[0];
    v18.y = v18.y + flt_60C83CAC[1];
    v18.z = sub_600024C4(a1);
    EffectData_create(1088, &v18, 0, a1 + 144);
    return sub_60813430(a1 + 6332, "SE_BOSS_KOOPA_FOOT", 0);
  }
  v9 = 0;
  if ( sub_60418548(v8 + 4) )
    goto LABEL_14;
  v12 = (_DWORD *)(*v4)[3];
  v13 = (*v4)[17];
  if ( (*v4)[2] > v13 )
    v12 += v13;
  result = sub_60418548(*v12 + 4);
  v9 = 1;
  if ( result )
    goto LABEL_14;
  return result;
}
