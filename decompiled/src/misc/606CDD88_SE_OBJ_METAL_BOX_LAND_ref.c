/* SE_OBJ_METAL_BOX_LAND_ref
 * address: 0x606CDD88   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_METAL_BOX_LAND_ref(int a1)
{
  float v2; // r1
  int v3; // r5
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  if ( FIELD_U8(a1, 6186) )
  {
    v2 = FIELD_F32(a1, 112);
    v3 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v2;
    mapPositionToScreen(&out, &position);
    sub_60813BDC(v3, "SE_OBJ_METAL_BOX_LAND", &out, 3, 0);
  }
  return sub_606CCCC0(a1);
}
