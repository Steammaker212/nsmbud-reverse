/* sub_60661DD8
 * address: 0x60661DD8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60661DD8(_DWORD *result)
{
  int v1; // r1

  v1 = result[1793];
  result[1793] = v1 - 1;
  if ( !v1 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *, void *))(*result + 192))(result, &unk_60CB6A94);
  return result;
}
