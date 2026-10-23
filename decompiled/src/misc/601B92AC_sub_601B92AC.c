/* sub_601B92AC
 * address: 0x601B92AC   size: 740   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B92AC(int a1)
{
  int v2; // r1
  int v3; // r0
  int v4; // r1
  int v5; // r2
  bool v6; // vf
  int v7; // r1
  int v8; // r1
  int result; // r0
  int v10; // r5
  float *v11; // r0
  float v12; // s0
  float v13; // s2
  float v14; // s2
  float v15; // s0
  float v16; // s16
  float v17; // s18
  float v18; // s0
  float v19; // s0
  float v20; // s20
  float v21; // s22
  int v22; // r4
  float v23; // s0
  int v24; // [sp+4h] [bp-3Ch] BYREF
  int v25; // [sp+8h] [bp-38h]
  int v26; // [sp+Ch] [bp-34h]

  v2 = FIELD_U32(a1, 1144);
  if ( !v2 )
    goto LABEL_14;
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
  if ( (FIELD_U8(v3, 52) & 1) == 0
    || *(_DWORD *)v3 != FIELD_U32(a1, 1160)
    || FIELD_U32(v3, 4) != FIELD_U32(a1, 1164)
    || FIELD_U32(v3, 8) != FIELD_U32(a1, 1168)
    || FIELD_U32(v3, 12) != FIELD_U32(a1, 1148)
    || FIELD_U32(v3, 16) != FIELD_U32(a1, 1152)
    || FIELD_U32(v3, 20) != FIELD_U32(a1, 1156)
    || (v8 = sub_601C4110(a1, v3 + 24, FIELD_U32(a1, 1096)), result = 5, !v8) )
  {
LABEL_14:
    v10 = sub_601CF9C0(dword_60C8AEF0);
    if ( !sub_601DA5F0(a1 + 1160) )
      goto LABEL_21;
    v11 = (float *)sub_601E0040(a1 + 1160);
    v12 = *v11;
    v13 = v11[2];
    result = 0;
    if ( (float)((float)((float)(FIELD_F32(a1, 88) - v13) * (float)(FIELD_F32(a1, 88) - v13))
               + (float)((float)(FIELD_F32(a1, 80) - v12) * (float)(FIELD_F32(a1, 80) - v12))) > 22500.0 )
      return result;
    v24 = -1;
    v25 = -1;
    v26 = -1;
    sub_6019EC34(&v24, (_DWORD *)(v10 + 1056));
    if ( v24 == FIELD_U32(a1, 1160)
      && v25 == FIELD_U32(a1, 1164)
      && v26 == FIELD_U32(a1, 1168)
      && FIELD_F32(v10, 84) > FIELD_F32(a1, 84) )
    {
      return 3;
    }
    else
    {
LABEL_21:
      if ( sub_601D9E28(a1 + 1160) == 1 )
      {
        result = 6;
        v14 = FIELD_F32(a1, 88) - FIELD_F32(a1, 1192);
        v15 = FIELD_F32(a1, 80) - FIELD_F32(a1, 1184);
        if ( (float)((float)(v14 * v14) + (float)(v15 * v15)) > 900.0 )
          return 0;
      }
      else
      {
        result = 0;
        if ( FIELD_S32(a1, 1144) <= 0 )
        {
          v16 = FIELD_F32(v10, 80);
          v17 = FIELD_F32(v10, 88);
          v18 = FIELD_F32(v10, 84) - FIELD_F32(v10, 96);
          v19 = (float)((float)(v18 * v18)
                      + (float)((float)(v16 - FIELD_F32(v10, 92)) * (float)(v16 - FIELD_F32(v10, 92))))
              + (float)((float)(v17 - FIELD_F32(v10, 100)) * (float)(v17 - FIELD_F32(v10, 100)));
          if ( v19 > 0.00000011921 || v19 < -0.00000011921 )
          {
            return 0;
          }
          else
          {
            result = 2;
            if ( (FIELD_U8(v10, 1121) & 0x20) == 0 )
            {
              v20 = FIELD_F32(a1, 80);
              v21 = FIELD_F32(a1, 88);
              v22 = sub_601C5EEC(a1);
              v23 = flt_60AFCF9C[v22 + 9 + dword_60AFC128[sub_601CFE3C(dword_60C8AEF0) - 1]];
              return (float)((float)((float)(v21 - v17) * (float)(v21 - v17))
                           + (float)((float)(v20 - v16) * (float)(v20 - v16))) < (float)((float)(v23 + v23)
                                                                                       * (float)(v23 + v23));
            }
          }
        }
      }
    }
  }
  return result;
}
