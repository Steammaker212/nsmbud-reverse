/* SE_BOSS_IGGY_DOKAN_IN_ref
 * address: 0x60098A48   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_IGGY_DOKAN_IN_ref(int a1)
{
  float v2; // s0
  int v3; // r0
  float v4; // s2
  float v5; // r0
  float v6; // s4
  float v7; // r0
  int v8; // r5
  StateBase *CurrentState; // r0
  int v11; // r5
  Vec3 position; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = FIELD_F32(a1, 108);
  v3 = dword_60CC6484;
  v4 = FIELD_F32(dword_60CC6484, 112);
  if ( v2 >= (float)((float)(v4 + 24.0) + 4.0)
    && v2 <= (float)((float)(FIELD_F32(dword_60CC6484, 120) + -24.0) + -4.0) )
  {
    v5 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v5;
    position.z = 4500.0;
    EffectWrapper_update((EffectWrapper *)(a1 + 8224), 1013, &position, 0, 0);
    v2 = FIELD_F32(a1, 108);
    v3 = dword_60CC6484;
    v4 = FIELD_F32(dword_60CC6484, 112);
  }
  if ( v2 <= (float)(v4 + 32.0) && FIELD_F32(a1, 584) > (float)(v4 + 32.0)
    || (v6 = FIELD_F32(v3, 120) + -32.0, v2 >= v6) && FIELD_F32(a1, 584) < v6 )
  {
    v7 = FIELD_F32(a1, 112);
    position.x = v2;
    position.y = v7;
    mapPositionToScreen(&out, &position);
    sub_60813570(a1 + 6332, "SE_BOSS_IGGY_DOKAN_IN", &out, 0);
    v2 = FIELD_F32(a1, 108);
    v3 = dword_60CC6484;
    v4 = FIELD_F32(dword_60CC6484, 112);
  }
  if ( v2 >= (float)((float)(v4 + 24.0) + 0.0) && v2 <= (float)(FIELD_F32(v3, 120) + -24.0) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v11 != (*(int (**)(void))(dword_60C832FC + 8))() )
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
  }
  else
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
  v8 = byte_60AFE3F4[FIELD_U32(a1, 80)];
  LODWORD(position.x) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1) * v8;
  moveValueTo((int *)(a1 + 160), (int *)&position, (int *)(a1 + 8140));
  return sub_6009EC78(a1);
}
