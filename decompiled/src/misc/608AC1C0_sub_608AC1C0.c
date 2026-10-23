/* sub_608AC1C0
 * address: 0x608AC1C0   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608AC1C0(int *result)
{
  int v1; // r1

  v1 = *result;
  if ( *result )
  {
    if ( *(int **)(v1 + 8) == result )
    {
      FIELD_U32(v1, 8) = 0;
      v1 = *result;
    }
    if ( *(int **)(v1 + 12) == result )
    {
      FIELD_U32(v1, 12) = 0;
      v1 = *result;
    }
    if ( v1 )
      *result = 0;
  }
  return result;
}
