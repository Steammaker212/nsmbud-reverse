/* registerProfile_koinBattle_for_pipe_kiNEXTGOTO_2_5EFD58
 * address: 0x605EFD58   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_koinBattle_for_pipe_kiNEXTGOTO_2_5EFD58())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD2D31;
  Profile__ctor(&stru_60CB1F10, Actor_koinBattle_for_pipe_kiNEXTGOTO_2_build, 0x89u, &v1, &stru_60B05CC4, 1026);
  dword_60CB1F2C = CurrentStateID + 1;
  dword_60CB1F28 = (int)&off_60C0BE38;
  dword_60CB1F30 = (int)sub_605EF47C;
  dword_60CB1F34 = 0;
  dword_60CB1F38 = (int)sub_605EF490;
  dword_60CB1F3C = 0;
  dword_60CB1F40 = (int)nullsub_4809;
  dword_60CB1F44 = 0;
  unk_60CB1F48 = &off_60C0BE38;
  unk_60CB1F4C = CurrentStateID + 2;
  dword_60CB1F50 = (int)sub_605EF584;
  dword_60CB1F54 = 0;
  dword_60CB1F58 = (int)sub_605EF594;
  dword_60CB1F5C = 0;
  dword_60CB1F60 = (int)nullsub_4810;
  dword_60CB1F64 = 0;
  unk_60CB1F68 = &off_60C0BE38;
  unk_60CB1F6C = CurrentStateID + 3;
  dword_60CB1F70 = (int)nullsub_4811;
  dword_60CB1F74 = 0;
  dword_60CB1F78 = (int)sub_605EF5D4;
  dword_60CB1F7C = 0;
  dword_60CB1F80 = (int)nullsub_4812;
  dword_60CB1F84 = 0;
  CurrentStateID += 4;
  dword_60CB1F8C = CurrentStateID;
  dword_60CB1F88 = (int)&off_60C0BE38;
  dword_60CB1F90 = (int)SE_OBJ_DOKAN_APPEAR_ref_5EF624;
  dword_60CB1F94 = 0;
  dword_60CB1F98 = (int)sub_605EF6A0;
  dword_60CB1F9C = 0;
  dword_60CB1FA0 = (int)nullsub_4813;
  dword_60CB1FA4 = 0;
  return nullsub_4813;
}
