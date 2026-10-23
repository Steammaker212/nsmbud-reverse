/* sub_607EDC44
 * address: 0x607EDC44   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607EDC44(int a1)
{
  *(_DWORD *)a1 = off_60C26EBC;
  sub_60542914((_DWORD *)(a1 + 63184));
  sub_60556B1C((_DWORD *)(a1 + 44352));
  sub_605156F4((_DWORD *)(a1 + 14376));
  sub_6050A4C4(a1 + 7152);
  sub_6045C0A0(a1 + 6748);
  sub_605021B0((_DWORD *)(a1 + 4668));
  sub_60475AE8((_DWORD *)(a1 + 1096));
  nullsub_113(a1 + 864);
  nullsub_111(a1 + 776);
  nullsub_113(a1 + 592);
  nullsub_111(a1 + 504);
  sub_60954610(a1 + 436);
  sub_60954610(a1 + 368);
  sub_60954610(a1 + 300);
  sub_60954610(a1 + 232);
  if ( FIELD_U8(a1, 192) )
    dword_60CC5BA8 = 0;
  return sead__CalculateTask__dtor((_DWORD *)a1);
}
