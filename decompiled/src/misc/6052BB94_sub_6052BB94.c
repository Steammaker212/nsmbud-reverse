/* sub_6052BB94
 * address: 0x6052BB94   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052BB94(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 56);
  if ( result )
  {
    StateMgr__execute((StateMgr *)(a1 + 40));
    return SE_SYS_CB_RESULT_ref_2(a1);
  }
  return result;
}
