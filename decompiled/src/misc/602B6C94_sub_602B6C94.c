/* sub_602B6C94
 * address: 0x602B6C94   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_602B6C94(int a1)
{
  float v1; // s0
  _BYTE *result; // r0
  char v3; // t1

  FIELD_U32(a1, 6328) = FIELD_U32(a1, 120);
  FIELD_U32(a1, 124) = 1083965440;
  v1 = (float)byte_60AFE3F4[FIELD_U32(a1, 80)];
  FIELD_F32(a1, 132) = v1 + v1;
  FIELD_U32(a1, 96) = -1063518208;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 6324) = 0;
  v3 = FIELD_U8(a1, 6318);
  result = (_BYTE *)(a1 + 6318);
  *result = v3 | 1;
  return result;
}
