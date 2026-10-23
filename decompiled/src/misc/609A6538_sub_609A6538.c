/* sub_609A6538
 * address: 0x609A6538   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609A6538(_DWORD *result, int a2)
{
  char *v2; // r1

  v2 = *(char **)(a2 + 96);
  *result = &sead__SafeStringBase__vtable;
  if ( !v2 )
    v2 = off_60C5CB34;
  result[1] = v2;
  return result;
}
