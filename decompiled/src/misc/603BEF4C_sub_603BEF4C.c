/* sub_603BEF4C
 * address: 0x603BEF4C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BEF4C(int a1)
{
  int v2; // r7
  bool v3; // zf
  StateBase *CurrentState; // r0
  int v5; // r5
  int v6; // r5

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  v2 = FIELD_U32(a1, 6668);
  v3 = v2 == 0;
  if ( v2 )
    v3 = FIELD_U8(a1, 6693) == 0;
  if ( !v3 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    FIELD_U8(v2, 6332) = v5 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))();
    v6 = FIELD_U32(a1, 6668);
    FIELD_U8(v6, 6333) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 664))(a1);
  }
  return 1;
}
