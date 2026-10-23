/* sub_60428FBC
 * address: 0x60428FBC   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60428FBC(_DWORD *a1, int a2)
{
  int v4; // r0
  int result; // r0
  _DWORD v6[28]; // [sp+0h] [bp-70h] BYREF

  v6[0] = a1[3];
  v6[5] = 8;
  v6[6] = 0;
  v6[7] = -1;
  v6[8] = 0;
  v6[9] = 8;
  v6[10] = 0;
  v6[11] = -1;
  v6[12] = 0;
  v6[13] = 8;
  v6[14] = 0;
  v6[15] = -1;
  v6[16] = 0;
  v6[17] = 8;
  v6[18] = 0;
  v6[19] = -1;
  v6[20] = 0;
  v6[21] = 8;
  v6[22] = 0;
  v6[23] = -1;
  memset(&v6[2], 0, 12);
  v6[1] = 1;
  sub_6086BF0C(v6);
  v4 = sub_6042A180(a2, a1[191], 8);
  sub_6086C084(a1 + 144, v6, v4, a1[191]);
  result = sub_6086C2D8(a1 + 144, FIELD_U32(dword_60CCFC8C, 24));
  a1[192] = result;
  return result;
}
