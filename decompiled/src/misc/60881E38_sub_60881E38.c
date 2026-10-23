/* sub_60881E38
 * address: 0x60881E38   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60881E38(_DWORD *a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r0
  _DWORD *v6; // r1
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int result; // r0

  v4 = *(unsigned __int8 *)(a2[34] + 1874);
  if ( !*(_BYTE *)(a2[34] + 1874) )
  {
    a1[4] += a2[11];
    ++a1[7];
    v4 = *(unsigned __int8 *)(a2[34] + 1874);
  }
  if ( v4 == 1 )
  {
    a1[5] += a2[10];
    ++a1[8];
    v4 = *(unsigned __int8 *)(a2[34] + 1874);
  }
  if ( v4 == 2 )
  {
    a1[6] += a2[10];
    ++a1[9];
  }
  ++a1[1];
  v5 = *(_DWORD *)(a2[87] + 576);
  switch ( v5 )
  {
    case 3:
      v7 = sub_6088E6B8(a2);
      v6 = a1 + 11;
      goto LABEL_13;
    case 2:
      v7 = sub_60889A38(a2);
      v6 = a1 + 10;
      goto LABEL_13;
    case 1:
      v6 = a1 + 12;
      v7 = 1;
LABEL_13:
      *v6 += v7;
      break;
  }
  a1[3] += a2[3];
  a1[13] += a2[367];
  v8 = a1[14] + a2[321];
  a1[14] = v8;
  v9 = a2[347] + v8;
  a1[14] = v9;
  v10 = v9 + a2[326];
  a1[14] = v10;
  v11 = v10 + a2[330];
  a1[14] = v11;
  v12 = v11 + a2[334];
  a1[14] = v12;
  v13 = v12 + a2[338];
  a1[14] = v13;
  result = v13 + a2[342];
  a1[14] = result;
  return result;
}
