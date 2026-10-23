/* sub_6040E394
 * address: 0x6040E394   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6040E394(unsigned int a1, char a2)
{
  _BOOL4 result; // r0

  result = 0;
  if ( a1 <= 9 )
  {
    result = 1;
    if ( (unsigned __int8)(a2 - 24) >= 7u )
      return (unsigned __int8)(a2 - 46) < 8u;
  }
  return result;
}
