/* sub_6055BE28
 * address: 0x6055BE28   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055BE28(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 13308);
  if ( result )
  {
    StateMgr__execute((StateMgr *)(a1 + 20));
    sub_6050229C(a1 + 3608);
    sub_6050A8A4(a1 + 6092);
    return sub_60473B58((_DWORD *)(a1 + 36), 0xEu, 0);
  }
  return result;
}
