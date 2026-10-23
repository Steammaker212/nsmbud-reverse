/* sub_6078A700
 * address: 0x6078A700   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_6078A700()
{
  int v0; // r4

  v0 = 0;
  if ( !sub_6040E3D0(LevelInfo_instance) && !sub_6040E438(LevelInfo_instance) )
    return (unsigned int)FIELD_U8(LevelInfo_instance, 17) - 38 > 2;
  return v0;
}
