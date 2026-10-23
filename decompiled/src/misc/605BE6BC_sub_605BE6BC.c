/* sub_605BE6BC
 * address: 0x605BE6BC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605BE6BC(unsigned __int8 *a1)
{
  _BOOL4 result; // r0

  result = 1;
  if ( *a1 >= 8u )
    return a1[1] < 8u;
  return result;
}
