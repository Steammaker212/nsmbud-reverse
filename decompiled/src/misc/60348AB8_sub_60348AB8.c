/* sub_60348AB8
 * address: 0x60348AB8   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60348AB8(int a1, int a2, int a3)
{
  StateMgr *v6; // r7
  StateBase *CurrentState; // r0
  int v8; // r5
  StateBase *v9; // r0
  int v10; // r5
  float v11; // s0
  int v12; // r0
  int v13; // r1

  v6 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v8 == (*((int (**)(void))stru_60C8EA70._.vtable + 2))()
    && (FIELD_U8(a3, 149) & 2) != 0
    && (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 312))(a1, a2, a3) )
  {
    FIELD_U8(a2, 110) |= 2u;
  }
  else
  {
    v9 = StateMgr__getCurrentState(v6);
    v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
    if ( v10 == (*(int (**)(void))(dword_60C94948 + 8))()
      && ((v11 = FIELD_F32(a2, 188), v12 = FIELD_U32(a1, 80), v11 < 0.0) && !v12 || v11 > 0.0 && v12 == 1)
      && (v13 = FIELD_U32(a3, 64)) != 0
      && FIELD_U32(a1, 80) != sub_6000ADDC(a1, v13) )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94968);
    }
    else
    {
      Enemy__collisionEnemy();
    }
  }
}
