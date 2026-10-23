/* sub_60453764
 * address: 0x60453764   size: 804   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60453764(int a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // r1
  int v5; // r0
  int v6; // r5
  int v7; // r2
  bool v8; // zf
  int v9; // r2
  int v10; // r0
  unsigned int v11; // r1
  int result; // r0
  float v13; // s2
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r2
  unsigned int v18; // r0
  unsigned int v19; // r0
  _BYTE v20[8]; // [sp+8h] [bp-48h] BYREF
  int v21; // [sp+10h] [bp-40h]
  int v22; // [sp+28h] [bp-28h]
  int v23; // [sp+2Ch] [bp-24h]

  v2 = dword_60C99DD4;
  v3 = FIELD_U32(a1, 1316);
  if ( FIELD_U32(dword_60C99DD4, 764) == 3 )
  {
    if ( v3 == 2 )
    {
      v5 = FIELD_U32(a1, 1388);
      v6 = 0;
      v7 = FIELD_U16(v5, 196);
      v8 = v7 == 0xFFFF;
      if ( v7 != 0xFFFF )
        v8 = FIELD_U16(v5, 198) == 0xFFFF;
      if ( !v8 )
      {
        FIELD_U32(a1, 1368) = v7;
        v6 = 1;
        FIELD_U32(a1, 1372) = FIELD_U16(v5, 198);
      }
      FIELD_F32(a1, 1376) = (float)FIELD_S16(v5, 192) / 32768.0;
      FIELD_F32(a1, 1380) = (float)FIELD_S16(v5, 194) / 32768.0;
LABEL_32:
      v17 = FIELD_U32(a1, 1364);
      v18 = v17 & 0xFFFFFFFE;
      if ( (v17 & 2) == 0 )
        v18 = v17 | 1;
      if ( !v6 )
        v18 = v17 & 0xFFFFFFFE;
      FIELD_U32(a1, 1364) = v18;
      if ( v6 == 1 )
      {
        v19 = v18 | 2;
        FIELD_U32(a1, 1364) = v19;
      }
      else
      {
        v19 = v18 & 0xFFFFFFFD;
        FIELD_U32(a1, 1364) = v19;
        if ( (v17 & 2) != 0 )
        {
          result = v19 | 4;
          goto LABEL_41;
        }
      }
      result = v19 & 0xFFFFFFFB;
LABEL_41:
      FIELD_U32(a1, 1364) = result;
      if ( (result & 1) != 0 )
      {
        FIELD_U8(a1, 1412) = 1;
        return 1;
      }
      return result;
    }
    if ( FIELD_S8(a1, 1404) < 0 || FIELD_U8(a1, 1406) )
    {
      v4 = (FIELD_U8(a1, 1364) >> 1) & 1;
    }
    else
    {
      void_nn__hid__GetTouchScreenState(v20);
      v4 = v21 > 0;
      v2 = dword_60C99DD4;
    }
    v6 = 0;
    if ( !FIELD_U32(v2, 1376) )
    {
      if ( FIELD_U32(v2, 764) == 3 )
      {
        if ( v4 != 1 )
          goto LABEL_30;
      }
      else
      {
        v6 = 0;
        if ( ((unsigned __int8)v4 & (FIELD_U8(LevelInfo_instance, 17) == 40)) == 0 )
          goto LABEL_30;
      }
      void_nn__hid__GetTouchScreenState(v20);
      if ( v21 > 0 )
      {
        v13 = (float)((float)v23 / 720.0) * 720.0;
        FIELD_U32(a1, 1368) = (int)(float)((float)((float)v22 / 1280.0) * 1280.0);
        FIELD_U32(a1, 1372) = (int)v13;
      }
      v6 = 1;
    }
LABEL_30:
    v14 = *(_DWORD *)(FIELD_U32(dword_60CCF448, 220) + 16);
    v15 = (int)(float)(FIELD_F32(v14, 284) * 32767.0);
    v16 = (int)(float)(FIELD_F32(v14, 288) * 32767.0);
    FIELD_F32(a1, 1376) = (float)v15 / 32768.0;
    FIELD_F32(a1, 1380) = (float)v16 / 32768.0;
    if ( FIELD_U32(a1, 1316) == 1 )
      sub_6045648C(FIELD_U32(a1, 1388), v15, v16, v6, FIELD_U32(a1, 1368), FIELD_U32(a1, 1372));
    goto LABEL_32;
  }
  if ( v3 == 2 )
  {
    v9 = FIELD_U32(a1, 1388);
    if ( FIELD_U16(v9, 196) != 0xFFFF && FIELD_U16(v9, 198) != 0xFFFF )
      FIELD_U8(dword_60C99DD4, 777) = 1;
  }
  else if ( v3 == 1 )
  {
    sub_6045648C(FIELD_U32(a1, 1388), 0, 0, 0, 0, 0);
  }
  FIELD_U32(a1, 1380) = 0;
  FIELD_U32(a1, 1376) = 0;
  FIELD_U32(a1, 1372) = 0;
  FIELD_U32(a1, 1368) = 0;
  v10 = FIELD_U32(a1, 1364);
  v11 = v10 & 0xFFFFFFFC;
  if ( (v10 & 2) != 0 )
    result = v10 & 0xFFFFFFF8 | 4;
  else
    result = v10 & 0xFFFFFFF8;
  FIELD_U32(a1, 1364) = v11;
  FIELD_U32(a1, 1364) = result;
  return result;
}
