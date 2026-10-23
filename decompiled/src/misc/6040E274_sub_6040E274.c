/* sub_6040E274
 * address: 0x6040E274   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6040E274(int a1)
{
  unsigned int v1; // r1
  _BOOL4 result; // r0

  v1 = FIELD_U8(a1, 17);
  result = 1;
  if ( v1 >= 0x18 && v1 != 36 )
    return (unsigned __int8)(v1 - 41) < 2u;
  return result;
}
