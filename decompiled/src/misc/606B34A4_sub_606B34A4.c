/* sub_606B34A4
 * address: 0x606B34A4   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_606B34A4(int a1)
{
  _DWORD *v2; // r4
  int v3; // r5
  int v4; // r5

  v2 = (_DWORD *)dword_60CBA43C;
  if ( !dword_60CBA43C )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x162F0u, a1, 8);
    sead__IDisposer__ctor(v2, a1, 3u);
    v3 = 0;
    *v2 = off_60C1AE3C;
    dword_60CBA438 = (int)v2;
    v2[4] = v2 + 8;
    v2[5] = 400;
    v2[6] = 0;
    v2[7] = 0;
    do
    {
      sub_606B2940((int)&v2[v3 + 408]);
      v3 += 53;
    }
    while ( v3 != 21200 );
    v4 = 0;
    v2[21608] = 0;
    v2[21609] = v2 + 21613;
    v2[21610] = 100;
    v2[21611] = 0;
    v2[21612] = 0;
    do
    {
      sub_606B3928(&v2[v4 + 21714]);
      v4 += 10;
    }
    while ( v4 != 1000 );
    v2[22714] = 0;
    dword_60CBA43C = (int)v2;
  }
  return v2;
}
