/* sub_6006ABF0
 * address: 0x6006ABF0   size: 880   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6006ABF0(int a1)
{
  _DWORD **v2; // r6
  _DWORD *v3; // r1
  unsigned int v4; // r0
  int *v5; // r5
  int v6; // r7
  int v7; // r1
  int v8; // r2
  _DWORD *v9; // r1
  unsigned int v10; // r0
  _DWORD *v11; // r1
  unsigned int v12; // r0
  int v13; // r0
  unsigned int v14; // r1
  unsigned int v15; // r2
  int v16; // r3
  float v17; // s0
  int result; // r0
  int speed; // [sp+4h] [bp-5Ch] BYREF
  int target[22]; // [sp+8h] [bp-58h] BYREF

  v2 = (_DWORD **)(a1 + 7112);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7112));
  CollisionMgr_process((_BYTE *)(a1 + 648));
  sub_6007446C(a1);
  ((void (__fastcall *)(int))loc_600753B4)(a1);
  target[0] = 0;
  speed = dword_60C81780;
  moveValueTo((int *)(a1 + 7468), target, &speed);
  target[0] = 0;
  speed = dword_60C8178C;
  moveValueTo((int *)(a1 + 7484), target, &speed);
  (*(void (__fastcall **)(_DWORD, _DWORD, int *))(*(_DWORD *)**v2 + 108))(**v2, FIELD_U32(a1, 7556), target);
  FIELD_U32(a1, 7396) = target[3];
  FIELD_U32(a1, 7400) = target[7];
  FIELD_U32(a1, 7404) = target[11];
  v3 = (_DWORD *)(*v2)[3];
  v4 = (*v2)[17];
  if ( (*v2)[2] > v4 )
    v3 += v4;
  if ( sub_60418548(*v3 + 4) )
  {
    v5 = (int *)(a1 + 25372);
    v6 = FIELD_U32(a1, 25372);
    if ( v6 == 15 )
    {
      AreaRumbleMgr_rumble2(AreaRumbleMgr_instance, 2, 3, 0);
      sub_60813430(a1 + 6332, "SE_VOC_KP_L_SHOUT2", 0);
      FIELD_U32(a1, 25380) = 288;
      v6 = *v5;
    }
    memset(&target[1], 0, 40);
    target[0] = FIELD_U32(a1, 25368) | ((15 - v6) << 16) | 0xF30;
    target[3] = (int)Profile__get(0x2D5u);
    target[2] = FIELD_U32(a1, 8);
    LOBYTE(target[8]) = 0;
    v7 = FIELD_U32(a1, 7400);
    v8 = FIELD_U32(a1, 7404);
    target[4] = FIELD_U32(a1, 7396);
    target[5] = v7;
    target[6] = v8;
    sub_600080BC((_DWORD *)ActorMgr__instance, target);
    if ( *v5 < 2 )
    {
      sub_60400BE4(AreaRumbleMgr_instance);
    }
    else
    {
      --*v5;
      FIELD_F32(a1, 25376) = FIELD_F32(a1, 25376) + 9.2;
    }
  }
  v9 = (_DWORD *)(*v2)[3];
  v10 = (*v2)[17];
  if ( (*v2)[2] > v10 )
    v9 += v10;
  if ( sub_60418548(*v9 + 4) )
  {
    EffectData_setEffectId((EffectData *)(a1 + 25804), 1100);
    FIELD_U8(a1, 25892) = 1;
  }
  v11 = (_DWORD *)(*v2)[3];
  v12 = (*v2)[17];
  if ( (*v2)[2] > v12 )
    v11 += v12;
  if ( sub_60418548(*v11 + 4) )
    FIELD_U8(a1, 25892) = 0;
  v13 = (*v2)[3];
  v14 = (*v2)[2];
  v15 = (*v2)[17];
  v16 = v13;
  if ( v14 > v15 )
    v16 = v13 + 4 * v15;
  v17 = *(float *)(*(_DWORD *)v16 + 20);
  if ( v17 >= 100.0 && v17 <= 238.0 || FIELD_S32(a1, 25380) >= 1 )
  {
    sub_608134C8(a1 + 6332, "SE_BOSS_KOOPA_FIRE_METEO", 0);
    v13 = (*v2)[3];
    v14 = (*v2)[2];
    v15 = (*v2)[17];
  }
  if ( v14 > v15 )
    v13 += 4 * v15;
  result = *(unsigned __int8 *)(*(_DWORD *)v13 + 28);
  if ( (result & 0x20) != 0 )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C813AC);
    if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1) )
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1);
    FIELD_U16(a1, 6276) = 376;
    return 6276;
  }
  return result;
}
