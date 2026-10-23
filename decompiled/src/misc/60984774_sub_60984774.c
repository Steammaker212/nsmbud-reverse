/* sub_60984774
 * address: 0x60984774   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60984774(int a1, int a2, int a3, int a4)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_60859D08(a1, (int)&unk_60CD0C00, FIELD_U32(dword_60CCF464, 36), a2, a3, a4);
  *result = off_60C5F9FC;
  return result;
}
