/* sub_603AB8C4
 * address: 0x603AB8C4   size: 784   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603AB8C4(int a1)
{
  int v2; // r0
  _DWORD *v3; // r6
  int v4; // r5
  int v5; // r0
  int v6; // r0
  _WORD *v7; // r7
  _WORD *v8; // r1
  int v9; // r2
  int v10; // r2
  int result; // r0
  int v12; // r1
  bool v13; // zf
  Vec3 v14; // [sp+8h] [bp-28h] BYREF

  if ( !FIELD_U8(a1, 7081) )
  {
    if ( FIELD_U32(a1, 6656) )
    {
      v14 = *(Vec3 *)(a1 + 6616);
      v14.x = v14.x + (float)(*(float *)&dword_60AF1F60[FIELD_U32(a1, 80)] * 7.0);
      EffectWrapper_update((EffectWrapper *)(a1 + 6688), 710, &v14, 0, 0);
    }
    else
    {
      EffectWrapper_update((EffectWrapper *)(a1 + 6688), 709, (Vec3 *)(a1 + 6616), 0, 0);
    }
  }
  v3 = (_DWORD *)(a1 + 6640);
  v2 = FIELD_U32(a1, 6640);
  if ( v2 )
    *v3 = v2 - 1;
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6304));
  v4 = a1 + 6300;
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  if ( !*v3 )
  {
    v7 = (_WORD *)(a1 + 6672);
    if ( FIELD_U16(a1, 6672) == 1 )
    {
      if ( FIELD_U32(a1, 6648) != 1 || (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)v4 + 12) + 28) & 0x20) != 0 )
      {
        sub_603ADA8C(a1, 0);
        *v3 = 300;
        *v7 = 0;
      }
    }
    else if ( !FIELD_U16(a1, 6672) )
    {
      if ( (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 0x80000000) != 0 )
      {
        *v3 = 300;
      }
      else
      {
        sub_603ADA8C(a1, 1);
        *v7 = 1;
      }
    }
  }
  v5 = sub_603ADD84(a1);
  if ( v5 )
    v6 = (float)(FIELD_F32(v5, 108) - FIELD_F32(a1, 108)) < 0.0;
  else
    v6 = 0;
  v8 = (_WORD *)(a1 + 6674);
  v9 = FIELD_U32(a1, 80);
  if ( v9 == v6 )
  {
    if ( !FIELD_U16(a1, 6674) )
      goto LABEL_23;
  }
  else if ( FIELD_U16(a1, 6674) )
  {
    v6 = FIELD_U32(a1, 80);
  }
  else
  {
    *v8 = 1;
    v6 = v9 ^ 1;
    FIELD_U32(a1, 80) = v9 ^ 1;
  }
  v10 = FIELD_U32(a1, 160) + dword_60B00B14[v6];
  FIELD_U32(a1, 160) = v10;
  if ( (unsigned int)(v10 + 0x1FFFFFFF) >= 0x3FFFFFFF )
  {
    FIELD_U32(a1, 160) = dword_60B00B0C[v6];
    *v8 = 0;
  }
LABEL_23:
  result = FIELD_U8(PlayerMgr_instance, 156);
  if ( FIELD_U8(PlayerMgr_instance, 156) )
    return result;
  if ( FIELD_U32(a1, 6656) )
  {
    result = ((int (__fastcall *)(int))loc_603AE1DC)(a1);
    if ( result != 1 )
      return result;
  }
  else
  {
    result = ((int (__fastcall *)(int))loc_603AE00C)(a1);
    if ( !result )
      return result;
  }
  v12 = FIELD_U16(a1, 6672);
  result = a1 + 6648;
  v13 = v12 == 1;
  if ( v12 == 1 )
    v13 = *(_DWORD *)result == 1;
  if ( !v13 || (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)v4 + 12) + 28) & 0x20) != 0 )
  {
    *(_DWORD *)result = 0;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C97B6C);
  }
  return result;
}
