/* sub_609723AC
 * address: 0x609723AC   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609723AC(int a1, __int16 a2, int a3, char a4, char a5, int a6)
{
  FIELD_U8(a1, 32) = sub_60920DE8(a3, 0);
  FIELD_U8(a1, 33) = sub_60920DE8(a3, 1);
  FIELD_U8(a1, 34) = sub_60920DE8(a3, 2);
  FIELD_U8(a1, 35) = sub_60920DE8(a3, 3);
  FIELD_U8(a1, 26) = a5;
  FIELD_U8(a1, 27) = sub_60920D90(a3);
  FIELD_U16(a1, 10) = a2;
  FIELD_U16(a1, 6) = sub_6097136C(a3);
  FIELD_U8(a1, 8) = a6;
  FIELD_U8(a1, 9) = a4;
  return a6;
}
