/* sub_607C14BC
 * address: 0x607C14BC   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C14BC(int a1)
{
  int result; // r0

  result = sub_60793CA8(FIELD_U32(a1, 11360));
  if ( result == 1 )
  {
    FIELD_U32(a1, 160) = 0;
    return 0;
  }
  return result;
}
