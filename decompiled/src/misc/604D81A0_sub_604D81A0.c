/* sub_604D81A0
 * address: 0x604D81A0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D81A0(int a1)
{
  if ( sub_60502D80(a1 + 3692) || FIELD_U8(a1, 4738) )
    return (int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60CA40F8);
  if ( !SE_SYS_PAGE_ref_4D95CC(a1) )
    return sub_604D9B70(a1);
  FIELD_U8(a1, 4746) = 0;
  return 4746;
}
