/* sub_6058CF74
 * address: 0x6058CF74   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058CF74(int a1)
{
  float v1; // r2
  float v2; // r3
  Vec3 v4; // [sp+8h] [bp-18h] BYREF
  int a4; // [sp+14h] [bp-Ch] BYREF

  a4 = FIELD_U32(a1, 164);
  v1 = FIELD_F32(a1, 112);
  v2 = FIELD_F32(a1, 116);
  v4.x = FIELD_F32(a1, 108);
  v4.y = v1;
  v4.z = v2;
  v4.x = FIELD_F32(a1, 7352) + v4.x;
  v4.y = FIELD_F32(a1, 7356) + v1;
  DrawMgr_drawTile((int)DrawMgr_instance, FIELD_U32(a1, 7296), &v4, &a4, (Vec3 *)(a1 + 144));
  return 1;
}
