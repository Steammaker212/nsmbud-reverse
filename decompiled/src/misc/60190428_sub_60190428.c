/* sub_60190428
 * address: 0x60190428   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60190428(int result)
{
  int v1; // r3
  int v2; // r1
  _DWORD *v3; // r4
  int v4; // r3
  _DWORD *v5; // r4

  v1 = 16;
  v2 = dword_60C89970;
  do
  {
    *(_DWORD *)(result + v1) = 0;
    v3 = (_DWORD *)(result + v1);
    v1 += 80;
    v3[1] = 255;
    v3[2] = v2;
    v3[3] = v2;
    v3[4] = v2;
    v3[5] = v2;
    v3[6] = v2;
    v3[7] = v2;
    v3[8] = v2;
    v3[9] = v2;
    v3[10] = v2;
    v3[11] = v2;
    v3[12] = v2;
    v3[13] = v2;
    v3[14] = v2;
    v3[15] = v2;
    v3[16] = v2;
    v3[17] = v2;
    v3[18] = v2;
    v3[19] = v2;
  }
  while ( v3 + 20 != (_DWORD *)(result + 1296) );
  FIELD_U32(result, 1296) = 0;
  FIELD_U32(result, 1300) = 255;
  FIELD_U32(result, 1304) = v2;
  FIELD_U32(result, 1308) = v2;
  FIELD_U32(result, 1312) = v2;
  FIELD_U32(result, 1316) = v2;
  FIELD_U32(result, 1320) = v2;
  FIELD_U32(result, 1324) = v2;
  FIELD_U32(result, 1328) = v2;
  FIELD_U32(result, 1332) = v2;
  FIELD_U32(result, 1336) = v2;
  FIELD_U32(result, 1340) = v2;
  FIELD_U32(result, 1344) = v2;
  FIELD_U32(result, 1348) = v2;
  FIELD_U32(result, 1352) = v2;
  FIELD_U32(result, 1356) = v2;
  FIELD_U32(result, 1360) = v2;
  FIELD_U32(result, 1364) = v2;
  FIELD_U32(result, 1368) = v2;
  FIELD_U32(result, 1372) = v2;
  FIELD_U32(result, 1376) = 0;
  FIELD_U32(result, 1380) = -1;
  v4 = 0;
  FIELD_U8(result, 1384) = 0;
  FIELD_U8(result, 1385) = 0;
  FIELD_U32(result, 1388) = 0;
  do
  {
    v5 = (_DWORD *)(result + v4);
    v4 += 80;
    v5[4] = 0;
    v5[5] = 255;
    v5[6] = v2;
    v5[7] = v2;
    v5[8] = v2;
    v5[9] = v2;
    v5[10] = v2;
    v5[11] = v2;
    v5[12] = v2;
    v5[13] = v2;
    v5[14] = v2;
    v5[15] = v2;
    v5[16] = v2;
    v5[17] = v2;
    v5[18] = v2;
    v5[19] = v2;
    v5[20] = v2;
    v5[21] = v2;
    v5[22] = v2;
    v5[23] = v2;
  }
  while ( v4 != 1280 );
  FIELD_U32(result, 1296) = 0;
  FIELD_U32(result, 1300) = 255;
  FIELD_U32(result, 1304) = v2;
  FIELD_U32(result, 1308) = v2;
  FIELD_U32(result, 1312) = v2;
  FIELD_U32(result, 1316) = v2;
  FIELD_U32(result, 1320) = v2;
  FIELD_U32(result, 1324) = v2;
  FIELD_U32(result, 1328) = v2;
  FIELD_U32(result, 1332) = v2;
  FIELD_U32(result, 1336) = v2;
  FIELD_U32(result, 1340) = v2;
  FIELD_U32(result, 1344) = v2;
  FIELD_U32(result, 1348) = v2;
  FIELD_U32(result, 1352) = v2;
  FIELD_U32(result, 1356) = v2;
  FIELD_U32(result, 1360) = v2;
  FIELD_U32(result, 1364) = v2;
  FIELD_U32(result, 1368) = v2;
  FIELD_U32(result, 1372) = v2;
  return result;
}
