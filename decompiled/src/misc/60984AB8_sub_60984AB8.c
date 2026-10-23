/* sub_60984AB8
 * address: 0x60984AB8   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60984AB8(int a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = (_DWORD *)LetterAnimOn_ref_98530C(a1, a2, a3);
  *result = off_60C5FAE8;
  result[68] = FIELD_U32(a2, 272);
  result[69] = 0;
  result[70] = 0;
  return result;
}
