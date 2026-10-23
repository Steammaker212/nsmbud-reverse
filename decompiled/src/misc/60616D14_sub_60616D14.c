/* sub_60616D14
 * address: 0x60616D14   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60616D14(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r5
  int v5; // r0
  bool v6; // zf

  v2 = (StateMgr *)(a1 + 6084);
  FIELD_U32(a1, 7188) -= 100663296;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60CBACC0 + 8))() && !FIELD_U32(a1, 7072) )
  {
    v5 = FIELD_U32(a1, 7056);
    v6 = v5 == 0;
    if ( v5 )
      v6 = FIELD_U32(a1, 7060) == 0;
    if ( !v6 )
    {
      MovementHandler__execute((MovementHandler *)(a1 + 6808));
      if ( FIELD_U32(a1, 6856) == 1 && FIELD_U32(a1, 6876) != 1 )
      {
        FIELD_U32(a1, 108) = FIELD_U32(a1, 6808);
        FIELD_U32(a1, 112) = FIELD_U32(a1, 6812);
      }
    }
  }
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
