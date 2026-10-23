/* sub_607F7CD4
 * address: 0x607F7CD4   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F7CD4(int a1)
{
  *(_DWORD *)a1 = off_60C279E4;
  nullsub_113(a1 + 10284);
  nullsub_111(a1 + 10196);
  nullsub_113(a1 + 10012);
  nullsub_111(a1 + 9924);
  sub_60954610(a1 + 9856);
  sub_60954610(a1 + 9788);
  sub_60954610(a1 + 9720);
  sub_60954610(a1 + 9652);
  sub_604B622C(a1 + 3828);
  sub_605590B4((_DWORD *)(a1 + 232));
  if ( FIELD_U8(a1, 192) )
    dword_60CC6350 = 0;
  return sead__CalculateTask__dtor((_DWORD *)a1);
}
