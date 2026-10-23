/* sub_607FBEB4
 * address: 0x607FBEB4   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607FBEB4(int a1)
{
  float v2; // s8
  float v3; // s2
  float v4; // s0
  float v5; // s12
  float v6; // s6
  float v7; // s4
  float v8; // s14
  float v9; // s2
  float v10; // s6
  float v11; // s8
  float v12; // s10
  int v13; // r5
  float v14; // s2
  float v15; // s4
  float v16; // s6
  float v17; // s0
  float v18; // s0
  float result; // s0
  float v20; // [sp+0h] [bp-28h] BYREF
  float v21; // [sp+4h] [bp-24h] BYREF

  v2 = FIELD_F32(a1, 40);
  v3 = FIELD_F32(a1, 48);
  FIELD_F32(a1, 104) = v3 - v2;
  v4 = v2 + (float)((float)(v3 - v2) * 0.5);
  v5 = FIELD_F32(a1, 44);
  v6 = FIELD_F32(a1, 52);
  FIELD_F32(a1, 108) = v6 - v5;
  FIELD_F32(a1, 112) = v2;
  FIELD_F32(a1, 116) = v4;
  FIELD_F32(a1, 120) = v2 + (float)(v3 - v2);
  FIELD_F32(a1, 124) = v6;
  v7 = v6 - (float)((float)(v6 - v5) * 0.5);
  FIELD_F32(a1, 128) = v7;
  FIELD_F32(a1, 132) = v6 - (float)(v6 - v5);
  v8 = *(float *)(FIELD_U32(a1, 184) + 36);
  if ( v8 == FIELD_F32(a1, 16) )
  {
    FIELD_F32(a1, 72) = v2;
    FIELD_F32(a1, 76) = v5;
  }
  else
  {
    v9 = (float)(v8 * 398.22) * 0.5;
    v10 = (float)(v8 * 224.0) * 0.5;
    v11 = v4 - v9;
    v12 = v7 - v10;
    v6 = v10 + v7;
    v3 = v9 + v4;
    FIELD_F32(a1, 72) = v11;
    FIELD_F32(a1, 76) = v12;
  }
  FIELD_F32(a1, 80) = v3;
  FIELD_F32(a1, 84) = v6;
  v20 = v4;
  v21 = v7;
  v13 = AreaTask_intance + 1812;
  ((void (__fastcall *)(float *, int, float))loc_608023F0)(&v20, AreaTask_intance + 1812, 398.22);
  ((void (__fastcall *)(float *, int, float))loc_6080243C)(&v21, v13, 224.0);
  v14 = v20;
  v15 = v21;
  v16 = v21 + -224.0;
  FIELD_F32(a1, 88) = v20 + -398.22;
  FIELD_F32(a1, 92) = v16;
  FIELD_F32(a1, 96) = v14 + 398.22;
  FIELD_F32(a1, 100) = v15 + 224.0;
  v17 = FIELD_F32(a1, 52);
  FIELD_U32(a1, 136) = FIELD_U32(a1, 40);
  FIELD_F32(a1, 140) = -v17;
  v18 = FIELD_F32(a1, 44);
  FIELD_U32(a1, 144) = FIELD_U32(a1, 48);
  result = -v18;
  FIELD_F32(a1, 148) = result;
  return result;
}
