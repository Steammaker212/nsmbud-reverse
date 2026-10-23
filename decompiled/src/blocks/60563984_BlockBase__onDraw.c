/* BlockBase__onDraw
 * address: 0x60563984   size: 104   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F54
// 
// Overridden by:
//   - 0x60565FA8 : BrickBlockHuge
int __fastcall BlockBase__onDraw(int a1)
{
  float v1; // r2
  float v2; // r3
  Vec3 v4; // [sp+8h] [bp-18h] BYREF
  int a4; // [sp+14h] [bp-Ch] BYREF

  a4 = 0;
  v1 = FIELD_F32(a1, 112);
  v2 = FIELD_F32(a1, 116);
  v4.x = FIELD_F32(a1, 108);
  v4.z = v2;
  v4.y = v1 + 8.0;
  DrawMgr_drawTile((int)DrawMgr_instance, FIELD_U32(a1, 7296), &v4, &a4, (Vec3 *)(a1 + 144));
  return 1;
}
