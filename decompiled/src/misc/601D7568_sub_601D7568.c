/* sub_601D7568
 * address: 0x601D7568   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D7568(int a1)
{
  _DWORD *v2; // r5
  int result; // r0

  FIELD_U8(a1, 280) = 1;
  v2 = (_DWORD *)(a1 + 1032);
  sub_601E032C(a1 + 1032, FIELD_U32(a1, 1092), a1 + 1044);
  sub_6019EC34((_DWORD *)(dword_60CC6D78 + 480), v2);
  FIELD_U32(dword_60CC6D78, 492) = FIELD_U32(a1, 1092);
  FIELD_F32(a1, 1132) = sub_601D89B8(a1);
  FIELD_U32(a1, 1240) = 0;
  FIELD_U32(a1, 1008) = 0;
  sub_601D75F4(a1);
  result = FIELD_U32(a1, 1092);
  FIELD_U32(dword_60CC6D78, 496) = result;
  return result;
}
