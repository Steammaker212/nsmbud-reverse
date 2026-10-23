/* sub_607F5650
 * address: 0x607F5650   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F5650(int a1)
{
  int result; // r0

  result = sub_608194EC((_BYTE *)dword_60CC6BE4, a1);
  if ( !result )
  {
    StateMgr__execute((StateMgr *)(a1 + 212));
    sub_60401A80(dword_60C99E60);
    sub_60530C64(dword_60CAAAC0);
    sub_6052BB94(dword_60CAA450);
    sub_603F8084(dword_60C99DD0);
    return sub_60401F34(dword_60C99E68);
  }
  return result;
}
