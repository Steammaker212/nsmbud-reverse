/* sub_60987E64
 * address: 0x60987E64   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60987E64(int a1, unsigned int a2)
{
  unsigned int *v2; // r2
  unsigned int result; // r0

  v2 = (unsigned int *)(a1 + 40);
  do
    result = __ldrex(v2);
  while ( __strex(a2, v2) );
  return result;
}
