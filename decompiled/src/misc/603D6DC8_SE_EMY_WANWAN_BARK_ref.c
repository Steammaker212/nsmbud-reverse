/* SE_EMY_WANWAN_BARK_ref
 * address: 0x603D6DC8   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_WANWAN_BARK_ref(int a1)
{
  float v2; // r1
  int v3; // r5
  Vec2 v5; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  sub_603D907C(a1, 1, 1.0);
  v2 = FIELD_F32(a1, 112);
  v3 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&v5, &position);
  BasicSoundActor1_playSound(v3, "SE_EMY_WANWAN_BARK", (int)&v5, 0);
  FIELD_U32(a1, 340) |= 0x1000u;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 116) = FIELD_U32(a1, 11748);
  FIELD_U8(a1, 11813) = 0;
  FIELD_U32(a1, 11856) = 1;
  FIELD_U32(a1, 11860) = 0;
  return 11860;
}
