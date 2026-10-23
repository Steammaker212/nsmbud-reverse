/* sub_6090BD34
 * address: 0x6090BD34   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090BD34(_QWORD *a1, int a2)
{
  _QWORD *v3; // r0
  __int64 v4; // d17
  __int64 v5; // d17
  _QWORD *v6; // r2
  __int64 v7; // d17
  __int64 v8; // d17

  v3 = (_QWORD *)sub_6090BE54(a2);
  v4 = v3[1];
  a1[11] = *v3;
  a1[12] = v4;
  v5 = v3[3];
  a1[13] = v3[2];
  a1[14] = v5;
  v6 = v3 + 4;
  v3 += 6;
  v7 = v6[1];
  a1[15] = *v6;
  a1[16] = v7;
  v8 = v3[1];
  a1[17] = *v3;
  a1[18] = v8;
  return sub_608F4CD4((int)a1 + 20, (int)(a1 + 11));
}
