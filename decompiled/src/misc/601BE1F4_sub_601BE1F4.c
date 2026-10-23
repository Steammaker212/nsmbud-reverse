/* sub_601BE1F4
 * address: 0x601BE1F4   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601BE1F4(int a1)
{
  float v2; // s2
  int v3; // r5
  float v4; // s2
  float v5; // s0
  float v6; // s16
  StateMethodExecuter *result; // r0
  float v8; // s22
  float v9; // s18
  float v10; // s0
  float v11; // s0
  int v12; // r3
  int v13; // r0
  _DWORD *v14; // r0
  int v15; // r2
  int v16; // r3
  bool v17; // vf
  int v18; // r2
  _DWORD *v19; // r5
  int v20; // r0
  int v21; // r1
  int v22; // r1

  v2 = FIELD_F32(a1, 292);
  v3 = dword_60C8AEF0;
  FIELD_F32(a1, 128) = v2 + FIELD_F32(a1, 128);
  FIELD_F32(a1, 132) = v2 + FIELD_F32(a1, 132);
  FIELD_F32(a1, 136) = v2 + FIELD_F32(a1, 136);
  v4 = FIELD_F32(a1, 952);
  v5 = FIELD_F32(a1, 84);
  if ( v5 > (float)(v4 - 50.0) )
    FIELD_U32(a1, 1108) |= 0x40000u;
  v6 = v4 - v5;
  result = (StateMethodExecuter *)&unk_60AFC2B0;
  v8 = FIELD_F32(a1, 948) - FIELD_F32(a1, 80);
  v9 = FIELD_F32(a1, 956) - FIELD_F32(a1, 88);
  v10 = sqrtf((float)((float)(v6 * v6) + (float)(v8 * v8)) + (float)(v9 * v9));
  if ( v10 <= 5.0 )
  {
    v12 = FIELD_U32(a1, 952);
    v13 = FIELD_U32(a1, 956);
    FIELD_U32(a1, 80) = FIELD_U32(a1, 948);
    FIELD_U32(a1, 84) = v12;
    FIELD_U32(a1, 88) = v13;
    FIELD_U8(a1, 553) = 0;
    v14 = (_DWORD *)sub_601CF9C0(v3);
    FIELD_U32(a1, 128) = v14[32];
    FIELD_U32(a1, 132) = v14[33];
    FIELD_U32(a1, 136) = v14[34];
    result = *(StateMethodExecuter **)(a1 + 288);
    FIELD_U32(a1, 288) = (char *)result - 1;
    if ( (int)result <= 0 )
    {
      if ( FIELD_S32(a1, 1144) >= 1 )
      {
        v15 = FIELD_U32(a1, 1136);
        v16 = FIELD_U32(a1, 1140);
        v17 = __OFSUB__(v16, v15);
        v18 = v16 - v15;
        if ( v18 < 0 != v17 )
          v18 = FIELD_U32(a1, 1140);
        v19 = (_DWORD *)(FIELD_U32(a1, 1132) + 60 * v18);
        sub_6019EC34((_DWORD *)(a1 + 1148), v19);
        sub_6019EC34((_DWORD *)(a1 + 1160), v19 + 3);
        FIELD_U32(a1, 1172) = v19[6];
        FIELD_U32(a1, 1176) = v19[7];
        FIELD_U32(a1, 1180) = v19[8];
        FIELD_U32(a1, 1184) = v19[9];
        FIELD_U32(a1, 1188) = v19[10];
        FIELD_U32(a1, 1192) = v19[11];
        v20 = v19[12];
        v21 = v19[13];
        FIELD_U32(a1, 1204) = v19[14];
        FIELD_U32(a1, 1200) = v21;
        FIELD_U32(a1, 1196) = v20;
        v22 = FIELD_U32(a1, 1140) + 1;
        if ( v22 >= FIELD_U32(a1, 1136) )
          v22 = 0;
        FIELD_U32(a1, 1140) = v22;
        --FIELD_U32(a1, 1144);
      }
      return sub_601B69F4(a1, (StateBase *)&dword_60C8AC40);
    }
  }
  else
  {
    v11 = 1.0 / v10;
    FIELD_F32(a1, 80) = FIELD_F32(a1, 80) + (float)(5.0 * (float)(v8 * v11));
    FIELD_F32(a1, 84) = FIELD_F32(a1, 84) + (float)(5.0 * (float)(v6 * v11));
    FIELD_F32(a1, 88) = FIELD_F32(a1, 88) + (float)(5.0 * (float)(v9 * v11));
  }
  return result;
}
