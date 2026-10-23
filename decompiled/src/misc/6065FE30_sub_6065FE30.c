/* sub_6065FE30
 * address: 0x6065FE30   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6065FE30(_BYTE *result)
{
  if ( --result[7057] == 0 )
    return (_BYTE *)(*(int (__fastcall **)(_BYTE *, void *))(*(_DWORD *)result + 192))(result, &unk_60CB68E8);
  return result;
}
