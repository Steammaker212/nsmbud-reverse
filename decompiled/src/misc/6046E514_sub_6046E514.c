/* sub_6046E514
 * address: 0x6046E514   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046E514(int a1)
{
  int Area; // r0

  if ( !FIELD_U8(a1, 20) )
    return 1;
  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  if ( !LevelArea_getLocation(Area, (float *)(a1 + 104), FIELD_U8(a1, 20)) )
    return 2;
  FIELD_U32(a1, 120) = 1;
  FIELD_U8(a1, 100) = 1;
  return 1;
}
