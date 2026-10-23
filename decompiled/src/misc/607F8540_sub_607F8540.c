/* sub_607F8540
 * address: 0x607F8540   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F8540(int a1)
{
  int result; // r0

  result = sub_608194EC((_BYTE *)dword_60CC6BE4, a1);
  if ( !result )
  {
    StateMgr__execute((StateMgr *)(a1 + 216));
    sub_60559448(a1 + 232);
    sub_604B6354(a1 + 3828);
    sub_603F8084(dword_60C99DD0);
    sub_60401F34(dword_60C99E68);
    return sub_60238B84(dword_60C8D9DC, 0);
  }
  return result;
}
