/* sub_6084495C
 * address: 0x6084495C   size: 708   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084495C(int a1)
{
  int v2; // r6
  _DWORD *v3; // r5

  *(_DWORD *)a1 = 0;
  FIELD_U16(a1, 4) = 0;
  FIELD_U8(a1, 6) = 1;
  sub_60847FC8(a1 + 8);
  sub_60847FC8(a1 + 304);
  sub_60847FC8(a1 + 600);
  sub_60847FC8(a1 + 896);
  sub_60847FC8(a1 + 1192);
  sub_60847FC8(a1 + 1488);
  sub_60847FC8(a1 + 1784);
  sub_60847FC8(a1 + 2080);
  sub_60847FC8(a1 + 2376);
  sub_60847FC8(a1 + 2672);
  sub_60847FC8(a1 + 2968);
  sub_60847FC8(a1 + 3264);
  sub_60847FC8(a1 + 3560);
  sub_60847FC8(a1 + 3856);
  sub_608492B0(a1 + 4152);
  sub_608492B0(a1 + 4368);
  sub_608492B0(a1 + 4584);
  sub_608492B0(a1 + 4800);
  sub_608492B0(a1 + 5016);
  sub_608492B0(a1 + 5232);
  sub_608492B0(a1 + 5448);
  sub_608492B0(a1 + 5664);
  sub_608492B0(a1 + 5880);
  sub_608492B0(a1 + 6096);
  sub_608492B0(a1 + 6312);
  sub_608492B0(a1 + 6528);
  sub_608492B0(a1 + 6744);
  sub_608492B0(a1 + 6960);
  sub_608492B0(a1 + 7176);
  sub_608492B0(a1 + 7392);
  sub_608492B0(a1 + 7608);
  sub_608492B0(a1 + 7824);
  sub_608492B0(a1 + 8040);
  sub_608492B0(a1 + 8256);
  sub_608492B0(a1 + 8472);
  sub_608492B0(a1 + 8688);
  sub_608492B0(a1 + 8904);
  sub_608492B0(a1 + 9120);
  sub_608492B0(a1 + 9336);
  sub_608492B0(a1 + 9552);
  sub_608492B0(a1 + 9768);
  sub_608492B0(a1 + 9984);
  sub_608492B0(a1 + 10200);
  sub_608492B0(a1 + 10416);
  sub_608492B0(a1 + 10632);
  sub_608492B0(a1 + 10848);
  sub_608492B0(a1 + 11064);
  v2 = 6840;
  v3 = (_DWORD *)(a1 + 11568);
  do
  {
    sub_6083DC90(v3 - 72);
    sub_6083DC90(v3 - 54);
    sub_6083DC90(v3 - 36);
    sub_6083DC90(v3 - 18);
    sub_6083DC90(v3);
    v2 -= 360;
    v3 += 90;
  }
  while ( v2 );
  sub_608492B0(a1 + 18120);
  sub_6083DC90((_DWORD *)(a1 + 18336));
  sub_608492B0(a1 + 18408);
  sub_6083DC90((_DWORD *)(a1 + 18624));
  sub_608492B0(a1 + 18696);
  sub_6083DC90((_DWORD *)(a1 + 18912));
  sub_608492B0(a1 + 18984);
  sub_6083DC90((_DWORD *)(a1 + 19200));
  return a1;
}
