/* sub_604089BC
 * address: 0x604089BC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604089BC(_BYTE *a1)
{
  unsigned int v2; // r2
  int result; // r0

  v2 = (unsigned __int8)(a1[6559] - 1);
  result = 0;
  if ( v2 <= 2 && a1[6476] == 4 )
    return (unsigned __int8)a1[6478];
  return result;
}
