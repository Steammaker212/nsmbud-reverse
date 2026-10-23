/* sub_60186EA8
 * address: 0x60186EA8   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60186EA8(int a1)
{
  int v2; // r7
  int v3; // r6
  _BYTE *v4; // r4
  unsigned int result; // r0
  _DWORD v6[12]; // [sp+0h] [bp-30h] BYREF

  v2 = 9;
  memset(v6, 255, 12);
  v6[3] = 0;
  v3 = a1;
  v6[4] = 6;
  v6[5] = -1;
  do
  {
    sub_6019EC50(v3, v6);
    sub_6019EC50(v3 + 24, v6);
    sub_6019EC50(v3 + 48, v6);
    sub_6019EC50(v3 + 72, v6);
    sub_6019EC50(v3 + 96, v6);
    v3 += 120;
    --v2;
  }
  while ( v2 );
  FIELD_U8(a1, 1080) = 0;
  v4 = (_BYTE *)(a1 + 1080);
  v4[12] = 0;
  v4 += 12;
  *(v4 - 4) = 0;
  v4 -= 4;
  *(v4 - 4) = 0;
  v4 -= 4;
  v4[11] = 0;
  v4[10] = 0;
  v4[9] = 0;
  v4[7] = 0;
  v4[6] = 0;
  v4[5] = 0;
  v4[3] = 0;
  v4[2] = 0;
  v4[1] = 0;
  *(v4 - 1) = 0;
  *(v4 - 2) = 0;
  *(v4 - 3) = 0;
  v4[12] = 0;
  *(v4 - 3) = 3;
  *(v4 - 1) = 3;
  v4[1] = 3;
  v4[3] = 3;
  v4[5] = 3;
  v4[7] = 3;
  v4[9] = 3;
  v4[11] = 3;
  v4[13] = 3;
  result = sead__Random__getU32((void *)sead__GlobalRandom__sInstance) >> 30;
  v4[14] = result;
  return result;
}
