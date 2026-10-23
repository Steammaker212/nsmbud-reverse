/* sub_6008B078
 * address: 0x6008B078   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008B078(int a1)
{
  int v2; // r4
  int v3; // r0
  StateBase *CurrentState; // r0
  int v5; // r5
  bool v6; // zf
  ActiveColliderMgr *v8; // r6

  v2 = 0;
  if ( !FIELD_U8(a1, 6312) && !FIELD_U8(a1, 6313) )
  {
    if ( FIELD_U8(a1, 7248) )
    {
      v3 = sub_600FC164(a1);
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
      v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      v2 = 0;
      v6 = v5 == (*(int (**)(void))(dword_60C85F34 + 8))();
    }
    else
    {
      if ( (FIELD_U8(a1, 2872) & 1) == 0 )
        return v2;
      v8 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
        && ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(a1 + 188)) != 1 )
      {
        return v2;
      }
      v2 = 0;
      v6 = (FIELD_U8(a1, 7616) & 2) == 0;
    }
    if ( v6 )
      return 1;
  }
  return v2;
}
