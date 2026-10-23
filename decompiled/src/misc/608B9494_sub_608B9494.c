/* sub_608B9494
 * address: 0x608B9494   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B9494(int a1, _DWORD *a2, int *a3)
{
  int v3; // r4
  int v4; // r5
  int v5; // r6
  int v6; // r7
  int v7; // r12
  _DWORD *v9; // r0
  int v10; // r1
  int *v11; // r2
  int v12; // r3
  int v13; // r6
  int v14; // r7
  int v15; // r1
  int v16; // r3
  int v17; // r6
  int v18; // r7
  int v19; // r3
  int v20; // r5
  int v21; // r6
  int v22; // r7
  int v23; // r0
  int result; // r0

  v3 = a2[1];
  v4 = a2[2];
  v5 = a2[3];
  v6 = a2[4];
  v7 = a2[5];
  v9 = (_DWORD *)(a1 + 460);
  *v9 = *a2;
  v9[1] = v3;
  v9[2] = v4;
  v9[3] = v5;
  v9[4] = v6;
  v9[5] = v7;
  v10 = *a3;
  v12 = a3[1];
  v13 = a3[2];
  v14 = a3[3];
  v11 = a3 + 4;
  FIELD_U32(a1, 492) = v10;
  FIELD_U32(a1, 496) = v12;
  FIELD_U32(a1, 500) = v13;
  FIELD_U32(a1, 504) = v14;
  v15 = *v11;
  v16 = v11[1];
  v17 = v11[2];
  v18 = v11[3];
  v11 += 4;
  FIELD_U32(a1, 508) = v15;
  FIELD_U32(a1, 512) = v16;
  FIELD_U32(a1, 516) = v17;
  FIELD_U32(a1, 520) = v18;
  v19 = v11[1];
  v20 = v11[2];
  v21 = v11[3];
  v22 = v11[4];
  FIELD_U32(a1, 524) = *v11;
  FIELD_U32(a1, 528) = v19;
  FIELD_U32(a1, 532) = v20;
  FIELD_U32(a1, 536) = v21;
  FIELD_U32(a1, 540) = v22;
  FIELD_U8(a1, 456) = 1;
  FIELD_U32(a1, 212) = 0;
  v23 = sub_608C3C60(0);
  result = sub_608C40FC(v23, a1 + 176);
  FIELD_U8(a1, 458) = 1;
  return result;
}
