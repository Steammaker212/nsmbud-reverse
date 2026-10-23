/* sub_60587598
 * address: 0x60587598   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60587598(_DWORD *result)
{
  if ( (*(_BYTE *)(**(_DWORD **)(result[1575] + 12) + 28) & 0x20) != 0 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))(*result + 192))(result, &dword_60CAF284);
  return result;
}
