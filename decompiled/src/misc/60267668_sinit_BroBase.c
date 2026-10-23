/* sinit_BroBase
 * address: 0x60267668   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __cdecl sinit_BroBase()
{
  dword_60C8E4F4 = 0;
  dword_60C8E4F8 = 0;
  dword_60C8E4FC = 0;
  BroBase_StateID_Move._._.id = CurrentStateID + 1;
  BroBase_StateID_Move._.beginFunc = 0x100000270LL;
  BroBase_StateID_Move._.executeFunc = 0x100000274LL;
  BroBase_StateID_Move._.endFunc = 0x100000278LL;
  BroBase_StateID_Move._._.vtable = &StateVirtual_BroBase_vtable;
  BroBase_StateID_Move.baseState = &NullState;
  BroBase_StateID_Attack._._.id = CurrentStateID + 2;
  BroBase_StateID_Attack._.beginFunc = 0x10000027CLL;
  BroBase_StateID_Attack._.executeFunc = 0x100000280LL;
  BroBase_StateID_Attack._.endFunc = 0x100000284LL;
  BroBase_StateID_Attack._._.vtable = &StateVirtual_BroBase_vtable;
  BroBase_StateID_Attack.baseState = &NullState;
  BroBase_StateID_JumpSt._._.id = CurrentStateID + 3;
  BroBase_StateID_JumpSt._.beginFunc = 0x100000288LL;
  BroBase_StateID_JumpSt._.executeFunc = 0x10000028CLL;
  BroBase_StateID_JumpSt._.endFunc = 0x100000290LL;
  BroBase_StateID_JumpSt._._.vtable = &StateVirtual_BroBase_vtable;
  BroBase_StateID_JumpSt.baseState = &NullState;
  BroBase_StateID_Jump._._.id = CurrentStateID + 4;
  BroBase_StateID_Jump._.beginFunc = 0x100000294LL;
  BroBase_StateID_Jump._.executeFunc = 0x100000298LL;
  BroBase_StateID_Jump._.endFunc = 0x10000029CLL;
  BroBase_StateID_Jump._._.vtable = &StateVirtual_BroBase_vtable;
  BroBase_StateID_Jump.baseState = &NullState;
  BroBase_StateID_JumpEd._._.id = CurrentStateID + 5;
  BroBase_StateID_JumpEd._.beginFunc = 0x1000002A0LL;
  BroBase_StateID_JumpEd._.executeFunc = 0x1000002A4LL;
  BroBase_StateID_JumpEd._.endFunc = 0x1000002A8LL;
  BroBase_StateID_JumpEd._._.vtable = &StateVirtual_BroBase_vtable;
  BroBase_StateID_JumpEd.baseState = &NullState;
  BroBase_StateID_AirAttack._._.id = CurrentStateID + 6;
  BroBase_StateID_AirAttack._.beginFunc = 0x1000002ACLL;
  BroBase_StateID_AirAttack._.executeFunc = 0x1000002B0LL;
  BroBase_StateID_AirAttack._.endFunc = 0x1000002B4LL;
  BroBase_StateID_AirAttack._._.vtable = &StateVirtual_BroBase_vtable;
  BroBase_StateID_AirAttack.baseState = &NullState;
  BroBase_StateID_DieFumi._._.id = CurrentStateID + 7;
  BroBase_StateID_DieFumi._.beginFunc = 0x1000001BCLL;
  BroBase_StateID_DieFumi._.executeFunc = 0x1000001C0LL;
  BroBase_StateID_DieFumi._.endFunc = 0x1000001C4LL;
  BroBase_StateID_DieFumi._._.vtable = &StateVirtual_BroBase_vtable;
  BroBase_StateID_DieFumi.baseState = (StateBase *)&stru_60C906EC;
  BroBase_StateID_DieFall._._.id = CurrentStateID + 8;
  BroBase_StateID_DieFall._.beginFunc = 0x1000001C8LL;
  BroBase_StateID_DieFall._.executeFunc = 0x1000001CCLL;
  BroBase_StateID_DieFall._.endFunc = 0x1000001D0LL;
  BroBase_StateID_DieFall._._.vtable = &StateVirtual_BroBase_vtable;
  BroBase_StateID_DieFall.baseState = (StateBase *)&stru_60C90710;
  CurrentStateID += 9;
  BroBase_StateID_Down._._.id = CurrentStateID;
  BroBase_StateID_Down._.beginFunc = 0x1000002B8LL;
  BroBase_StateID_Down._.executeFunc = 0x1000002BCLL;
  BroBase_StateID_Down._.endFunc = 0x1000002C0LL;
  BroBase_StateID_Down._._.vtable = &StateVirtual_BroBase_vtable;
  BroBase_StateID_Down.baseState = &NullState;
}
