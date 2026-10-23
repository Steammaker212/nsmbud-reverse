/* sub_602904E8
 * address: 0x602904E8   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602904E8(int a1)
{
  sub_60296B54();
  *(_DWORD *)a1 = off_60BDE938;
  FIELD_U32(a1, 7524) = 0;
  FIELD_U32(a1, 7528) = 0;
  FIELD_U8(a1, 7532) = 0;
  FIELD_U16(a1, 7520) = 0;
  FIELD_U32(a1, 7516) = 0;
  FIELD_U32(a1, 7512) = 0;
  FIELD_U32(a1, 7504) = 0;
  FIELD_U32(a1, 7508) = 0;
  sub_6040E90C(a1 + 7536, 9);
  FIELD_U16(a1, 7600) = 0;
  FIELD_U32(a1, 7604) = -1;
  return a1;
}
