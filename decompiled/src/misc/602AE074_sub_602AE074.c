/* sub_602AE074
 * address: 0x602AE074   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_602AE074(unsigned int *a1)
{
  float v2; // s0
  float v3; // r7
  float v4; // r6
  float v5; // r5
  float v6; // s20
  float v7; // s18
  float v8; // s16
  int v9; // r0
  float *result; // r0

  v2 = (*(float (__fastcall **)(unsigned int *))(*a1 + 8))(a1);
  v3 = 1.0;
  v4 = 1.0;
  v5 = 1.0;
  v6 = *(float *)&dword_60C90BB0;
  v7 = *(float *)&dword_60C90BB4;
  v8 = *(float *)&dword_60C90BB8;
  if ( v2 < 1.0 )
  {
    v8 = v2 * *(float *)&dword_60C90BB8;
    v7 = v2 * *(float *)&dword_60C90BB4;
    v6 = v2 * *(float *)&dword_60C90BB0;
    v5 = v2 * 1.0;
    v4 = v2 * 1.0;
    v3 = v2 * 1.0;
  }
  v9 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1]);
  FIELD_F32(v9, 144) = v6;
  FIELD_F32(v9, 148) = v7;
  FIELD_F32(v9, 152) = v8;
  result = *(float **)(v9 + 6800);
  result[4] = v3;
  result[5] = v4;
  result[6] = v5;
  result[115] = v3;
  result[116] = v4;
  result[117] = v5;
  result[226] = v3;
  result[227] = v4;
  result[228] = v5;
  result[337] = v3;
  result[338] = v4;
  result[339] = v5;
  return result;
}
