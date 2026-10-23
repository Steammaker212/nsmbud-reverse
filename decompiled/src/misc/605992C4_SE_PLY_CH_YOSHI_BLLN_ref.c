/* SE_PLY_CH_YOSHI_BLLN_ref
 * address: 0x605992C4   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_PLY_CH_YOSHI_BLLN_ref(int a1)
{
  int *v2; // r0
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r1
  StateBase *v6; // r0
  int v7; // r6
  int v8; // r0
  StateMethodExecuter **v9; // r1
  StateMethodExecuter *result; // r0

  v2 = sub_60002B90(FIELD_S8(a1, 6336), unk_60C263F0);
  sub_605D8938(a1, "SE_PLY_CH_YOSHI_BLLN", v2);
  if ( (FIELD_U32(a1, 6260) & 0x3000000) == 0x2000000 )
    SE_VOC_CH_YS_GOKUN_ref_2(a1);
  FIELD_U8(a1, 13476) = 0;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 13452));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*((int (**)(void))stru_60CAF9BC.vtable + 2))() )
  {
    FIELD_U32(a1, 13468) = 0;
    v5 = (StateBase *)&dword_60CAF9DC;
  }
  else
  {
    v6 = StateMgr__getCurrentState((StateMgr *)(a1 + 13452));
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    v8 = (*(int (**)(void))(dword_60CAF9DC + 8))();
    v9 = (StateMethodExecuter **)(a1 + 13468);
    if ( v7 == v8 )
    {
      result = *v9;
      if ( *v9 != (StateMethodExecuter *)1 )
        return result;
      *v9 = 0;
      v5 = (StateBase *)&dword_60CAF9DC;
    }
    else
    {
      *v9 = 0;
      v5 = (StateBase *)&unk_60CAF9FC;
    }
  }
  return StateMgr__changeState((StateMgr *)(a1 + 13452), v5);
}
