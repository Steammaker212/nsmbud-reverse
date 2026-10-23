/* sub_6063E4EC
 * address: 0x6063E4EC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6063E4EC(_DWORD *result)
{
  if ( (*(_BYTE *)(**(_DWORD **)(result[1527] + 12) + 28) & 0x20) != 0 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *, void *))(*result + 192))(result, &unk_60CB5790);
  return result;
}
