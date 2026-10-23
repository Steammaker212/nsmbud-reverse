/* sub_6041009C
 * address: 0x6041009C   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6041009C(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v3; // r2
  int v4; // r5
  _DWORD *v5; // r3
  int v6; // r5
  _DWORD *v7; // r2
  int v8; // r5
  _DWORD *v9; // r2

  v2 = 0;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[3] = a1 + 5;
  while ( 1 )
  {
    v3 = &a1[v2];
    a1[v2 + 5] = &a1[v2 + 16];
    if ( v2 == 572 )
      break;
    v2 += 22;
    v3[16] = v3 + 27;
  }
  v4 = 0;
  a1[588] = 0;
  a1[4] = a1 + 5;
  sub_608DEB0C(a1, 54, (int)(a1 + 599));
  a1[653] = 0;
  a1[654] = 0;
  a1[655] = 0;
  a1[656] = 0;
  a1[657] = 0;
  a1[656] = a1 + 658;
  while ( 1 )
  {
    v5 = &a1[v4];
    a1[v4 + 658] = &a1[v4 + 669];
    if ( v4 == 572 )
      break;
    v4 += 22;
    v5[669] = v5 + 680;
  }
  v6 = 0;
  a1[1241] = 0;
  a1[657] = a1 + 658;
  sub_608DEB0C(a1 + 653, 54, (int)(a1 + 1252));
  a1[1306] = 0;
  v7 = a1 + 1322;
  a1[1307] = 0;
  a1[1308] = 0;
  a1[1309] = 0;
  a1[1310] = 0;
  a1[1309] = a1 + 1311;
  while ( 1 )
  {
    v7[v6 - 11] = &v7[v6];
    if ( v6 == 572 )
      break;
    v7[v6] = &v7[v6 + 11];
    v6 += 22;
  }
  v8 = 0;
  a1[1894] = 0;
  a1[1310] = a1 + 1311;
  sub_608DEB0C(a1 + 1306, 54, (int)(a1 + 1905));
  a1[1959] = 0;
  v9 = a1 + 1976;
  a1[1960] = 0;
  a1[1961] = 0;
  a1[1962] = 0;
  a1[1963] = 0;
  a1[1962] = a1 + 1964;
  while ( 1 )
  {
    v9[v8 - 12] = &v9[v8];
    if ( v8 == 624 )
      break;
    v9[v8] = &v9[v8 + 12];
    v8 += 24;
  }
  a1[2600] = 0;
  a1[1963] = a1 + 1964;
  sub_608DEB0C(a1 + 1959, 54, (int)(a1 + 2612));
  return a1;
}
