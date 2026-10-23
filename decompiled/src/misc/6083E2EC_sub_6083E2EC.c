/* sub_6083E2EC
 * address: 0x6083E2EC   size: 8   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083E2EC(unsigned __int8 **a1, int a2, int a3)
{
  unsigned __int8 *v3; // r3
  int v4; // r0
  int v5; // r1
  int result; // r0
  int v7; // r2
  unsigned __int8 *v8; // r1

  v3 = *a1;
  v4 = a3 - 9;
  if ( a3 < 9 )
    v4 = a3;
  switch ( v4 )
  {
    case 0:
      v5 = 18624;
      goto LABEL_6;
    case 1:
      v5 = 18912;
LABEL_6:
      result = v3[4];
      goto LABEL_16;
    case 2:
      return (int)&v3[360 * a2 + 11280];
    case 3:
      v7 = 11352;
      goto LABEL_10;
    case 4:
      v7 = 11424;
LABEL_10:
      v8 = &v3[360 * a2];
      result = v3[6];
      if ( v3[6] )
        result = (int)&v8[v7];
      break;
    case 5:
      result = (int)&v3[360 * a2 + 11496];
      break;
    case 6:
      result = (int)&v3[360 * a2 + 11568];
      break;
    case 7:
      result = v3[5];
      v5 = 18336;
LABEL_16:
      if ( result )
        result = (int)&v3[v5];
      break;
    case 8:
      result = (int)(v3 + 19200);
      break;
    default:
      nn__detail__UnexpectedDefaultImpl((nn__detail *)&byte_60ABC94D, &byte_60ABC94D, 0, (int)v3);
      JUMPOUT(0x60847740);
  }
  return result;
}
