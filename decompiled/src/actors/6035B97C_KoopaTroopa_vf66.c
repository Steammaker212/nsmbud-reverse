/* KoopaTroopa_vf66
 * address: 0x6035B97C   size: 592   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall KoopaTroopa_vf66(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  __int64 v6; // r0
  unsigned int result; // r0
  StateBase *CurrentState; // r0
  int v9; // r7
  char v10; // r12
  int v11; // r0
  int v12; // r1
  int v13; // r0
  bool v14; // zf
  StageActor *owner; // r8
  StateBase *v16; // r0
  int v17; // r7

  HIDWORD(v6) = FIELD_U32(a2, 0x68);
  LODWORD(v6) = FIELD_U32(a1, 7476);
  if ( v6 == 0x100000001LL )
  {
    if ( sub_6035B2D0((_WORD *)a1, a2, a3) == 1 )
    {
      result = (unsigned __int8)FIELD_U8(a2, 0x6E) | 2;
      FIELD_U8(a2, 0x6E) = result;
    }
    else
    {
      result = sub_6035B5B0(a1, a2, a3);
      if ( !result )
      {
        result = (unsigned int)FIELD_U32(a3, 0x40);
        if ( result )
        {
          result = FIELD_S8(result, 84);
          if ( result <= 3 )
          {
            result = a1 + 2 * result;
            FIELD_U16(result, 6140) = 0;
          }
        }
      }
    }
  }
  else if ( (_DWORD)v6 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v9 == (*(int (**)(void))(dword_60C8EA94 + 8))() && !FIELD_U32(a1, 6352) )
    {
      v13 = FIELD_U32(a3, 0x88);
      v14 = v13 == 15;
      if ( v13 != 15 )
        v14 = v13 == 0;
      if ( v14 )
      {
        owner = FIELD_U32(a3, 0x40);
        if ( ((unsigned int)&dword_60C7B37C & ~(1614133988 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( !owner
          || (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B378) != 1
          || (FIELD_U32(owner + (1) * 644, 0x238) & 0x40) == 0 )
        {
          goto LABEL_25;
        }
      }
    }
    v11 = Enemy__processCollision((Enemy *)a1, a2, a3, 0);
    v12 = v11;
    if ( v11 )
    {
      result = v11 | 2;
      if ( (v12 | 2) == 3 )
        return (*(unsigned int (__fastcall **)(int, int, ActiveCollider *, ActiveCollider *))(*(_DWORD *)a1 + 704))(
                 a1,
                 v12,
                 a2,
                 a3);
    }
    else
    {
LABEL_25:
      result = sub_603A037C(a1, a2, a3);
      if ( !result )
      {
        if ( FIELD_U32(a1, 6352) )
          return (*(int (__fastcall **)(int, ActiveCollider *, ActiveCollider *))(*(_DWORD *)a1 + 200))(a1, a2, a3);
        v16 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v17 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v16, 0x0) + 2))(v16);
        result = (*(int (**)(void))(dword_60C8EA94 + 8))();
        if ( v17 != result )
          return (*(int (__fastcall **)(int, ActiveCollider *, ActiveCollider *))(*(_DWORD *)a1 + 200))(a1, a2, a3);
      }
    }
  }
  else
  {
    return ShellEnemy__collisionPlayer(a1, (int)a2, (int)a3);
  }
  return result;
}
