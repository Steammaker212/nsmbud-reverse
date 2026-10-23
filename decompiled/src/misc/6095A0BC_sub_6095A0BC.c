/* sub_6095A0BC
 * address: 0x6095A0BC   size: 804   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6095A0BC(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  void *v4; // r8
  int v5; // r5
  int v6; // r7

  *a1 = off_60C5EAA4;
  a1[99] = &off_60C5EAE0;
  sub_60913ABC((int)(a1 + 2434));
  v2 = a1[101];
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 4);
    v4 = (void *)(v2 - 8);
    if ( v3 )
    {
      v5 = 2088 * v3;
      v6 = v2 - 2088;
      do
      {
        sub_609777E8(v6 + v5);
        v5 -= 2088;
      }
      while ( v5 );
    }
    operator_delete_8DE3FC(v4);
    a1[100] = 0;
    a1[101] = 0;
  }
  sub_608DEB70(a1 + 102);
  a1[2438] = off_60BF9C4C;
  a1[2442] = &off_60BF9C5C;
  nullsub_124();
  sead__IDisposer__dtor(a1 + 2438);
  a1[2425] = &off_60C5D81C;
  a1[2411] = &off_60C5E40C;
  a1[2404] = &off_60C5D81C;
  a1[2210] = &off_60C5E40C;
  a1[2196] = &off_60C5E40C;
  a1[2158] = &off_60C5E40C;
  a1[2144] = &off_60C5E40C;
  a1[2106] = &off_60C5E40C;
  a1[2092] = &off_60C5E40C;
  a1[2054] = &off_60C5E40C;
  a1[2040] = &off_60C5E40C;
  a1[2002] = &off_60C5E40C;
  a1[1988] = &off_60C5E40C;
  a1[1950] = &off_60C5E40C;
  a1[1936] = &off_60C5E40C;
  a1[1898] = &off_60C5E40C;
  a1[1884] = &off_60C5E40C;
  a1[1846] = &off_60C5E40C;
  a1[1832] = &off_60C5E40C;
  a1[1794] = &off_60C5E40C;
  a1[1780] = &off_60C5E40C;
  a1[1742] = &off_60C5E40C;
  a1[1728] = &off_60C5E40C;
  a1[1690] = &off_60C5E40C;
  a1[1676] = &off_60C5E40C;
  a1[1638] = &off_60C5E40C;
  a1[1624] = &off_60C5E40C;
  a1[1586] = &off_60C5E40C;
  a1[1572] = &off_60C5E40C;
  a1[1534] = &off_60C5E40C;
  a1[1520] = &off_60C5E40C;
  a1[1482] = &off_60C5E40C;
  a1[1468] = &off_60C5E40C;
  a1[1430] = &off_60C5E40C;
  a1[1416] = &off_60C5E40C;
  a1[1378] = &off_60C5E40C;
  a1[1364] = &off_60C5E40C;
  a1[1326] = &off_60C5E40C;
  a1[1312] = &off_60C5E40C;
  a1[1274] = &off_60C5E40C;
  a1[1260] = &off_60C5E40C;
  a1[1222] = &off_60C5E40C;
  a1[1208] = &off_60C5E40C;
  a1[1170] = &off_60C5E40C;
  a1[1156] = &off_60C5E40C;
  a1[1118] = &off_60C5E40C;
  a1[1104] = &off_60C5E40C;
  a1[1066] = &off_60C5E40C;
  a1[1052] = &off_60C5E40C;
  a1[1014] = &off_60C5E40C;
  a1[1000] = &off_60C5E40C;
  a1[962] = &off_60C5E40C;
  a1[948] = &off_60C5E40C;
  a1[910] = &off_60C5E40C;
  a1[896] = &off_60C5E40C;
  a1[858] = &off_60C5E40C;
  a1[844] = &off_60C5E40C;
  a1[806] = &off_60C5E40C;
  a1[792] = &off_60C5E40C;
  a1[754] = &off_60C5E40C;
  a1[740] = &off_60C5E40C;
  a1[702] = &off_60C5E40C;
  a1[688] = &off_60C5E40C;
  a1[650] = &off_60C5E40C;
  a1[636] = &off_60C5E40C;
  a1[598] = &off_60C5E40C;
  a1[584] = &off_60C5E40C;
  sub_60913ABC((int)(a1 + 426));
  sub_609175E4((int)(a1 + 518));
  sub_60917AE4((int)(a1 + 498));
  sub_609175E4((int)(a1 + 446));
  sub_60913ABC((int)(a1 + 268));
  sub_609175E4((int)(a1 + 360));
  sub_60917AE4((int)(a1 + 340));
  sub_609175E4((int)(a1 + 288));
  sub_60913ABC((int)(a1 + 110));
  sub_609175E4((int)(a1 + 202));
  sub_60917AE4((int)(a1 + 182));
  sub_609175E4((int)(a1 + 130));
  *a1 = &off_60C5D9F0;
  return a1;
}
