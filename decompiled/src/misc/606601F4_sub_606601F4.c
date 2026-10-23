/* sub_606601F4
 * address: 0x606601F4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_606601F4(_BYTE *result)
{
  if ( --result[7057] == 0 )
    return (_BYTE *)(*(int (__fastcall **)(_BYTE *, int *))(*(_DWORD *)result + 192))(result, &dword_60CB68A8);
  return result;
}
