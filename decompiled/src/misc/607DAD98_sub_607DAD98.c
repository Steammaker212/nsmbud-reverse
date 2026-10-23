/* sub_607DAD98
 * address: 0x607DAD98   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607DAD98(_DWORD *result, int a2)
{
  *result = a2;
  if ( a2 )
    result[1] = FIELD_U32(a2, 12);
  return result;
}
