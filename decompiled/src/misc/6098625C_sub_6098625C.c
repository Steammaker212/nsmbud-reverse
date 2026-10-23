/* sub_6098625C
 * address: 0x6098625C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6098625C(int a1, int a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_60860D30(a1, a2, FIELD_U32(dword_60CCF464, 36));
  *result = off_60C5FD10;
  return result;
}
