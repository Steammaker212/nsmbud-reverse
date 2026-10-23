/* sub_608F28CC
 * address: 0x608F28CC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608F28CC(int a1)
{
  unsigned int *v1; // r1
  unsigned int result; // r0

  v1 = (unsigned int *)(a1 + 220);
  do
    result = __ldrex(v1);
  while ( __strex(result + 1, v1) );
  return result;
}
