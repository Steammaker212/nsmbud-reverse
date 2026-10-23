/* sub_60917168
 * address: 0x60917168   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60917168(int a1, unsigned int *a2)
{
  int v2; // r2
  unsigned int result; // r0

  v2 = 1;
  if ( (FIELD_U32(a1, 40) & 2) != 0 )
    v2 = 4;
  result = *a2 & 0xFFFFFFF8 | v2;
  *a2 = result;
  return result;
}
