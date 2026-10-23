/* sub_60097DDC
 * address: 0x60097DDC   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60097DDC(int a1)
{
  int v2; // r5
  float v3; // s0
  float v4; // r0
  _DWORD *v5; // r1
  unsigned int v6; // r0
  int v7; // r2
  int v8; // r0
  const char *v9; // r1
  _DWORD *v10; // r1
  unsigned int v11; // r0
  float v12; // s0
  int v13; // r5
  float v14; // s2
  int result; // r0
  StateBase *CurrentState; // r0
  int v17; // r5
  Vec3 target[3]; // [sp+4h] [bp-24h] BYREF

  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = FIELD_F32(a1, 108);
  if ( v3 >= (float)((float)(FIELD_F32(dword_60CC6484, 112) + 24.0) + 4.0)
    && v3 <= (float)((float)(FIELD_F32(dword_60CC6484, 120) + -24.0) + -4.0) )
  {
    v4 = FIELD_F32(a1, 112);
    target[0].x = FIELD_F32(a1, 108);
    target[0].y = v4;
    target[0].z = 4500.0;
    EffectWrapper_update((EffectWrapper *)(a1 + 8224), 1013, target, 0, 0);
  }
  v5 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v6 )
    v5 += v6;
  if ( sub_60418548(*v5 + 4) )
  {
    v7 = FIELD_S16(a1, 6640);
    v8 = a1 + 6332;
    v9 = "SE_BOSS_IGGY_FOOT_L";
LABEL_12:
    sub_608134CC(v8, v9, v7, 0);
    goto LABEL_13;
  }
  v10 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v11 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v11 )
    v10 += v11;
  if ( sub_60418548(*v10 + 4) )
  {
    v7 = FIELD_S16(a1, 6640);
    v8 = a1 + 6332;
    v9 = "SE_BOSS_IGGY_FOOT_R";
    goto LABEL_12;
  }
LABEL_13:
  v12 = FIELD_F32(a1, 108);
  if ( v12 >= (float)((float)(FIELD_F32(dword_60CC6484, 112) + 24.0) + 0.0)
    && v12 <= (float)(FIELD_F32(dword_60CC6484, 120) + -24.0) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v17 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v17 != (*(int (**)(void))(dword_60C832FC + 8))() )
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
  }
  else
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
  v13 = byte_60AFE3F4[FIELD_U32(a1, 80)];
  LODWORD(target[0].x) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1) * v13;
  moveValueTo((int *)(a1 + 160), (int *)target, (int *)(a1 + 8140));
  if ( !FIELD_U16(a1, 6276)
    || (v14 = FIELD_F32(a1, 108), result = dword_60CC6484, v14 < (float)(FIELD_F32(dword_60CC6484, 112) + 64.0))
    && FIELD_F32(a1, 120) < 0.0
    || v14 > (float)(FIELD_F32(dword_60CC6484, 120) + -64.0) && FIELD_F32(a1, 120) > 0.0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1088))(a1);
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C82510);
  }
  return result;
}
