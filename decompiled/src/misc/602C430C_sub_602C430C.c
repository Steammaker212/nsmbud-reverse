/* sub_602C430C
 * address: 0x602C430C   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C430C(int a1)
{
  unsigned int v2; // r0
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5

  v2 = FIELD_U8(a1, 6332);
  if ( v2 > 0x2F
    || (v2 & 2) == 0
    || (CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
        v4 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))())
    || (v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
        v6 == (*(int (**)(void))(dword_60C915E4 + 8))()) )
  {
    DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6304));
  }
  return 1;
}
