/* sub_60455400
 * address: 0x60455400   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60455400(int a1)
{
  int v1; // r0
  _BYTE *result; // r0

  *(_DWORD *)a1 = 1380995656;
  FIELD_U32(a1, 4) = 1073872897;
  FIELD_U32(a1, 8) = FIELD_U32(dword_60CC6C3C, 80);
  FIELD_U8(a1, 12) = 0;
  v1 = a1 + 12;
  FIELD_U8(v1, 4) = 0;
  v1 += 4;
  FIELD_U8(v1, 4) = 0;
  v1 += 4;
  FIELD_U8(v1, 4) = 0;
  result = (_BYTE *)(v1 + 4);
  result[3] = 0;
  result[2] = 0;
  result[1] = 0;
  *(result - 1) = 0;
  *(result - 2) = 0;
  *(result - 3) = 0;
  *(result - 5) = 0;
  *(result - 6) = 0;
  *(result - 7) = 0;
  *(result - 9) = 0;
  *(result - 10) = 0;
  *(result - 11) = 0;
  return result;
}
