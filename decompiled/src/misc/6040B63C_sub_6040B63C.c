/* sub_6040B63C
 * address: 0x6040B63C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6040B63C(_BYTE *result)
{
  unsigned int v1; // r1

  v1 = (unsigned __int8)*result + 1;
  if ( v1 >= 0x63 )
    LOBYTE(v1) = 99;
  *result = v1;
  return result;
}
