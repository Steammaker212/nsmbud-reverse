/* sub_60730D78
 * address: 0x60730D78   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60730D78(int a1, int a2, Vec3 *a3, int a4)
{
  Vec2 v8[4]; // [sp+0h] [bp-20h] BYREF

  mapPositionToScreen(v8, a3);
  return sub_60814720(a1, a2, v8, a4);
}
