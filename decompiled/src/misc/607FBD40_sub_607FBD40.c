/* sub_607FBD40
 * address: 0x607FBD40   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607FBD40(int a1)
{
  _DWORD *v2; // r4
  int v3; // r3
  int v4; // r5
  int v5; // r1
  int v6; // r2

  v2 = (_DWORD *)dword_60CC6484;
  if ( !dword_60CC6484 )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x14Cu, a1, 4);
    sead__IDisposer__ctor(v2, a1, 3u);
    *v2 = off_60C27D8C;
    dword_60CC6480 = (int)v2;
    v2[4] = 1065353216;
    v2[5] = 1065353216;
    v2[6] = 0;
    v2[8] = 1137122418;
    v2[7] = -1017118720;
    v2[9] = 0;
    v2[10] = 0;
    v2[12] = 1137122418;
    v2[11] = -1017118720;
    v2[13] = 0;
    v2[17] = 0;
    v3 = v2[10];
    v4 = v2[11];
    v2[16] = v2[12];
    v2[15] = v4;
    v2[14] = v3;
    v2[18] = 0;
    v2[20] = 1137122418;
    v2[19] = -1017118720;
    v2[21] = 0;
    v2[22] = 0;
    v2[24] = 1137122418;
    v2[23] = -1017118720;
    v2[25] = 0;
    v2[26] = 1137122418;
    v2[27] = 1130364928;
    v2[28] = 0;
    v2[29] = 1128733810;
    v2[30] = 1137122418;
    v2[31] = 0;
    v2[32] = -1025507328;
    v2[33] = -1017118720;
    v2[34] = 0;
    v2[35] = 0;
    v2[36] = 1137122418;
    v2[37] = 1130364928;
    v2[41] = 1130364928;
    v5 = v2[35];
    v6 = v2[36];
    v2[38] = v2[34];
    v2[39] = v5;
    v2[40] = v6;
    memset(v2 + 42, 0, 36);
    sub_607FF264(v2 + 51, v2);
    sub_607FE648(v2 + 62, v2);
    dword_60CC6484 = (int)v2;
  }
  return v2;
}
