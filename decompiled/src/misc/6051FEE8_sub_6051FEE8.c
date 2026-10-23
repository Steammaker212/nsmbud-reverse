/* sub_6051FEE8
 * address: 0x6051FEE8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051FEE8(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 13004);
  if ( result )
  {
    StateMgr__execute((StateMgr *)(a1 + 24));
    sub_6050229C(a1 + 3708);
    sub_6050A8A4(a1 + 5788);
    sub_60473B58((_DWORD *)(a1 + 40), 0xEu, 0);
    return sub_6051FF3C(a1);
  }
  return result;
}
