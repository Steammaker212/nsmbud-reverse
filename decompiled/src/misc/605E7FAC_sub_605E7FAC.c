/* sub_605E7FAC
 * address: 0x605E7FAC   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_605E7FAC()
{
  int v0; // r4
  int Area; // r5
  int v2; // r0
  int v3; // r0

  v0 = LevelInfo_instance;
  if ( !sub_6040E2B8(LevelInfo_instance) && !sub_6040E2E4(v0) && !sub_6040E314(v0) && !sub_6040E4C8(v0) )
    return 0;
  Area = Level_getArea(Level_instance, FIELD_U8(v0, 18));
  v2 = sub_60727D48(Area, FIELD_U8(v0, 19));
  v3 = sub_60727620(Area, FIELD_U8(v2, 13), 0);
  return sub_60024090(FIELD_U8(v3, 22));
}
