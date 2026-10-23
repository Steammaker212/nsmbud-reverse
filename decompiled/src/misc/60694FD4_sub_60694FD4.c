/* sub_60694FD4
 * address: 0x60694FD4   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60694FD4(int result)
{
  int v1; // r2
  int v2; // r1
  float v3; // s6
  int v4; // lr
  float v5; // s10
  float v6; // s8
  int v7; // r2
  int v8; // s2
  unsigned int v9; // s4
  float *v10; // r4
  float v11; // s2
  float v12; // s4
  float *v13; // r2
  float v14; // s12

  v1 = FIELD_U32(result, 996);
  v2 = 0;
  v3 = 1073700000.0;
  FIELD_U32(result, 644) = 0;
  FIELD_U32(result, 648) = 0;
  FIELD_U32(result, 652) = 0;
  v4 = dword_60CB9270;
  v5 = *(float *)&dword_60CB9270;
  v6 = (float)(v1 - 0x40000000) * 0.125;
  do
  {
    v7 = result + 8 * v2++;
    FIELD_U32(v7, 920) = v4;
    v8 = (int)v3;
    v9 = (int)v3;
    v3 = v6 + v3;
    FIELD_U32(v7, 924) = v8;
    v10 = (float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0));
    v11 = FIELD_F32(result, 644)
        + (float)(v5 * (float)(v10[2] + (float)((float)((float)(v9 & 0xFFFFFF) * v10[3]) * 0.000000059605)));
    FIELD_F32(result, 644) = v11;
    v12 = FIELD_F32(result, 648)
        + (float)(v5 * (float)(*v10 + (float)((float)((float)(v9 & 0xFFFFFF) * v10[1]) * 0.000000059605)));
    FIELD_F32(result, 648) = v12;
  }
  while ( v2 != 8 );
  FIELD_U32(result, 984) = 1098907648;
  FIELD_U32(result, 988) = (int)v3;
  FIELD_F32(result, 656) = v11;
  FIELD_F32(result, 660) = v12;
  v13 = (float *)((char *)sinLutTable + (((unsigned int)(int)v3 >> 20) & 0xFF0));
  v14 = (float)((int)v3 & 0xFFFFFF);
  FIELD_F32(result, 656) = v11 + (float)((float)(v13[2] + (float)((float)(v14 * v13[3]) * 0.000000059605)) * 32.0);
  FIELD_F32(result, 660) = v12 + (float)((float)(*v13 + (float)((float)(v14 * v13[1]) * 0.000000059605)) * 32.0);
  FIELD_F32(result, 644) = v11 + (float)((float)(v13[2] + (float)((float)(v14 * v13[3]) * 0.000000059605)) * 8.0);
  FIELD_F32(result, 648) = v12 + (float)((float)(*v13 + (float)((float)(v14 * v13[1]) * 0.000000059605)) * 8.0);
  return result;
}
