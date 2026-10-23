/* sub_60984A5C
 * address: 0x60984A5C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60984A5C(int a1, int a2, int a3, int a4, int a5)
{
  _DWORD *result; // r0

  result = (_DWORD *)LetterAnimOn_ref(a1, a2, a3, a4, a5);
  *result = off_60C5FAE8;
  result[69] = 0;
  result[70] = 0;
  result[71] = 0;
  result[68] = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(FIELD_U32(a4, 20) + 8) + 48) + 44);
  return result;
}
