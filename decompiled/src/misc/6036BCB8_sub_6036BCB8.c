/* sub_6036BCB8
 * address: 0x6036BCB8   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_QWORD *__fastcall sub_6036BCB8(int a1, int a2)
{
  int v2; // s0
  __int64 v3; // d17
  __int64 v4; // d17
  _QWORD *v5; // r1
  _QWORD *result; // r0
  __int64 v7; // d17

  v2 = byte_60AFE3F4[a2];
  FIELD_U8(a1, 648) = 1;
  FIELD_F32(a1, 120) = (float)v2 * 2.5;
  FIELD_U32(a1, 124) = 1082130432;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 116) = 1167998976;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  v3 = FIELD_U64(a1, 660);
  FIELD_U64(a1, 700) = FIELD_U64(a1, 652);
  FIELD_U64(a1, 708) = v3;
  v4 = FIELD_U64(a1, 676);
  FIELD_U64(a1, 716) = FIELD_U64(a1, 668);
  FIELD_U64(a1, 724) = v4;
  v5 = (_QWORD *)(a1 + 684);
  result = (_QWORD *)(a1 + 732);
  v7 = v5[1];
  *result = *v5;
  result[1] = v7;
  return result;
}
