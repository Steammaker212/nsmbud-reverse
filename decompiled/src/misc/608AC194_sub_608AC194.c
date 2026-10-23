/* sub_608AC194
 * address: 0x608AC194   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608AC194(int a1, unsigned int a2)
{
  unsigned int *v2; // r2
  unsigned int result; // r0
  bool v4; // cc

  v2 = *(unsigned int **)(a1 + 524);
  result = 0;
  v4 = v2 != 0;
  if ( v2 )
    v4 = *v2 > a2;
  if ( v4 )
    return v2[a2 + 1];
  return result;
}
