/* sub_601B6F80
 * address: 0x601B6F80   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B6F80(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  bool v6; // vf
  int v7; // r2
  int v8; // r0
  float v9; // s0
  int v10; // r2
  int v11; // r3
  int v12; // r2
  _DWORD *v13; // r5
  int v14; // r0
  int v15; // r1
  int v16; // r1
  int v17; // r0
  int v18; // r1
  bool v19; // zf
  int v20; // r0
  float v21; // s0

  v2 = FIELD_U32(a1, 1144);
  if ( v2 )
  {
    v3 = FIELD_U32(a1, 1132);
    if ( v2 >= 1 )
    {
      v4 = FIELD_U32(a1, 1136);
      v5 = FIELD_U32(a1, 1140);
      v6 = __OFSUB__(v5, v4);
      v7 = v5 - v4;
      if ( v7 < 0 != v6 )
        v7 = FIELD_U32(a1, 1140);
      v3 += 60 * v7;
    }
    if ( (FIELD_U8(v3, 52) & 4) != 0 )
    {
      v8 = sub_601C5F50(a1);
      v9 = 81.0;
      if ( v8 >= 2 )
        v9 = (float)((float)(v8 - 1) * 75.0) + 81.0;
      sub_601B71A8(v9);
      FIELD_U32(a1, 1108) |= 0x1000u;
      v2 = FIELD_U32(a1, 1144);
    }
    if ( v2 >= 1 )
    {
      v10 = FIELD_U32(a1, 1136);
      v11 = FIELD_U32(a1, 1140);
      v6 = __OFSUB__(v11, v10);
      v12 = v11 - v10;
      if ( v12 < 0 != v6 )
        v12 = FIELD_U32(a1, 1140);
      v13 = (_DWORD *)(FIELD_U32(a1, 1132) + 60 * v12);
      sub_6019EC34((_DWORD *)(a1 + 1148), v13);
      sub_6019EC34((_DWORD *)(a1 + 1160), v13 + 3);
      FIELD_U32(a1, 1172) = v13[6];
      FIELD_U32(a1, 1176) = v13[7];
      FIELD_U32(a1, 1180) = v13[8];
      FIELD_U32(a1, 1184) = v13[9];
      FIELD_U32(a1, 1188) = v13[10];
      FIELD_U32(a1, 1192) = v13[11];
      v14 = v13[12];
      v15 = v13[13];
      FIELD_U32(a1, 1204) = v13[14];
      FIELD_U32(a1, 1200) = v15;
      FIELD_U32(a1, 1196) = v14;
      v16 = FIELD_U32(a1, 1140) + 1;
      if ( v16 >= FIELD_U32(a1, 1136) )
        v16 = 0;
      FIELD_U32(a1, 1140) = v16;
      --FIELD_U32(a1, 1144);
    }
  }
  v17 = FIELD_U32(a1, 1108);
  if ( (v17 & 0x1000) != 0 )
  {
    v18 = FIELD_U32(a1, 1196);
    v19 = v18 == 1;
    if ( v18 == 1 )
      v19 = (FIELD_U8(a1, 1200) & 4) == 0;
    if ( v19 )
    {
      FIELD_U32(a1, 1108) = v17 & 0xFFFFEFFF;
    }
    else
    {
      v20 = sub_601C5F50(a1);
      v21 = 81.0;
      if ( v20 >= 2 )
        v21 = (float)((float)(v20 - 1) * 75.0) + 81.0;
      sub_601B7504(v21);
      if ( (float)(FIELD_F32(a1, 80) - FIELD_F32(a1, 92)) != 0.0
        || (float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 100)) != 0.0 )
      {
        FIELD_U32(a1, 180) = sub_608332B0(a1 + 92, a1 + 80);
      }
    }
  }
  FIELD_U32(a1, 1140) = 0;
  FIELD_U32(a1, 1144) = 0;
  return 0;
}
