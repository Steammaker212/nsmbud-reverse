/* sub_60913B04
 * address: 0x60913B04   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60913B04(int *a1, int a2)
{
  int result; // r0

  result = *a1;
  if ( result )
  {
    result = dword_60CC7400(result);
    if ( (result & 4) != 0 )
      return dword_60CC73EC(*a1, a1[1], a2);
  }
  return result;
}
