/* sub_60587F34
 * address: 0x60587F34   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60587F34(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0
  ActiveColliderMgr *v5; // r5

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60CAF284 + 8))();
  if ( v3 != result )
  {
    v5 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
    ActiveColldierMgr_removeFromCreateList(v5, (ActiveCollider *)(a1 + 188));
    ActiveColldierMgr_removeFromList3(v5, a1 + 188);
    FIELD_U8(a1, 6340) = 1;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAF284);
  }
  return result;
}
