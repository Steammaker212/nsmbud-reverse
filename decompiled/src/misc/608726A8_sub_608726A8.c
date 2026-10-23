/* sub_608726A8
 * address: 0x608726A8   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608726A8(int a1, int *a2, int *a3)
{
  int *v3; // r3
  int v4; // r0
  int *v5; // r4
  int v6; // r12
  int v7; // lr
  int v8; // r4
  int *v9; // r5
  int *v10; // r11
  int v11; // r4
  int v12; // r12
  int v13; // lr
  int v14; // r5
  int v15; // r5
  int v16; // r4
  int v17; // r3
  int result; // r0

  v3 = *(int **)(a1 + 16);
  v4 = FIELD_U32(a1, 24);
  if ( (v4 & 8) != 0 )
  {
    v6 = *v3;
    v7 = v3[1];
    v8 = v3[2];
    v3 += 3;
  }
  else
  {
    v5 = a3 + 14;
    if ( !a3 )
      v5 = (int *)&unk_60B1523C;
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[2];
  }
  a2[1] = v6;
  a2[2] = v7;
  a2[3] = v8;
  if ( (v4 & 0x10) != 0 )
  {
    v11 = *v3;
    v12 = v3[1];
    v13 = v3[2];
    v14 = v3[3];
    v10 = a2 + 8;
    v3 += 4;
  }
  else
  {
    v9 = a3 + 17;
    v10 = a2 + 8;
    if ( !a3 )
      v9 = &dword_60AF2C94;
    v11 = *v9;
    v12 = v9[1];
    v13 = v9[2];
    v14 = v9[3];
  }
  *v10 = v11;
  v10[1] = v12;
  v10[2] = v13;
  a2[11] = v14;
  if ( (v4 & 0x20) == 0 )
  {
    v3 = a3 + 21;
    if ( !a3 )
      v3 = &dword_60AF2C94;
  }
  v15 = *v3;
  v16 = v3[1];
  v17 = v3[2];
  result = v4 & 0xF800000;
  a2[4] = v15;
  a2[5] = v16;
  a2[6] = v17;
  *a2 = result;
  if ( a3 )
  {
    result |= a3[13] & 0x7000;
    *a2 = result;
  }
  return result;
}
