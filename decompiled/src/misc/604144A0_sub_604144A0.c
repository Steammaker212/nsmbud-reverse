/* sub_604144A0
 * address: 0x604144A0   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_ListNode *__fastcall sub_604144A0(sead_ListNode *a1, int a2, int a3, float *a4, unsigned int a5)
{
  sead_ListNode *result; // r0
  int v7; // r2
  float v8; // s10
  float v9; // s6
  float v10; // s8
  float v11; // s12
  float v12; // s0
  float v13; // s14
  float v14; // s3
  float v15; // s5
  float v16; // s7
  float v17; // s8

  result = sub_60414164(a1, a2, **((_DWORD ***)&a1[28702].FIELD_U32(previous, 0x0) + a3));
  if ( result )
  {
    v7 = (a5 >> 20) & 0xFF0;
    v8 = (float)(-0.00030118 * 0.0) + 1.0;
    v9 = (float)(0.024541 * 0.0) + 0.0;
    v10 = *(float *)&FIELD_U32(result, 0x4);
    v11 = *(float *)&result[1].previous;
    v12 = (float)(a5 & 0xFFFFFF) * 0.000000059605;
    v13 = *(float *)((char *)sinLutTable + v7) + (float)(v12 * *(float *)((char *)&sinLutTable[1] + v7));
    v14 = *(float *)((char *)&sinLutTable[2] + v7) + (float)(v12 * *(float *)((char *)&sinLutTable[3] + v7));
    v15 = (float)((float)(v10 * (float)((float)((float)(v9 * v9) * v14) - (float)(v8 * v13)))
                + (float)(*(float *)&FIELD_U32(result, 0x0) * (float)(v8 * v14)))
        + (float)(v11 * (float)((float)(v9 * (float)(v8 * v14)) + (float)(v9 * v13)));
    v16 = (float)((float)(v10 * (float)((float)(v8 * v14) + (float)((float)(v9 * v9) * v13)))
                + (float)(*(float *)&FIELD_U32(result, 0x0) * (float)(v8 * v13)))
        + (float)(v11 * (float)((float)(v9 * (float)(v8 * v13)) - (float)(v9 * v14)));
    v17 = (float)((float)((float)(v9 * v8) * v10) - (float)(v9 * *(float *)&FIELD_U32(result, 0x0)))
        + (float)((float)(v8 * v8) * v11);
    *(float *)&FIELD_U32(result, 0x0) = v15;
    *(float *)&FIELD_U32(result, 0x4) = v16;
    *(float *)&result[1].previous = v17;
    *(float *)&FIELD_U32(result, 0x0) = *a4 + v15;
    *(float *)&FIELD_U32(result, 0x4) = a4[1] + v16;
    result[6].previous = (sead_ListNode *)((char *)result[6].previous + a5);
  }
  return result;
}
