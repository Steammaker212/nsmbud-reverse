/* sub_601F57C0
 * address: 0x601F57C0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601F57C0(StateMgr *a1)
{
  if ( FIELD_U32(a1 + (15) * 16, 0x0) == (StateExecuter *)4 )
    ((void (__fastcall *)(StateMgr *, _DWORD))FIELD_U32(a1, 0x0)[20].vtable)(a1, 0);
  else
    sub_601F74B4(a1);
  ((void (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[4].methodExecuter.owner)(a1);
  return StateMgr__changeState(a1 + 18, (StateBase *)&unk_60C8BA90);
}
