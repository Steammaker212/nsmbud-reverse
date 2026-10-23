/* sub_607EF560
 * address: 0x607EF560   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607EF560(int a1)
{
  *(_DWORD *)a1 = off_60C26FFC;
  sub_604EBDE0((_DWORD *)(a1 + 2648));
  nullsub_113(a1 + 2476);
  nullsub_111(a1 + 2388);
  sub_60954610(a1 + 2320);
  sub_60954610(a1 + 2252);
  sub_6045C0A0(a1 + 1812);
  sub_6045C0A0(a1 + 1408);
  sub_6045C0A0(a1 + 1004);
  sub_6045C0A0(a1 + 600);
  sub_6045C0A0(a1 + 196);
  if ( FIELD_U8(a1, 192) )
    dword_60CC5DEC = 0;
  return sead__CalculateTask__dtor((_DWORD *)a1);
}
