/* sub_603A8968
 * address: 0x603A8968   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603A8968(int a1)
{
  int Area; // r5
  int v3; // r0
  unsigned int v4; // r1
  int v5; // r2
  int v6; // r1
  _DWORD *v7; // r8
  float v8; // s4
  float v9; // s8
  float v10; // s12
  int v11; // r5
  float v12; // s22
  float v13; // s24
  float v14; // s10
  float v15; // s16
  float v16; // s18
  int v17; // r7
  int v18; // r6
  int result; // r0

  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  sub_60727908(Area, (FIELD_U32(a1, 20) >> 4) & 0x1F);
  v3 = sub_60727950(Area, (FIELD_U32(a1, 20) >> 4) & 0x1F);
  v4 = FIELD_U32(a1, 20);
  v5 = 20 * (unsigned __int8)(v4 >> 12);
  v6 = HIBYTE(v4) & 3;
  v7 = (_DWORD *)(a1 + 23568);
  v8 = FIELD_F32(a1, 23572);
  v9 = flt_60AF23D4[v6];
  v10 = flt_60AF27B4[v6];
  v11 = FIELD_U32(a1, 23596);
  v12 = v9 * v8;
  v13 = v10 * v8;
  v14 = (float)FIELD_S32(a1, 23568);
  v15 = (float)((float)*(__int16 *)(v3 + v5) + (float)(v8 * 0.5)) + (float)((float)(v9 * v8) * v14);
  v16 = (float)((float)-(float)*(__int16 *)(v3 + v5 + 2) - (float)(v8 * 0.5)) + (float)((float)(v10 * v8) * v14);
  sub_603A5930(a1 + 6304, a1, v11, v15, v16, 116.0);
  if ( FIELD_S32(a1, 23568) >= 1 )
  {
    v17 = 0;
    v18 = a1 + 7888;
    do
    {
      sub_603A5930(v18, a1, v11, v15, v16, 100.0);
      v16 = v16 - v13;
      v15 = v15 - v12;
      ++v17;
      v18 += 784;
    }
    while ( v17 < *v7 );
  }
  sub_603A5930(a1 + 7096, a1, v11, v15, v16, 116.0);
  FIELD_U32(a1, 7028) = *v7 + 1;
  FIELD_U32(a1, 7820) = 1;
  result = FIELD_U16(a1, 26) & 0xF;
  FIELD_U32(a1, 7088) = result;
  FIELD_U32(a1, 7880) = result;
  return result;
}
