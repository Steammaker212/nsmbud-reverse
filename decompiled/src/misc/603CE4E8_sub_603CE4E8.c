/* sub_603CE4E8
 * address: 0x603CE4E8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603CE4E8(int a1)
{
  int Area; // r0

  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 0x12));
  LevelArea_getLocation(Area, (float *)(a1 + 644), FIELD_U8(a1, 20));
  return 1;
}
