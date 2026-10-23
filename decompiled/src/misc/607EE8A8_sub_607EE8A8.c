/* sub_607EE8A8
 * address: 0x607EE8A8   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607EE8A8(int a1)
{
  int result; // r0

  result = sub_608194EC((_BYTE *)dword_60CC6BE4, a1);
  if ( !result )
  {
    StateMgr__execute((StateMgr *)(a1 + 216));
    sub_60538BF8(dword_60CAADA8);
    sub_6053EE84(dword_60CAB438);
    sub_6055BE28(a1 + 1060);
    sub_60515A14(a1 + 14376);
    sub_605571E4(a1 + 44352);
    sub_60542B54(a1 + 63184, 5u);
    sub_604ABBCC(dword_60CA146C);
    sub_603F8084(dword_60C99DD0);
    sub_60401F34(dword_60C99E68);
    return sub_60238B84(dword_60C8D9DC, 0);
  }
  return result;
}
