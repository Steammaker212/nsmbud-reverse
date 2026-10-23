/* sub_604E43B0
 * address: 0x604E43B0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E43B0(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 20520);
  if ( result )
  {
    StateMgr__execute((StateMgr *)(a1 + 24));
    sub_60473B58((_DWORD *)(a1 + 40), 0xEu, 0);
    sub_604E4418(a1);
    sub_604BAE44(a1 + 3608);
    sub_604BAE44(a1 + 7308);
    sub_604BAE44(a1 + 11008);
    return sub_604BAE44(a1 + 14708);
  }
  return result;
}
