/* sub_602961A0
 * address: 0x602961A0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_602961A0(_DWORD *result)
{
  int v1; // r1

  v1 = result[1666];
  result[1666] = v1 - 1;
  if ( v1 <= 1 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))(*result + 192))(result, &dword_60C8FC60);
  return result;
}
