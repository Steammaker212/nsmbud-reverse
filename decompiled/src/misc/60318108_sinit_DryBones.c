/* sinit_DryBones
 * address: 0x60318108   size: 820   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sinit_DryBones()
{
  int v0; // r3
  sead__SafeString v2[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C933C0 = 0;
  dword_60C933C4 = 0;
  dword_60C933C8 = 0;
  v2[0].vtable = &sead__SafeStringBase__vtable;
  v2[0].cstr = (char *)&unk_60AC457C;
  Profile__ctor(&stru_60C933CC, DryBones_ctor, 0x289u, v2, &stru_60AFF370, 18);
  v2[0].vtable = &sead__SafeStringBase__vtable;
  v2[0].cstr = (char *)&unk_60AC4586;
  Profile__ctor(&stru_60C933E4, DryBones_ctor, 0x28Au, v2, &stru_60AFF394, 18);
  DryBones_StateId_Walk._.id = CurrentStateID + 1;
  DryBones_StateId_Walk._.vtable = &off_60BEA3B0;
  LODWORD(DryBones_StateId_Walk.beginFunc) = DryBones_beginState_Walk;
  HIDWORD(DryBones_StateId_Walk.beginFunc) = 0;
  LODWORD(DryBones_StateId_Walk.executeFunc) = &DryBones_executeState_Walk;
  HIDWORD(DryBones_StateId_Walk.executeFunc) = 0;
  LODWORD(DryBones_StateId_Walk.endFunc) = DryBones_endState_Walk;
  HIDWORD(DryBones_StateId_Walk.endFunc) = 0;
  DryBones_StateId_Turn._.vtable = &off_60BEA3B0;
  DryBones_StateId_Turn._.id = CurrentStateID + 2;
  LODWORD(DryBones_StateId_Turn.beginFunc) = DryBones_beginState_Turn;
  HIDWORD(DryBones_StateId_Turn.beginFunc) = 0;
  LODWORD(DryBones_StateId_Turn.executeFunc) = DryBones_executeState_Turn;
  HIDWORD(DryBones_StateId_Turn.executeFunc) = 0;
  LODWORD(DryBones_StateId_Turn.endFunc) = DryBones_endState_Turn;
  HIDWORD(DryBones_StateId_Turn.endFunc) = 0;
  dword_60C9343C = (int)&off_60BEA3B0;
  unk_60C93440 = CurrentStateID + 3;
  dword_60C93444 = (int)big_stop_ref;
  dword_60C93448 = 0;
  dword_60C9344C = (int)sub_60312850;
  dword_60C93450 = 0;
  dword_60C93454 = (int)nullsub_175;
  dword_60C93458 = 0;
  dword_60C9345C = (int)&off_60BEA3B0;
  unk_60C93460 = CurrentStateID + 4;
  dword_60C93464 = (int)sub_603128EC;
  dword_60C93468 = 0;
  dword_60C9346C = (int)&loc_60312B94;
  dword_60C93470 = 0;
  dword_60C93474 = (int)nullsub_3333;
  dword_60C93478 = 0;
  dword_60C9347C = (int)&off_60BEA3B0;
  unk_60C93480 = CurrentStateID + 5;
  dword_60C93484 = (int)sub_60312DE4;
  dword_60C93488 = 0;
  dword_60C9348C = (int)&loc_60312E18;
  dword_60C93490 = 0;
  dword_60C93494 = (int)nullsub_3334;
  dword_60C93498 = 0;
  dword_60C9349C = (int)&off_60BEA3B0;
  unk_60C934A0 = CurrentStateID + 6;
  dword_60C934A4 = (int)sub_60312F50;
  dword_60C934A8 = 0;
  dword_60C934AC = (int)sub_60312F70;
  dword_60C934B0 = 0;
  dword_60C934B4 = (int)sub_603136DC;
  dword_60C934B8 = 0;
  unk_60C934BC = &off_60BEA3B0;
  unk_60C934C0 = CurrentStateID + 7;
  dword_60C934C4 = (int)sub_603139EC;
  dword_60C934C8 = 0;
  dword_60C934CC = (int)sub_60313AB4;
  dword_60C934D0 = 0;
  dword_60C934D4 = (int)nullsub_176;
  dword_60C934D8 = 0;
  v0 = CurrentStateID + 8;
  CurrentStateID += 9;
  dword_60C934E0 = v0;
  dword_60C934E4 = 504;
  dword_60C934E8 = 1;
  dword_60C934EC = 508;
  dword_60C934F0 = 1;
  dword_60C934F4 = 512;
  dword_60C934F8 = 1;
  dword_60C934DC = (int)&off_60BEA3C4;
  dword_60C934FC = (int)&stru_60C907A0;
  unk_60C93504 = CurrentStateID;
  unk_60C93508 = 456;
  unk_60C9350C = 1;
  unk_60C93510 = 460;
  dword_60C93514 = 1;
  dword_60C93518 = 464;
  dword_60C9351C = 1;
  dword_60C93500 = (int)&off_60BEA3C4;
  dword_60C93520 = (int)&stru_60C90710;
  return &dword_60C93500;
}
