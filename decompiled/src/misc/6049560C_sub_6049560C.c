/* sub_6049560C
 * address: 0x6049560C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049560C(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 5936);
  if ( result )
  {
    StateMgr__execute((StateMgr *)(a1 + 20));
    sub_60507028(FIELD_U32(a1, 5960));
    sub_6050229C(a1 + 3856);
    sub_6050A8A4(a1 + 5972);
    return sub_60473B58((_DWORD *)(a1 + 36), 0xEu, 0);
  }
  return result;
}
