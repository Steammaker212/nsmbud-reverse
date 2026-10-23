/* sub_607BA828
 * address: 0x607BA828   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BA828(_DWORD *a1)
{
  int result; // r0

  result = sub_6040E510(LevelInfo_instance);
  if ( result == 1 )
  {
    a1[307] |= 0x40u;
    a1[3757] = 0;
    a1[3756] = 150;
    a1[40] = 0;
    return 15024;
  }
  return result;
}
