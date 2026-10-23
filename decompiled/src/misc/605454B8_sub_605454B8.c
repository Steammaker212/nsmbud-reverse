/* sub_605454B8
 * address: 0x605454B8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605454B8(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 33496);
  if ( result )
  {
    StateMgr__execute((StateMgr *)(a1 + 24));
    sub_6050229C(a1 + 3632);
    ((void (__fastcall *)(int))loc_60548D68)(a1 + 5712);
    sub_6050A8A4(a1 + 24204);
    return sub_60473B58((_DWORD *)(a1 + 44), 0xEu, 0);
  }
  return result;
}
