/* SE_BOSS_KOOPA_L_FIRE_CONTINUE_ref
 * address: 0x6007DF1C   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_BOSS_KOOPA_L_FIRE_CONTINUE_ref(int a1)
{
  float *v2; // r5
  float v3; // s16
  float v4; // s4
  float v5; // s2
  float v6; // s0
  float v7; // s0
  int v8; // r5
  float v9; // r0
  int v10; // r6
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  v2 = (float *)(a1 + 6352);
  v3 = FIELD_F32(a1, 112);
  ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(
    a1 + 112,
    FIELD_F32(a1, 6352),
    0.05,
    1.575,
    0.0);
  v4 = FIELD_F32(a1, 112);
  FIELD_F32(a1, 124) = v4 - v3;
  if ( v4 <= (float)(*v2 + 0.1) && FIELD_F32(a1, 588) > (float)(*v2 + -0.1) )
  {
    v5 = FIELD_F32(a1, 144) * 10.0;
    FIELD_F32(a1, 312) = v5;
    FIELD_F32(a1, 316) = v5;
  }
  v6 = sqrtf(3.0625 - (float)((float)(v4 - v3) * (float)(v4 - v3)));
  FIELD_F32(a1, 120) = v6;
  if ( FIELD_U32(a1, 80) == 1 )
  {
    v6 = -v6;
    FIELD_F32(a1, 120) = v6;
  }
  v7 = v6 + FIELD_F32(a1, 108);
  FIELD_F32(a1, 108) = v7;
  v8 = Global_BasicSoundActor1;
  v9 = FIELD_F32(a1, 112);
  v10 = FIELD_U32(a1, 8);
  position.x = v7;
  position.y = v9;
  mapPositionToScreen(&out, &position);
  SE_EMY_LIFT_LINE_MOVE_ref_2(v8, "SE_BOSS_KOOPA_L_FIRE_CONTINUE", v10, &out, 0, 0);
  FIELD_U32(a1, 164) = sub_6000F7B8(FIELD_F32(a1, 124), FIELD_F32(a1, 120)) - 0x40000000;
  CollisionMgr_process((_BYTE *)(a1 + 648));
  SE_BOSS_KOOPA_L_FIRE_DISAPP_ref_802A0(a1);
  StageActor__cullCheck((StageActor *)a1, 4);
}
