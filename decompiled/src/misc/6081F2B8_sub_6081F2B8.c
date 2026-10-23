/* sub_6081F2B8
 * address: 0x6081F2B8   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081F2B8(int a1, unsigned int a2, int a3)
{
  int result; // r0

  result = 0;
  if ( a2 <= 3 )
  {
    *(_DWORD *)(a1 + 4 * a2 + 109016) = a3;
    return 1;
  }
  return result;
}
