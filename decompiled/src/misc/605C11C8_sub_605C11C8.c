/* sub_605C11C8
 * address: 0x605C11C8   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C11C8(int a1, char a2, char a3, int a4, float a5, float a6, float a7, float a8)
{
  int v9; // r2
  float v10; // s4
  float v11; // s0

  FIELD_U32(a1, 14988) = 0;
  FIELD_U8(a1, 160) = a3;
  FIELD_F32(a1, 8) = a5;
  FIELD_F32(a1, 12) = a6;
  FIELD_F32(a1, 16) = a7;
  FIELD_F32(a1, 92) = a8;
  FIELD_F32(a1, 96) = a8 * 0.25;
  v9 = (int)(float)(a8 * 0.25);
  if ( (float)v9 != (float)(a8 * 0.25) )
    --v9;
  if ( (float)(a8 * 0.25) >= 0.0 )
    v9 = (int)(float)(a8 * 0.25);
  if ( v9 >= 1440 )
    v9 = 1440;
  FIELD_U32(a1, 100) = v9;
  v10 = a8 + (float)((float)v9 * -4.0);
  FIELD_F32(a1, 104) = v10;
  if ( v10 == 0.0 )
    v11 = 1.0;
  else
    v11 = a8 / (float)((float)v9 * 8.0);
  FIELD_F32(a1, 108) = v11;
  FIELD_U8(a1, 161) = a2;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 120) = -4;
  FIELD_U32(a1, 124) = 2;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 156) = 1065353216;
  FIELD_U32(a1, 136) = (int)(float)((float)(2147500000.0 * -10.9) / 180.0);
  FIELD_U32(a1, 140) = (int)(float)((float)(2147500000.0 * 10.4) / 180.0);
  FIELD_U32(a1, 144) = (int)(float)((float)(2147500000.0 * 77.0) / 180.0);
  FIELD_U32(a1, 148) = (int)(float)((float)(2147500000.0 * 49.4) / 180.0);
  sub_605C134C(a1, a4);
  *(_DWORD *)(FIELD_U32(a1, 4) + 23760) = FIELD_U32(a1, 100);
  FIELD_U16(a1, 15008) = 0;
  FIELD_U32(a1, 15004) = 0;
  FIELD_U32(a1, 15000) = 0;
  return 15000;
}
