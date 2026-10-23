/* sub_60834288
 * address: 0x60834288   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60834288(_DWORD *a1, unsigned int a2)
{
  unsigned int *v2; // r3
  unsigned int result; // r0

  v2 = a1 + 11;
  if ( !a1[4] )
    v2 = a1 + 9;
  result = v2[1];
  if ( *v2 > a2 )
    result += 12 * a2;
  return result;
}
