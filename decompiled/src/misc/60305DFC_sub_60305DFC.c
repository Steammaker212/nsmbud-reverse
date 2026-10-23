/* sub_60305DFC
 * address: 0x60305DFC   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60305DFC(unsigned int *a1)
{
  int v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r6
  _DWORD *v5; // r0
  unsigned int v6; // r1
  _DWORD *v7; // r6
  int v8; // r0

  v2 = 0;
  if ( sub_6000C0F4(a1) == 1 && !sub_602A588C(a1[9]) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1[9] + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      (*(void (__fastcall **)(unsigned int))(*(_DWORD *)a1[9] + 72))(a1[9]);
      v2 = 1;
      a1[8] = 1;
      v5 = (_DWORD *)a1[9];
      v7 = v5 + 1747;
      v6 = v5[1747];
      if ( v6 )
      {
        v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v6);
        if ( v8 )
          FIELD_U8(v8, 19) = 1;
        *v7 = 0;
        v5 = (_DWORD *)a1[9];
      }
      (*(void (__fastcall **)(_DWORD *, StateVirtual *))(*v5 + 192))(v5, &stru_60C908E4);
    }
  }
  return v2;
}
