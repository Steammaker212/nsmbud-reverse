/* sub_601F65D0
 * address: 0x601F65D0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601F65D0(StateMgr *a1)
{
  if ( sub_60190968(dword_60C8996C) )
    return (StateMethodExecuter *)((int (__fastcall *)(StateMgr *, int))FIELD_U32(a1, 0x0)[20].vtable)(a1, 1);
  ((void (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[22].vtable)(a1);
  ((void (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[21].methodExecuter.owner)(a1);
  return StateMgr__changeState(a1 + 18, (StateBase *)&dword_60C8BA6C);
}
