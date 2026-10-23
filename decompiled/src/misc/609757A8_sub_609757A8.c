/* sub_609757A8
 * address: 0x609757A8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_609757A8(int a1)
{
  unsigned int *result; // r0

  FIELD_U32(a1, 2356) = 0;
  result = (unsigned int *)(a1 + 3584);
  do
    __ldrex(result);
  while ( __strex(0, result) );
  return result;
}
