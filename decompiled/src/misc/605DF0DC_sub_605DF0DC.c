/* sub_605DF0DC
 * address: 0x605DF0DC   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605DF0DC(int a1)
{
  int v2; // r5
  StateMethodExecuter *result; // r0
  int v4; // r1
  bool v5; // zf
  char v6; // r12

  if ( sub_605DBD64(a1) )
  {
    v2 = sub_605DBDAC(a1);
  }
  else
  {
    v4 = FIELD_U32(a1, 620);
    v5 = v4 == 0;
    if ( v4 )
      v5 = FIELD_U32(v4, 12) == 0;
    if ( v5 )
      goto LABEL_15;
    v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v4, 8));
    if ( ((unsigned int)&dword_60C7B37C & ~(1616769412 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( !v2 || (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C7B378) != 1 )
      goto LABEL_15;
  }
  if ( !v2 || !sub_60766708(v2) )
  {
LABEL_15:
    FIELD_U32(a1, 8020) = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 6740), (StateBase *)&dword_60CB18A0);
  }
  result = (StateMethodExecuter *)FIELD_U8(a1, 6240);
  if ( ((unsigned __int8)result & 0x40) != 0 )
    return (StateMethodExecuter *)sub_605EB7B0(a1 + 6064, FIELD_F32(v2, 9884));
  return result;
}
