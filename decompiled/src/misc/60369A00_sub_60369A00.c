/* sub_60369A00
 * address: 0x60369A00   size: 620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60369A00(int a1, int a2, int a3)
{
  int v6; // r7
  char v7; // r12
  StateMgr *v8; // r8
  StateBase *CurrentState; // r0
  int v10; // r7
  StateBase *v11; // r0
  int v12; // r7
  StateBase *v13; // r0
  int v14; // r7
  int result; // r0
  StateBase *v16; // r0
  int v17; // r7
  StateBase *v18; // r0
  int v19; // r7
  StateBase *v20; // r0
  int v21; // r7

  v6 = FIELD_U32(a3, 64);
  if ( Actor__getProfileId((Actor *)v6) != 525 )
    goto LABEL_14;
  if ( ((unsigned int)&dword_60C95E08 & ~(1614191168 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C95E08) )
  {
    dword_60C95E04 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C95E08);
  }
  if ( !v6 || (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C95E04) != 1 )
    goto LABEL_14;
  v8 = (StateMgr *)(v6 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v10 == (*(int (**)(void))(dword_60C95D38 + 8))() )
  {
    v11 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
    if ( v12 == (*(int (**)(void))(dword_60C95D58 + 8))()
      || (v13 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13),
          v14 == (*(int (**)(void))(dword_60C95D78 + 8))()) )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 364))(a1);
      return sub_602A6024(a1, FIELD_F32(a1, 120) >= 0.0, -1, -1);
    }
  }
  if ( (v16 = StateMgr__getCurrentState(v8),
        v17 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v16, 0x0) + 2))(v16),
        v17 != (*(int (**)(void))(dword_60C95D58 + 8))())
    && (v18 = StateMgr__getCurrentState(v8),
        v19 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v18, 0x0) + 2))(v18),
        v19 != (*(int (**)(void))(dword_60C95D78 + 8))())
    || (v20 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v21 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v20, 0x0) + 2))(v20),
        result = (*(int (**)(void))(dword_60C95D38 + 8))(),
        v21 != result) )
  {
LABEL_14:
    result = sub_60369CA0(a1, a2, a3);
    if ( result == 1 )
    {
      FIELD_U32(a1, 6528) = 1;
      FIELD_U32(a1, 120) = 0;
      result = FIELD_U32(a1, 80) ^ 1;
      FIELD_U32(a1, 80) = result;
      FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
    }
  }
  return result;
}
