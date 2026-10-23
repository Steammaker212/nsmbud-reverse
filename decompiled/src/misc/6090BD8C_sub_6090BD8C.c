/* sub_6090BD8C
 * address: 0x6090BD8C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090BD8C(_QWORD *a1, __int64 *a2)
{
  _QWORD *v2; // r3
  _QWORD *v3; // r1
  __int64 v4; // d16
  __int64 v5; // d17
  __int64 v6; // d17
  __int64 v7; // d17

  v2 = a2 + 4;
  v4 = *a2;
  v5 = a2[1];
  v3 = a2 + 2;
  a1[19] = v4;
  a1[20] = v5;
  v6 = v3[1];
  a1[21] = *v3;
  a1[22] = v6;
  v7 = v2[1];
  a1[23] = *v2;
  a1[24] = v7;
  return sub_608F4CDC((int)a1 + 20, (int)(a1 + 19));
}
