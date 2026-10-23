/* sub_609847CC
 * address: 0x609847CC   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609847CC(int a1, int a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_6085A1FC(a1, a2, FIELD_U32(dword_60CCF464, 36));
  *result = off_60C5F9FC;
  return result;
}
