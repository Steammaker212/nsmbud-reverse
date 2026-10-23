/* sub_60858BAC
 * address: 0x60858BAC   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60858BAC(_BYTE *result, int a2, char a3)
{
  if ( a2 != 16 )
    return (_BYTE *)(*(int (__fastcall **)(_BYTE *))(*(_DWORD *)result + 36))(result);
  result[65] = a3;
  return result;
}
