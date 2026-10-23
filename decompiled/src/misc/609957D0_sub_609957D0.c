/* sub_609957D0
 * address: 0x609957D0   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609957D0(int a1, int a2, _DWORD *a3)
{
  int *v6; // r0
  int v7; // r5
  int result; // r0
  _DWORD v9[14]; // [sp+0h] [bp-38h] BYREF

  sub_60991198(a1, a2, a3);
  v9[0] = sub_60853E04(a2, "TouchOn2");
  v9[1] = sub_60853E04(a2, &byte_60ABC94D);
  v9[2] = sub_60853E04(a2, "TouchOff2");
  v9[3] = sub_60853E04(a2, &byte_60ABC94D);
  v9[4] = sub_60853E04(a2, "TouchDecide2");
  v9[5] = sub_60853E04(a2, &byte_60ABC94D);
  v9[6] = sub_60853E04(a2, "TouchCancel");
  v9[7] = sub_60853E04(a2, &byte_60ABC94D);
  v6 = (int *)sub_60980770(a3, (int)v9, 8, 1u);
  FIELD_U32(a1, 72) = v6;
  sub_6098A344(v6, 1);
  sub_6098A3A4(*(int **)(a1 + 72), 0);
  v7 = *(_DWORD *)(FIELD_U32(a1, 72) + 12);
  sub_608502F4(v7, 0);
  FIELD_U32(v7, 44) = 0;
  result = FIELD_U32(a1, 44);
  FIELD_U32(a1, 68) = result;
  return result;
}
