/* sub_60588560
 * address: 0x60588560   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60588560(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5
  StateBase *CurrentState; // r0
  int v6; // r7
  StateBase *v7; // r0
  int v8; // r6
  ActiveColliderMgr *v9; // r5

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60CAF218 & ~(1616414072 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAF218) )
  {
    dword_60CAF214 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60CAF218);
  }
  v4 = 0;
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CAF214) == 1 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      v4 = 1;
      if ( v6 == (*(int (**)(void))(dword_60CAF244 + 8))() )
      {
        v7 = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
        if ( v8 != (*(int (**)(void))(dword_60CAF284 + 8))() )
        {
          v9 = ActiveColliderMgr_instance;
          ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v3 + 188));
          ActiveColldierMgr_removeFromCreateList(v9, (ActiveCollider *)(v3 + 188));
          ActiveColldierMgr_removeFromList3(v9, v3 + 188);
          v4 = 1;
          FIELD_U8(v3, 6340) = 1;
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)v3 + 192))(v3, &dword_60CAF284);
        }
      }
    }
  }
  return v4;
}
