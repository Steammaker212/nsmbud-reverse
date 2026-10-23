/* sub_6035434C
 * address: 0x6035434C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6035434C(int a1)
{
  int result; // r0

  sub_60355C1C(a1, 3);
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 6420) = 30;
  FIELD_U8(a1, 6460) = 1;
  FIELD_U32(a1, 6448) = 0;
  FIELD_U32(a1, 6452) = 1065353216;
  FIELD_U32(a1, 6456) = -1077936128;
  FIELD_U32(a1, 6436) = 0;
  FIELD_U32(a1, 6440) = 0;
  FIELD_U32(a1, 6444) = 0;
  FIELD_U32(a1, 3176) |= 0x40000u;
  result = FIELD_U32(a1, 3184) | 0x40000;
  FIELD_U32(a1, 3184) = result;
  return result;
}
