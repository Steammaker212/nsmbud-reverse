/* sub_600CCDF0
 * address: 0x600CCDF0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_600CCDF0(_DWORD *result)
{
  int v1; // r1

  v1 = result[1578];
  result[27] = FIELD_U32(v1, 11072);
  result[28] = FIELD_U32(v1, 11076);
  result[29] = FIELD_U32(v1, 11080);
  if ( FIELD_U8(v1, 11680) )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *, void *))(*result + 192))(result, &unk_60C840F4);
  return result;
}
