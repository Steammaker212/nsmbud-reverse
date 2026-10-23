/* Object_invokeSlot37_b
 * address: 0x600D79C4   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Object_invokeSlot37_b(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  StateBase *v4; // r0
  int v5; // r6
  StateBase *v6; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r6
  StateBase *v10; // r0
  int v11; // r5

  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 148))(a1) == 1 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v3 == (*(int (**)(void))(dword_60C84520 + 8))() )
      goto LABEL_7;
    v4 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4);
    if ( v5 == (*(int (**)(void))(dword_60C84544 + 8))()
      || (v6 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6),
          v7 == (*(int (**)(void))(dword_60C84568 + 8))())
      || (v8 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8),
          v9 == (*(int (**)(void))(dword_60C8458C + 8))())
      || (v10 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10),
          v11 == (*(int (**)(void))(dword_60C8461C + 8))()) )
    {
LABEL_7:
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C84458);
    }
  }
  return KoopalingBase__onExecute(a1);
}
