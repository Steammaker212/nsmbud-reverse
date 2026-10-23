/* sub_607736B0
 * address: 0x607736B0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607736B0(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 1204);
  if ( (result & 0x40) == 0 )
  {
    result = sub_6040E538(LevelInfo_instance);
    if ( !result )
      JUMPOUT(0x60814A1C);
  }
  return result;
}
