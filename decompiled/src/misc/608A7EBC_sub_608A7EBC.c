/* sub_608A7EBC
 * address: 0x608A7EBC   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608A7EBC(_DWORD *result, int a2, int a3, int a4)
{
  int v4; // r12
  int v5; // r2
  int v6; // r2

  v4 = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = a2;
  result[4] = 2;
  result[5] = a3;
  result[9] = 0;
  result[8] = 0;
  result[7] = 0;
  *result = &off_60C5ACD4;
  result[10] = a4;
  result[6] = a4 + 1;
  if ( a3 == 3 )
  {
    v4 = 3 * a4;
  }
  else if ( a3 == 2 )
  {
    v4 = a4 + 1;
  }
  v5 = 2;
  if ( v4 < 0x10000 )
    v5 = 1;
  if ( v4 < 256 )
    v5 = 0;
  result[4] = v5;
  result[7] = v4;
  v6 = -(a2 & 1) & 0xC;
  if ( (a2 & 2) != 0 )
    v6 += 12;
  if ( (a2 & 4) != 0 )
    v6 += 8;
  result[8] = v6 * (a4 + 1);
  result[9] = 4 * v4;
  return result;
}
