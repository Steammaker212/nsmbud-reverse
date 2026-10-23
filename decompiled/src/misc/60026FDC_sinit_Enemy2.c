/* sinit_Enemy2
 * address: 0x60026FDC   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int sinit_Enemy2()
{
  dword_60C7F57C = 0;
  dword_60C7F580 = 0;
  dword_60C7F584 = 0;
  Enemy__StateID_JumpKill._._.id = CurrentStateID + 1;
  Enemy__StateID_JumpKill._.beginFunc = 0x1000001BCLL;
  Enemy__StateID_JumpKill._.executeFunc = 0x1000001C0LL;
  Enemy__StateID_JumpKill._.endFunc = 0x1000001C4LL;
  Enemy__StateID_JumpKill._._.vtable = &off_60BC1A0C;
  Enemy__StateID_JumpKill.baseState = (StateBase *)&stru_60C906EC;
  stru_60C7F5AC._._.id = CurrentStateID + 2;
  stru_60C7F5AC._.beginFunc = 0x100000270LL;
  stru_60C7F5AC._.executeFunc = 0x100000274LL;
  stru_60C7F5AC._.endFunc = 0x100000278LL;
  stru_60C7F5AC._._.vtable = &off_60BC1A0C;
  stru_60C7F5AC.baseState = &NullState;
  stru_60C7F5D0._.executeFunc = 0x100000280LL;
  stru_60C7F5D0._.endFunc = 0x100000284LL;
  stru_60C7F5D0._._.vtable = &off_60BC1A0C;
  stru_60C7F5D0._._.id = CurrentStateID + 3;
  stru_60C7F5D0._.beginFunc = 0x10000027CLL;
  stru_60C7F5D0.baseState = &NullState;
  stru_60C7F5F4._.executeFunc = 0x10000028CLL;
  stru_60C7F5F4._.endFunc = 0x100000290LL;
  stru_60C7F5F4._._.vtable = &off_60BC1A0C;
  stru_60C7F5F4._._.id = CurrentStateID + 4;
  stru_60C7F5F4._.beginFunc = 0x100000288LL;
  stru_60C7F5F4.baseState = &NullState;
  stru_60C7F618._.executeFunc = 0x100000298LL;
  stru_60C7F618._.endFunc = 0x10000029CLL;
  stru_60C7F618._._.vtable = &off_60BC1A0C;
  stru_60C7F618._._.id = CurrentStateID + 5;
  stru_60C7F618._.beginFunc = 0x100000294LL;
  stru_60C7F618.baseState = &NullState;
  CurrentStateID += 6;
  stru_60C7F63C._._.id = CurrentStateID;
  stru_60C7F63C._.beginFunc = 0x1000002A0LL;
  stru_60C7F63C._.executeFunc = 0x1000002A4LL;
  stru_60C7F63C._.endFunc = 0x1000002A8LL;
  stru_60C7F63C._._.vtable = &off_60BC1A0C;
  stru_60C7F63C.baseState = &NullState;
  return 1;
}
