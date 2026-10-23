/* SE_EMY_CHOROPU_M_SPANNER_ref
 * address: 0x60149320   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_EMY_CHOROPU_M_SPANNER_ref(int a1)
{
  float v2; // s0
  float v3; // s2
  int v4; // r6
  int v5; // r7
  _BYTE *v6; // r0
  float v7; // r0
  float v8; // s0
  float v9; // s0
  int v10; // r0
  int v11; // r1
  int v12; // r1
  int v13; // r0
  float v14; // r3
  float v15; // r7
  ActiveColliderMgr *v17; // r6
  Vec3 position; // [sp+8h] [bp-30h] BYREF
  Vec2 out; // [sp+18h] [bp-20h] BYREF

  v2 = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 108) = v2;
  v3 = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  FIELD_F32(a1, 112) = v3;
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  v4 = Global_BasicSoundActor1;
  v5 = FIELD_U32(a1, 8);
  position.x = v2;
  position.y = v3;
  mapPositionToScreen(&out, &position);
  j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v4, "SE_EMY_CHOROPU_M_SPANNER", v5, &out, 0);
  v6 = (_BYTE *)(a1 + 11865);
  if ( FIELD_U8(a1, 11865) )
    goto LABEL_2;
  if ( FIELD_U32(a1, 11868) )
  {
    if ( (float)(FIELD_F32(a1, 11844) - FIELD_F32(a1, 108)) >= 21.0 )
    {
      *v6 = 1;
LABEL_21:
      v17 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
        && !ActiveColliderMgr_isInCreateList(v17, (ActiveCollider *)(a1 + 188)) )
      {
        ActiveColliderMgr_addToCreateList(v17, (ActiveCollider *)(a1 + 188));
      }
    }
  }
  else if ( (float)(FIELD_F32(a1, 108) - FIELD_F32(a1, 11844)) >= 21.0 )
  {
    *v6 = 1;
    goto LABEL_21;
  }
LABEL_2:
  v7 = FIELD_F32(a1, 11856);
  FIELD_F32(a1, 11860) = v7;
  v8 = FIELD_F32(dword_60CC6484, 124);
  FIELD_F32(a1, 11856) = v8;
  v9 = (float)(v8 - v7) + FIELD_F32(a1, 112);
  FIELD_F32(a1, 112) = v9;
  if ( v9 >= (float)(FIELD_F32(a1, 11848) + 12.0) )
    FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 116) = 1161936896;
  nullsub_7(a1 + 6480);
  v10 = FIELD_U32(a1, 8704);
  if ( (v10 & 0x440000) != 0 && (v10 & 0x10000000) == 0 )
    goto LABEL_13;
  v11 = ((FIELD_U32(a1, 8704) & 0x10400) == 1024) | FIELD_U32(a1, 8704) & 1;
  if ( (v10 & 0x880000) == 0 )
  {
    if ( !v11 )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( ((v10 & 0x20000000) == 0) | v11 )
LABEL_13:
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C881D0);
LABEL_14:
  v12 = 0x8000000;
  v13 = FIELD_U32(a1, 11868);
  if ( !v13 )
    v12 = -134217728;
  FIELD_U32(a1, 164) += v12;
  v14 = FIELD_F32(a1, 148);
  v15 = FIELD_F32(a1, 152);
  position.x = FIELD_F32(a1, 144);
  position.y = v14;
  position.z = v15;
  if ( v13 )
    position.y = -position.y;
  return EffectWrapper_update((EffectWrapper *)(a1 + 11876), 624, (Vec3 *)(a1 + 108), (Vec3i *)(a1 + 156), &position);
}
