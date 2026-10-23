/* sub_60136A34
 * address: 0x60136A34   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60136A34(int a1)
{
  int v1; // r4
  char v2; // r12
  int result; // r0

  v1 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  if ( ((unsigned int)&dword_60C823C4 & ~(1611885164 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C823C4) )
  {
    FireballBase_RTTI = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C823C4);
  }
  if ( !(**(int (__fastcall ***)(int, int *))v1)(v1, &FireballBase_RTTI) )
    v1 = 0;
  result = 0;
  if ( !FIELD_U8(v1, 6240) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 72))(v1);
    StateMgr__changeState((StateMgr *)(v1 + 6084), (StateBase *)&unk_60C87820);
    return 1;
  }
  return result;
}
