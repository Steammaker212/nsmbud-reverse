/* sub_6006B3E8
 * address: 0x6006B3E8   size: 800   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6006B3E8(_WORD *a1)
{
  _WORD *v2; // r6
  _DWORD *v3; // r1
  unsigned int v4; // r0
  unsigned int U32; // r0
  int v6; // r1
  unsigned int v7; // r0
  _WORD *v8; // r0
  const char *v9; // r1
  _DWORD *v10; // r1
  unsigned int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r0
  unsigned int v15; // r1
  unsigned int v16; // r2
  int v17; // r3
  float v18; // s0
  int v19; // r3
  int result; // r0
  __int16 v21; // r1
  int v22; // r0
  int v23; // [sp+0h] [bp-28h] BYREF
  int target[9]; // [sp+4h] [bp-24h] BYREF

  v2 = a1 + 3556;
  j_ModelWrapper_updateAnims(*((_DWORD *)a1 + 1778));
  CollisionMgr_process((_BYTE *)a1 + 648);
  sub_6007446C(a1);
  ((void (__fastcall *)(_WORD *))loc_600753B4)(a1);
  target[0] = 0;
  v23 = dword_60C81780;
  moveValueTo((int *)a1 + 1867, target, &v23);
  target[0] = 0;
  v23 = dword_60C8178C;
  moveValueTo((int *)a1 + 1871, target, &v23);
  v3 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += v4;
  if ( sub_60418548(*v3 + 4) )
  {
    AreaRumbleMgr_rumble2(AreaRumbleMgr_instance, 2, 3, 0);
    EffectData_setEffectId((EffectData *)(a1 + 12700), 600);
    EffectData_setEffectId((EffectData *)(a1 + 12752), 601);
    U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
    sub_602363D0(a1 + 12752, HIBYTE(U32));
    v6 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v7 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v7 )
      v6 += 4 * v7;
    *(_DWORD *)(*(_DWORD *)v6 + 24) = 1065353216;
    v8 = a1 + 3166;
    v9 = "SE_VOC_KP_L_SHOUT_BURNER";
LABEL_13:
    sub_60813430(v8, v9, 0);
    goto LABEL_14;
  }
  v10 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v11 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v11 )
    v10 += v11;
  if ( sub_60418548(*v10 + 4) )
  {
    sub_60400BE4(AreaRumbleMgr_instance);
    sub_60237560((int)(a1 + 12692));
    sub_60237560((int)(a1 + 12744));
    v12 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v13 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v13 )
      v12 += 4 * v13;
    *(_DWORD *)(*(_DWORD *)v12 + 24) = 1065353216;
    v8 = a1 + 3166;
    v9 = "SE_VOC_KP_L_TIRED";
    goto LABEL_13;
  }
LABEL_14:
  v14 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v15 = *(_DWORD *)(*(_DWORD *)v2 + 8);
  v16 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  v17 = v14;
  if ( v15 > v16 )
    v17 = v14 + 4 * v16;
  v18 = *(float *)(*(_DWORD *)v17 + 20);
  if ( v18 >= 105.0 && v18 <= 440.0 )
  {
    v19 = (int)(float)(440.0 - v18);
    if ( v19 <= 1 )
      v19 = 1;
    *((_DWORD *)a1 + 6398) += (int)(float)((float)(1.0 / (float)v19) * (float)-*((_DWORD *)a1 + 6398));
    sub_608134C8(a1 + 3166, "SE_BOSS_KOOPA_FIRE_BREATH", 0);
    v14 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v15 = *(_DWORD *)(*(_DWORD *)v2 + 8);
    v16 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  }
  if ( v15 > v16 )
    v14 += 4 * v16;
  result = *(unsigned __int8 *)(*(_DWORD *)v14 + 28);
  if ( (result & 0x20) != 0 )
  {
    if ( (*(int (__fastcall **)(_WORD *))(*(_DWORD *)a1 + 716))(a1) == 1 )
    {
      v21 = 240;
    }
    else
    {
      v22 = (*(int (__fastcall **)(_WORD *))(*(_DWORD *)a1 + 720))(a1);
      v21 = 160;
      if ( v22 == 1 )
        v21 = 240;
    }
    a1[3138] = v21;
    return (*(int (__fastcall **)(_WORD *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8154C);
  }
  return result;
}
