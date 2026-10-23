/* sub_609949B8
 * address: 0x609949B8   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609949B8(int a1, int a2, _DWORD *a3)
{
  int result; // r0
  _DWORD v7[11]; // [sp+4h] [bp-2Ch] BYREF

  v7[0] = sub_60853E04(a2, "On");
  v7[1] = sub_60853E04(a2, "TouchOn");
  v7[2] = sub_60853E04(a2, "Off");
  v7[3] = sub_60853E04(a2, "TouchOff");
  v7[4] = sub_60853E04(a2, "Decide");
  v7[5] = sub_60853E04(a2, "TouchDecide");
  v7[6] = sub_60853E04(a2, "Cancel");
  result = sub_60980770(a3, (int)v7, 7, 1u);
  FIELD_U32(a1, 44) = result;
  return result;
}
