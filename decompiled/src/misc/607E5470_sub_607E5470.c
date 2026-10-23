/* sub_607E5470
 * address: 0x607E5470   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E5470(_DWORD *a1)
{
  _DWORD *v2; // r5
  int i; // r4
  int v4; // r7
  _DWORD *v5; // r10

  *a1 = off_60C26B88;
  v2 = a1 + 431167;
  sub_6092D260(a1 + 431288);
  for ( i = 0; i != -315392; i -= 77 )
    sub_60026BFC(&v2[i]);
  v4 = 0;
  v5 = a1 + 111665;
  do
  {
    v5[v4] = EffectWrapper_vtable;
    sub_60237560((int)&v5[v4]);
    sead__IDisposer__dtor(&v5[v4]);
    v4 -= 26;
  }
  while ( v4 != -106496 );
  sub_60954610(a1 + 985);
  nullsub_113(a1 + 808);
  nullsub_113(a1 + 765);
  nullsub_111(a1 + 743);
  nullsub_111(a1 + 721);
  nullsub_111(a1 + 699);
  nullsub_113(a1 + 656);
  sub_6045C0A0((int)(a1 + 555));
  sub_6045C0A0((int)(a1 + 454));
  sub_6045C0A0((int)(a1 + 353));
  sub_6045C0A0((int)(a1 + 252));
  sub_6045C0A0((int)(a1 + 151));
  sub_60954610(a1 + 133);
  sub_60954610(a1 + 116);
  sub_60954610(a1 + 99);
  sub_60954610(a1 + 82);
  sub_60954610(a1 + 65);
  sub_60954610(a1 + 48);
  return sead__CalculateTask__dtor(a1);
}
