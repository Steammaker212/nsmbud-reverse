/* sub_607E2E88
 * address: 0x607E2E88   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E2E88(int a1)
{
  int result; // r0

  result = sub_608194EC((_BYTE *)dword_60CC6BE4, a1);
  if ( !result )
  {
    StateMgr__execute((StateMgr *)(a1 + 212));
    sub_603F6868(dword_60C99DB8);
    sub_603F8084(dword_60C99DD0);
    return sub_60401F34(dword_60C99E68);
  }
  return result;
}
