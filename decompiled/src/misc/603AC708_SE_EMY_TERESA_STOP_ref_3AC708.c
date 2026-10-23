/* SE_EMY_TERESA_STOP_ref_3AC708
 * address: 0x603AC708   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_TERESA_STOP_ref_3AC708(int a1, int a2, int a3)
{
  int v3; // r5
  float v4; // r1
  int v5; // r4
  int result; // r0
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  v3 = FIELD_U32(a2, 64);
  if ( v3 )
  {
    SE_SYS_ref_2(SoundSystem_instance, a3, 3);
    v4 = FIELD_F32(v3, 112);
    v5 = Global_BasicSoundActor1;
    position.x = FIELD_F32(v3, 108);
    position.y = v4;
    mapPositionToScreen(&out, &position);
    return sub_60813810(v5, (int)"SE_EMY_TERESA_STOP", (int)&out, 1, 0);
  }
  return result;
}
