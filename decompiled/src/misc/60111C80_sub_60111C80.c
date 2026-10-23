/* sub_60111C80
 * address: 0x60111C80   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60111C80(int a1)
{
  int Area; // r0

  if ( (FIELD_U32(a1, 20) & 0xF0000F0) != 0 )
  {
    FIELD_U8(a1, 534) = 0;
  }
  else
  {
    FIELD_U32(a1, 80) = 1;
    Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
    LevelArea_getLocation(Area, (float *)(a1 + 648), FIELD_U32(a1, 20) & 0xF);
  }
  return 1;
}
