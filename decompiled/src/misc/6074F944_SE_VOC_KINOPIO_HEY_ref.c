/* SE_VOC_KINOPIO_HEY_ref
 * address: 0x6074F944   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_KINOPIO_HEY_ref(int a1)
{
  float v2; // r1
  int v3; // r5
  int v4; // r0
  Vec2 v6; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  FIELD_U32(a1, 700) = 1;
  v2 = FIELD_F32(a1, 692);
  v3 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 688);
  position.y = v2;
  mapPositionToScreen(&v6, &position);
  BasicSoundActor1_playSound(v3, "SE_VOC_KINOPIO_HEY", (int)&v6, 0);
  v4 = FIELD_U32(a1, 648);
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "open";
  sub_6040F4B8(v4, (int)&position, 0, 1.0, 0.0);
  return sub_6074F718(a1);
}
