/* sub_602A4C88
 * address: 0x602A4C88   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_602A4C88(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1
  void *v4; // r1
  StateMgr *v5; // r4
  StateBase *v6; // r1

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6104));
  result = (StateMethodExecuter *)(a1 + 6116);
  v3 = FIELD_U32(a1, 6116);
  if ( !v3 || (v4 = (void *)(v3 - 1), (FIELD_U32(result, 0x0) = v4) == 0) )
  {
    v5 = (StateMgr *)(a1 + 6084);
    if ( sub_6078B6A0(PlayerMgr_instance) == 1 )
      v6 = (StateBase *)&dword_60C9069C;
    else
      v6 = (StateBase *)&unk_60C905FC;
    return StateMgr__changeState(v5, v6);
  }
  return result;
}
