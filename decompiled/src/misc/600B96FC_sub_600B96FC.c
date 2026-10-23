/* sub_600B96FC
 * address: 0x600B96FC   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_600B96FC(int a1)
{
  _DWORD *v2; // r5
  float v3; // s0
  unsigned int v4; // r0
  float *v5; // r1
  float v6; // s8
  float result; // s0
  int v8; // r0
  float *v9; // r0
  float v10; // s2
  float v11; // s0
  signed int v12; // r0
  unsigned int v13; // r2
  unsigned int *v14; // r1
  unsigned int v15; // r3

  v2 = (_DWORD *)(a1 + 6220);
  if ( FIELD_U32(a1, 6220) )
  {
    sub_600B9930(a1);
    goto LABEL_3;
  }
  v8 = 0;
  FIELD_U32(a1, 328) = 0;
  if ( FIELD_U32(a1, 6188) < 4u )
    v8 = FIELD_U32(a1, 6188);
  v9 = *(float **)(PlayerMgr_instance + 4 * v8 + 32);
  v10 = v9[27] + v9[143];
  FIELD_F32(a1, 6192) = v10;
  v11 = v9[28] + v9[144];
  FIELD_F32(a1, 6196) = v11;
  FIELD_F32(a1, 6200) = v9[29] + v9[145];
  v12 = sub_6000F7B8(v11 - FIELD_F32(a1, 112), v10 - FIELD_F32(a1, 108));
  v13 = v12;
  FIELD_U32(a1, 6444) = v12;
  if ( v12 < 0 )
  {
    v13 = v12;
    if ( v12 != 0x80000000 )
      v13 = -v12;
  }
  v14 = (unsigned int *)(a1 + 6444);
  if ( FIELD_U32(a1, 80) )
  {
    v15 = (int)(float)((float)(2147500000.0 * 112.5) / 180.0);
    if ( v13 >= v15 )
      goto LABEL_3;
    if ( v12 >= 1 )
    {
      *v14 = v15;
      goto LABEL_3;
    }
  }
  else
  {
    v15 = (int)(float)((float)(2147500000.0 * 67.5) / 180.0);
    if ( v13 <= v15 )
      goto LABEL_3;
    if ( v12 >= 1 )
    {
      *v14 = v15;
      goto LABEL_3;
    }
  }
  *v14 = -v15;
LABEL_3:
  v3 = FIELD_F32(a1, 6432);
  if ( v3 == 0.0 )
  {
    v3 = flt_60AF1EE0[*v2 == 3];
    FIELD_F32(a1, 6432) = v3;
  }
  v4 = FIELD_U32(a1, 6444);
  FIELD_U32(a1, 164) = v4 - 0x40000000;
  v5 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v6 = (float)(v4 & 0xFFFFFF);
  FIELD_F32(a1, 120) = v3 * (float)(v5[2] + (float)((float)(v6 * v5[3]) * 0.000000059605));
  result = v3 * (float)(*v5 + (float)((float)(v6 * v5[1]) * 0.000000059605));
  FIELD_F32(a1, 124) = result;
  FIELD_U32(a1, 128) = 0;
  return result;
}
