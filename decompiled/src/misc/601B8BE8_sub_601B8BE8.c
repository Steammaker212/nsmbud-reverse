/* sub_601B8BE8
 * address: 0x601B8BE8   size: 1164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601B8BE8(int a1)
{
  float v2; // s16
  float v3; // s18
  int v4; // r5
  int v5; // r0
  int v6; // r1
  float v7; // s16
  int v8; // s0
  int v9; // r5
  int v10; // r0
  int v11; // r1
  float v12; // s0
  float v13; // s16
  int v14; // r1
  int v15; // s0
  float v16; // s2
  int v17; // r1
  float v18; // s0
  int v19; // r1
  int v20; // r1
  float v21; // s0
  float v22; // s2
  float v23; // s0
  float result; // s0

  v2 = ((float (*)(void))loc_601BC2F8)();
  sub_601CF9C0(dword_60C8AEF0);
  v3 = FIELD_F32(a1, 200);
  if ( sub_601D9E28(a1 + 1160) == 1 )
  {
    v4 = sub_601C5EEC(a1);
    v5 = sub_601CF9C0(dword_60C8AEF0);
    v6 = FIELD_U32(a1, 1096);
    v7 = 1.0 - (float)((float)(1.0 - 0.85) * (float)v4);
    if ( (unsigned int)(v6 - 2) >= 4 )
    {
      if ( v6 == 1 )
      {
        FIELD_F32(a1, 200) = v7 * (float)(8.0 * sub_601C6030(a1));
        FIELD_U32(a1, 204) = 0;
        v8 = FIELD_U32(a1, 120);
      }
      else
      {
        if ( v6 )
        {
LABEL_23:
          FIELD_U32(a1, 1072) = 3;
          goto LABEL_48;
        }
        v16 = v7 * (float)(8.0 * sub_601C6030(a1));
        v8 = 0;
        FIELD_F32(a1, 200) = v16;
        FIELD_U32(a1, 204) = 0;
      }
    }
    else
    {
      FIELD_F32(a1, 200) = v7 * 8.0;
      FIELD_U32(a1, 204) = FIELD_U32(v5, 204);
      FIELD_U32(a1, 120) = 0;
      v8 = FIELD_U32(v5, 208);
    }
    FIELD_U32(a1, 208) = v8;
    goto LABEL_23;
  }
  if ( (FIELD_U8(a1, 1108) & 8) == 0 )
  {
    v9 = sub_601C5EEC(a1);
    if ( v2 < flt_60AFCF9C[v9 + 9 + dword_60AFC128[sub_601CFE3C(dword_60C8AEF0) - 1]] )
    {
      v10 = sub_601CF9C0(dword_60C8AEF0);
      v11 = FIELD_U32(a1, 1096);
      if ( (unsigned int)(v11 - 2) < 4 )
      {
        v12 = 8.0 * 0.1;
LABEL_10:
        FIELD_F32(a1, 200) = v12;
LABEL_11:
        FIELD_U32(a1, 204) = FIELD_U32(v10, 204);
        FIELD_U32(a1, 120) = 0;
        v15 = FIELD_U32(v10, 208);
        goto LABEL_47;
      }
      if ( v11 != 1 )
      {
        if ( v11 )
          goto LABEL_48;
        v18 = (float)(8.0 * sub_601C6030(a1)) * 0.1;
LABEL_30:
        FIELD_F32(a1, 200) = v18;
        FIELD_U32(a1, 204) = 0;
        FIELD_U32(a1, 208) = 0;
        goto LABEL_48;
      }
      v21 = (float)(8.0 * sub_601C6030(a1)) * 0.1;
LABEL_46:
      FIELD_F32(a1, 200) = v21;
      FIELD_U32(a1, 204) = 0;
      v15 = FIELD_U32(a1, 120);
      goto LABEL_47;
    }
    if ( v2 < (float)(110.0 * 1.0) )
    {
      v13 = 0.85;
      v10 = sub_601CF9C0(dword_60C8AEF0);
      v17 = FIELD_U32(a1, 1096);
      if ( (unsigned int)(v17 - 2) < 4 )
        goto LABEL_9;
      if ( v17 != 1 )
      {
        if ( v17 )
          goto LABEL_48;
        goto LABEL_20;
      }
      goto LABEL_44;
    }
    if ( v2 <= (float)(110.0 * 1.2) )
    {
      v10 = sub_601CF9C0(dword_60C8AEF0);
      v20 = FIELD_U32(a1, 1096);
      if ( (unsigned int)(v20 - 2) < 4 )
      {
        FIELD_U32(a1, 200) = 1090519040;
        goto LABEL_11;
      }
      if ( v20 != 1 )
      {
        if ( v20 )
          goto LABEL_48;
        v22 = 8.0 * sub_601C6030(a1);
        v15 = 0;
        FIELD_F32(a1, 200) = v22;
        FIELD_U32(a1, 204) = 0;
LABEL_47:
        FIELD_U32(a1, 208) = v15;
        goto LABEL_48;
      }
      v13 = 8.0;
      v23 = sub_601C6030(a1);
      goto LABEL_45;
    }
    v13 = 1.2;
    v10 = sub_601CF9C0(dword_60C8AEF0);
    v19 = FIELD_U32(a1, 1096);
    if ( (unsigned int)(v19 - 2) < 4 )
      goto LABEL_9;
    if ( v19 != 1 )
    {
      if ( v19 )
        goto LABEL_48;
      goto LABEL_20;
    }
LABEL_44:
    v23 = 8.0 * sub_601C6030(a1);
LABEL_45:
    v21 = v13 * v23;
    goto LABEL_46;
  }
  v13 = 1.2;
  v10 = sub_601CF9C0(dword_60C8AEF0);
  v14 = FIELD_U32(a1, 1096);
  if ( (unsigned int)(v14 - 2) < 4 )
  {
LABEL_9:
    v12 = v13 * 8.0;
    goto LABEL_10;
  }
  if ( v14 == 1 )
    goto LABEL_44;
  if ( !v14 )
  {
LABEL_20:
    v18 = v13 * (float)(8.0 * sub_601C6030(a1));
    goto LABEL_30;
  }
LABEL_48:
  result = (float)(FIELD_F32(a1, 200) * 0.1) + (float)(v3 * 0.9);
  FIELD_F32(a1, 200) = result;
  return result;
}
