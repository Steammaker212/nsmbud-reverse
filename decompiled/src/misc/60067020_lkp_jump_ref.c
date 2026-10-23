/* lkp_jump_ref
 * address: 0x60067020   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkp_jump_ref(int a1)
{
  int Resource; // r0
  int v3; // r5
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  float v8; // s2
  float v9; // s8
  float v10; // s10
  float v11; // s4
  int v12; // r0
  int result; // r0
  _DWORD v14[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v15[6]; // [sp+8h] [bp-18h] BYREF

  v14[0] = &sead__SafeStringBase__vtable;
  v15[0] = &sead__SafeStringBase__vtable;
  v14[1] = "lkp_jump";
  v15[1] = "koopa";
  Resource = LoadResource(ResourceMgrRelated_instance, v15);
  v3 = a1 + 7112;
  sub_60421938(*(_DWORD **)(a1 + 7112), Resource, (int)v14);
  v4 = *(_DWORD *)(FIELD_U32(a1, 7112) + 12);
  v5 = *(_DWORD *)(FIELD_U32(a1, 7112) + 68);
  if ( *(_DWORD *)(FIELD_U32(a1, 7112) + 8) > v5 )
    v4 += 4 * v5;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 0);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
    v6 += 4 * v7;
  *(_DWORD *)(*(_DWORD *)v6 + 24) = 1065353216;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 120) = -1090519040;
  v8 = 8.0 - (float)(-0.1875 * 76.0);
  FIELD_F32(a1, 124) = v8;
  FIELD_U32(a1, 136) = 1090519040;
  v9 = FIELD_F32(a1, 108);
  v10 = FIELD_F32(a1, 7376);
  v11 = (float)((float)((float)(-0.1875 * 0.5) * 76.0) * 76.0) + (float)(v8 * 76.0);
  FIELD_F32(a1, 108) = v9 + 37.0;
  FIELD_F32(a1, 112) = v10 - v11;
  v12 = FIELD_U32(a1, 116);
  FIELD_F32(a1, 584) = v9 + 37.0;
  FIELD_F32(a1, 588) = v10 - v11;
  FIELD_U32(a1, 592) = v12;
  FIELD_U32(a1, 616) = v12;
  FIELD_F32(a1, 608) = v9 + 37.0;
  FIELD_F32(a1, 612) = v10 - v11;
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  result = FIELD_U32(EnemyCounterMaybe_instance, 24);
  if ( result )
    FIELD_U8(result, 6101) = 1;
  return result;
}
