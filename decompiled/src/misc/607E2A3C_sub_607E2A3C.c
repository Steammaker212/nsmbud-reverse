/* sub_607E2A3C
 * address: 0x607E2A3C   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E2A3C(int a1)
{
  unsigned int v2; // r6
  int v3; // r5

  v2 = 0;
  v3 = dword_60C9A1F0;
  do
  {
    if ( sub_604086EC(v3, v2) )
      sub_60828E90(dword_60CC6E04, v2);
    ++v2;
  }
  while ( v2 != 67 );
  sub_60401598(0);
  sub_603F7FF8(0);
  sub_603F807C(dword_60C99DD0);
  sub_60401BB8(0);
  sub_60401ED4(dword_60C99E68);
  system_ref_426530(dword_60C9BBD4);
  sub_603F66AC(0);
  sub_603F67B8(dword_60C99DB8);
  sub_60023F4C();
  sub_6081F2E0(dword_60CC6D78);
  sub_608EF6A8(a1);
  if ( dword_60CC6C20 )
    sub_6081AA74();
  return sub_600240A4();
}
