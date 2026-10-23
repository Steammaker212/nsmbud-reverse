/* RiverPiranha__beginState_DieFall
 * address: 0x603DFB28   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7FF0
// 
// Overridden by: None
int __fastcall RiverPiranha__beginState_DieFall(int a1)
{
  int v2; // r0
  float v3; // r1
  int v4; // r5
  Vec2 v6; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  if ( FIELD_U32(a1, 6360) != 2 )
    sub_603DF65C((_DWORD *)a1, 2);
  v2 = FIELD_U32(a1, 6128);
  FIELD_U32(a1, 6284) = v2;
  FIELD_U32(a1, 80) = v2;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 100) = -1114007142;
  FIELD_F32(a1, 120) = flt_60AF1EA0[v2];
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1073741824;
  FIELD_U32(a1, 140) = 0;
  FIELD_U8(a1, 6672) = 0;
  sub_602A7CEC((char *)a1);
  FIELD_U8(a1, 6332) = 1;
  FIELD_U16(a1, 6276) = 720;
  v3 = FIELD_F32(a1, 112);
  v4 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v3;
  mapPositionToScreen(&v6, &position);
  return BasicSoundActor1_playSound(v4, "SE_EMY_BLOW_PAKKUN_DOWN", (int)&v6, 0);
}
