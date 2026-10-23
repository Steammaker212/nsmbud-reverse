/* sub_606299C8
 * address: 0x606299C8   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606299C8(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  StateMgr *v6; // r6
  StateBase *CurrentState; // r0
  int v8; // r7
  StateBase *v9; // r0
  int v10; // r7
  int v11; // r6
  unsigned int v12; // r0
  StageActor *owner; // r7
  unsigned int playerId; // r0
  int v15; // r9
  float v17; // s16
  char v18; // r12

  v6 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v8 == (*((int (**)(void))stru_60CB0ECC._._.vtable + 2))()
    || (v9 = StateMgr__getCurrentState(v6),
        v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9),
        v11 = 0,
        v10 == (*((int (**)(void))stru_60CB0EF0._._.vtable + 2))()) )
  {
    v12 = FIELD_U32(a3, 0x88);
    v11 = 0;
    if ( v12 <= 0xF && ((1 << v12) & 0x8005) != 0 )
    {
      owner = FIELD_U32(a3, 0x40);
      if ( FIELD_F32(owner, 0x7C) < 0.0 )
      {
        playerId = FIELD_U8(owner, 0x54);
        if ( playerId <= 3 )
        {
          v15 = 1 << playerId;
          if ( (FIELD_U8(a1, 6197) & (unsigned __int8)(1 << playerId)) == 0 )
          {
            v17 = ActiveCollider_getTop(a2) + -6.0;
            if ( v17 > ActiveCollider_getBottom(a3) )
              return v11;
            if ( ((unsigned int)&dword_60C7B37C & ~(1617074944 << v18) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
            {
              dword_60C7B378 = (int)&off_60BC00BC;
              _cxa_guard_release(&dword_60C7B37C);
            }
            if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B378) == 1 )
              sub_607702EC(owner);
          }
          v11 = 1;
          FIELD_U8(a1, 6196) |= v15;
        }
      }
    }
  }
  return v11;
}
