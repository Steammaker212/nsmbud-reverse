/* sub_600951E4
 * address: 0x600951E4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_600951E4(_BYTE *result)
{
  if ( result[15261] )
  {
    result[15261] = 0;
    return (_BYTE *)(*(int (__fastcall **)(_BYTE *, void *))(*(_DWORD *)result + 192))(result, &unk_60C82240);
  }
  return result;
}
