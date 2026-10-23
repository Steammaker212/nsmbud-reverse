/* sub_6013E41C
 * address: 0x6013E41C   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013E41C(int a1, int a2, int a3)
{
  int v5; // r6
  char v6; // r12
  StateBase *CurrentState; // r0
  int v8; // r7

  sub_600009FC((StageActor *)a1);
  v5 = FIELD_U32(a3, 64);
  if ( ((unsigned int)&dword_60C830F8 & ~(1611916356 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C830F8) )
  {
    dword_60C830F4 = (int)&off_60BC321C;
    _cxa_guard_release(&dword_60C830F8);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C830F4) == 1 && (FIELD_U8(v5, 6148) & 1) != 0 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v8 != (*((int (**)(void))stru_60C8EA70._.vtable + 2))() )
      sub_60022540(dword_60C7F52C, v5 + 108, 1u, FIELD_S8(v5, 84), 1);
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 68))(a1, FIELD_S8(v5, 84));
    SE_EMY_DOWN_ref_2A58B4(v5, a1);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 68))(a1, -1);
    goto LABEL_13;
  }
  if ( Actor__getProfileId((Actor *)v5) == 392 )
  {
    if ( sub_602EF2C8(v5) != FIELD_U32(a1, 6412) )
      sub_602EE7B8(v5, FIELD_U32(a1, 80), -1);
LABEL_13:
    FIELD_U8(a3, 110) |= 2u;
  }
  return 0;
}
