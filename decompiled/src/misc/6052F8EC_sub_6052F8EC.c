/* sub_6052F8EC
 * address: 0x6052F8EC   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052F8EC(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 10976);
  if ( result )
  {
    if ( !FIELD_U8(a1, 10978) && FIELD_U8(a1, 10979) && sub_6050A95C(a1 + 3760) == 1 )
      FIELD_U8(a1, 10978) = 1;
    StateMgr__execute((StateMgr *)(a1 + 24));
    sub_6050A950(a1 + 3760, 0);
    sub_6050A8A4(a1 + 3760);
    return sub_60473B58((_DWORD *)(a1 + 40), 0xEu, 0);
  }
  return result;
}
