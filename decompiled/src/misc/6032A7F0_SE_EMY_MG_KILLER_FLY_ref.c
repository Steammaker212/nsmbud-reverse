/* SE_EMY_MG_KILLER_FLY_ref
 * address: 0x6032A7F0   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_MG_KILLER_FLY_ref(int a1)
{
  float v2; // s0
  float v3; // s0
  float v4; // s0
  float v5; // s0
  float v6; // s0
  int v7; // r6
  int v8; // r5
  float v9; // r0
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  ((void (*)(void))loc_60321F58)();
  if ( FIELD_U32(a1, 6360) == 1 )
  {
    v2 = FIELD_F32(a1, 120) + FIELD_F32(a1, 6332);
    FIELD_F32(a1, 6332) = v2;
    v3 = v2 + FIELD_F32(dword_60CC6484, 112);
  }
  else
  {
    v3 = FIELD_F32(a1, 120) + FIELD_F32(a1, 108);
  }
  FIELD_F32(a1, 108) = v3;
  v4 = FIELD_F32(a1, 124);
  if ( FIELD_U32(a1, 6364) == 1 )
  {
    v5 = FIELD_F32(a1, 6336) - v4;
    FIELD_F32(a1, 6336) = v5;
    v6 = FIELD_F32(dword_60CC6484, 124) - v5;
  }
  else
  {
    v6 = v4 + FIELD_F32(a1, 112);
  }
  FIELD_F32(a1, 112) = v6;
  sub_60321DAC(a1);
  sub_60322150(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
  ActiveCollider_reset((ActiveCollider *)(a1 + 188));
  v7 = FIELD_U32(a1, 8);
  v8 = Global_BasicSoundActor1;
  v9 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v9;
  mapPositionToScreen(&out, &position);
  return j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v8, "SE_EMY_MG_KILLER_FLY", v7, &out, 0);
}
