/* sub_608AE46C
 * address: 0x608AE46C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608AE46C(int *result)
{
  int v1; // r1

  v1 = *result;
  if ( *result )
  {
    if ( *(int **)(v1 + 436) != result || (FIELD_U32(v1, 436) = 0, *result) )
      *result = 0;
  }
  return result;
}
