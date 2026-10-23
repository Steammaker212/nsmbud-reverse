/* sub_6058E354
 * address: 0x6058E354   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6058E354(_DWORD *result)
{
  int v1; // r1

  v1 = result[1528];
  result[1528] = v1 - 1;
  if ( v1 <= 1 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))(*result + 192))(result, &dword_60CAF524);
  return result;
}
