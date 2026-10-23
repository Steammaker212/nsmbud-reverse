/* sub_6025663C
 * address: 0x6025663C   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6025663C(int a1)
{
  int v2; // lr
  _DWORD *v3; // r1
  int v4; // r2
  int v5; // r4
  int v6; // r5
  int v7; // r6
  int v8; // r7
  float v9; // s0
  float v10; // s2
  float v11; // s4
  float v12; // s6
  float v13; // s8
  int v14; // r0
  int v15; // r1
  signed int v16; // r0
  int v17; // r6
  int v18; // r0
  int v19; // r1
  int result; // r0

  v2 = 119;
  v3 = (_DWORD *)(a1 + 10380);
  do
  {
    --v2;
    *(v3 - 2) = *(v3 - 10);
    *(v3 - 1) = *(v3 - 9);
    v4 = *(v3 - 7);
    v5 = *(v3 - 6);
    v6 = *(v3 - 5);
    v7 = *(v3 - 4);
    v8 = *(v3 - 3);
    *v3 = *(v3 - 8);
    v3[1] = v4;
    v3[2] = v5;
    v3[3] = v6;
    v3[4] = v7;
    v3[5] = v8;
    v3 -= 8;
  }
  while ( v2 );
  v9 = FIELD_F32(a1, 108);
  v10 = FIELD_F32(a1, 112);
  v11 = FIELD_F32(a1, 116);
  v12 = FIELD_F32(a1, 6600);
  v13 = FIELD_F32(a1, 6596);
  FIELD_F32(a1, 6564) = v9;
  FIELD_F32(a1, 6568) = v10;
  v14 = FIELD_U32(a1, 156);
  v15 = FIELD_U32(a1, 160);
  FIELD_U32(a1, 6580) = FIELD_U32(a1, 164);
  FIELD_U32(a1, 6576) = v15;
  FIELD_U32(a1, 6572) = v14;
  FIELD_F32(a1, 6584) = sqrtf(
                            (float)((float)((float)(v10 - v12) * (float)(v10 - v12))
                                  + (float)((float)(v9 - v13) * (float)(v9 - v13)))
                          + (float)((float)(v11 - v11) * (float)(v11 - v11)));
  FIELD_U32(a1, 6592) = sub_6014C4A4(a1 + 648);
  v16 = sub_6014C4A4(a1 + 648);
  if ( sub_6014C57C(a1 + 648, v16) )
  {
    v17 = FIELD_U32(a1, 80);
    v18 = sub_6014C540(a1 + 648);
    if ( v17 )
    {
      v19 = -1;
      if ( !v18 )
        v19 = 1;
      v18 = v19;
    }
    else if ( v18 != 1 )
    {
      v18 = -1;
    }
  }
  else
  {
    v18 = 0;
  }
  FIELD_U32(a1, 6588) = v18;
  result = FIELD_U32(a1, 80);
  if ( !result )
  {
    FIELD_U32(a1, 6592) = -FIELD_U32(a1, 6592);
    return a1 + 6592;
  }
  return result;
}
