/* sub_603744AC
 * address: 0x603744AC   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603744AC(int a1)
{
  int v2; // r4
  int Area; // r0

  v2 = 2;
  if ( FIELD_U8(a1, 28) )
  {
    Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
    if ( Area )
    {
      v2 = 2;
      if ( LevelArea_getLocation(Area, (float *)(a1 + 80), FIELD_U8(a1, 20)) )
        return 1;
    }
  }
  return v2;
}
