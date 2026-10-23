/* sub_600C85B0
 * address: 0x600C85B0   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int16 *__fastcall sub_600C85B0(int a1)
{
  int Area; // r0

  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  return LevelArea_getLocation(Area, (float *)(a1 + 6132), 1);
}
