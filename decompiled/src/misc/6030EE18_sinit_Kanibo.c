/* sinit_Kanibo
 * address: 0x6030EE18   size: 852   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sinit_Kanibo()
{
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60C9325C = 0;
  dword_60C93260 = 0;
  dword_60C93264 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC44D9;
  Profile__ctor(&stru_60C93148, Kanibo__ctor, 0x207u, &v1, &stru_60AFF2DC, 18);
  Kanibo__StateID_Wait._.id = CurrentStateID + 1;
  Kanibo__StateID_Wait._.vtable = &off_60BE9D04;
  LODWORD(Kanibo__StateID_Wait.beginFunc) = Kanibo__beginState_Wait;
  HIDWORD(Kanibo__StateID_Wait.beginFunc) = 0;
  LODWORD(Kanibo__StateID_Wait.executeFunc) = Kanibo__executeState_Wait;
  HIDWORD(Kanibo__StateID_Wait.executeFunc) = 0;
  LODWORD(Kanibo__StateID_Wait.endFunc) = Kanibo__endState_Wait;
  HIDWORD(Kanibo__StateID_Wait.endFunc) = 0;
  Kanibo__StateID_RockUp._.vtable = &off_60BE9D04;
  Kanibo__StateID_RockUp._.id = CurrentStateID + 2;
  LODWORD(Kanibo__StateID_RockUp.beginFunc) = Kanibo__beginState_RockUp;
  HIDWORD(Kanibo__StateID_RockUp.beginFunc) = 0;
  LODWORD(Kanibo__StateID_RockUp.executeFunc) = Kanibo__executeState_RockUp;
  HIDWORD(Kanibo__StateID_RockUp.executeFunc) = 0;
  LODWORD(Kanibo__StateID_RockUp.endFunc) = Kanibo__endState_RockUp;
  HIDWORD(Kanibo__StateID_RockUp.endFunc) = 0;
  Kanibo__StateID_Jump._.vtable = &off_60BE9D04;
  Kanibo__StateID_Jump._.id = CurrentStateID + 3;
  LODWORD(Kanibo__StateID_Jump.beginFunc) = Kanibo__beginState_Jump;
  HIDWORD(Kanibo__StateID_Jump.beginFunc) = 0;
  LODWORD(Kanibo__StateID_Jump.executeFunc) = Kanibo__executeState_Jump;
  HIDWORD(Kanibo__StateID_Jump.executeFunc) = 0;
  LODWORD(Kanibo__StateID_Jump.endFunc) = Kanibo__endState_Jump;
  HIDWORD(Kanibo__StateID_Jump.endFunc) = 0;
  Kanibo__StateID_BackMove._.vtable = &off_60BE9D04;
  Kanibo__StateID_BackMove._.id = CurrentStateID + 4;
  LODWORD(Kanibo__StateID_BackMove.beginFunc) = Kanibo__beginState_BackMove;
  HIDWORD(Kanibo__StateID_BackMove.beginFunc) = 0;
  LODWORD(Kanibo__StateID_BackMove.executeFunc) = Kanibo__executeState_BackMove;
  HIDWORD(Kanibo__StateID_BackMove.executeFunc) = 0;
  LODWORD(Kanibo__StateID_BackMove.endFunc) = Kanibo__endState_BackMove;
  HIDWORD(Kanibo__StateID_BackMove.endFunc) = 0;
  Kanibo_StateID_Frozen._._.id = CurrentStateID + 5;
  Kanibo_StateID_Frozen._.beginFunc = 0x100000264LL;
  Kanibo_StateID_Frozen._.executeFunc = 0x100000268LL;
  Kanibo_StateID_Frozen._.endFunc = 0x10000026CLL;
  Kanibo_StateID_Frozen._._.vtable = &off_60BE9D18;
  Kanibo_StateID_Frozen.baseState = (StateBase *)&Enemy_StateId_Frozen;
  dword_60C93210 = 1;
  dword_60C93214 = 460;
  dword_60C93218 = 1;
  dword_60C9321C = 464;
  dword_60C93220 = 1;
  unk_60C93204 = &off_60BE9D18;
  unk_60C93208 = CurrentStateID + 6;
  unk_60C9320C = 456;
  dword_60C93224 = (int)&stru_60C90710;
  CurrentStateID += 7;
  stru_60C93228._._.id = CurrentStateID;
  stru_60C93228._.beginFunc = 0x1000001BCLL;
  stru_60C93228._.executeFunc = 0x1000001C0LL;
  stru_60C93228._.endFunc = 0x1000001C4LL;
  stru_60C93228._._.vtable = &off_60BE9D18;
  stru_60C93228.baseState = (StateBase *)&stru_60C906EC;
  Kanjibo__AnimNamesWait[0].vtable = &sead__SafeStringBase__vtable;
  Kanjibo__AnimNamesWait[0].cstr = "wait_L";
  stru_60C93278.vtable = &sead__SafeStringBase__vtable;
  stru_60C93278.cstr = "wait_R";
  dword_60C93280 = 1;
  dword_60C93284 = 4.0;
  Kanjibo__AnimNamesThrow1.vtable = &sead__SafeStringBase__vtable;
  Kanjibo__AnimNamesThrow1.cstr = "throw_L1";
  stru_60C93290.vtable = &sead__SafeStringBase__vtable;
  stru_60C93290.cstr = "throw_R1";
  dword_60C93298 = 0;
  dword_60C9329C = 4.0;
  Kanjibo__AnimNamesThrow2.vtable = &sead__SafeStringBase__vtable;
  Kanjibo__AnimNamesThrow2.cstr = "throw_L2";
  stru_60C932A8.vtable = &sead__SafeStringBase__vtable;
  stru_60C932A8.cstr = "throw_R2";
  dword_60C932B0 = 0;
  dword_60C932B4 = 4.0;
  Kanjibo__AnimNamesDead[0].vtable = &sead__SafeStringBase__vtable;
  dword_60C932BC = (int)"dead_L";
  dword_60C932C0 = (int)&sead__SafeStringBase__vtable;
  unk_60C932C4 = "dead_R";
  dword_60C932C8 = 1;
  algn_60C932CC = 0.0;
  Kanjibo__AnimNamesFreeze.vtable = &sead__SafeStringBase__vtable;
  Kanjibo__AnimNamesFreeze.cstr = "freeze_L";
  stru_60C932D8.vtable = &sead__SafeStringBase__vtable;
  stru_60C932D8.cstr = "freeze_R";
  dword_60C932E0 = 1;
  algn_60C932E4 = 0.0;
  return sub_60000288();
}
