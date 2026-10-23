/* Goomba__vf27C
 * address: 0x6033A590   size: 604   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033E5C0
// 
// Overridden by: None
int __fastcall Goomba__vf27C(unsigned int a1)
{
  int result; // r0
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r6
  StateBase *v9; // r0
  int v10; // r6
  StateBase *v11; // r0
  int v12; // r6
  StateBase *v13; // r0
  int v14; // r6
  StateBase *v15; // r0
  int v16; // r6
  StateBase *v17; // r0
  int v18; // r5

  result = FIELD_U32(a1, 80);
  if ( result )
  {
    if ( result != 1 )
      return result;
    result = a1 + 6712;
    if ( FIELD_F32(a1, 6712) <= 0.0 )
      return result;
  }
  else
  {
    result = a1 + 6712;
    if ( FIELD_F32(a1, 6712) >= 0.0 )
      return result;
  }
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C94494 + 8))() )
    goto LABEL_12;
  v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
  if ( v6 == (*(int (**)(void))(dword_60C94298 + 8))() )
    goto LABEL_12;
  v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
  if ( v8 == (*(int (**)(void))(dword_60C942B8 + 8))()
    || (v9 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9),
        v10 == (*(int (**)(void))(dword_60C9435C + 8))())
    || (v11 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11),
        v12 == (*(int (**)(void))(dword_60C9437C + 8))())
    || (v13 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13),
        v14 == (*(int (**)(void))(dword_60C942DC + 8))()) )
  {
LABEL_12:
    v15 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
    if ( v16 == (*(int (**)(void))(dword_60C9435C + 8))()
      || (v17 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17),
          result = (*(int (**)(void))(dword_60C9437C + 8))(),
          v18 == result) )
    {
      result = 0;
      FIELD_U32(a1, 120) = 0;
    }
  }
  else if ( FIELD_U8(a1, 6705) )
  {
    FIELD_U8(a1, 6840) = 0;
    sub_6033A26C(a1 | 0x100000000LL);
    return (*(int (__fastcall **)(unsigned int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94298);
  }
  else
  {
    return (*(int (__fastcall **)(unsigned int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94494);
  }
  return result;
}
