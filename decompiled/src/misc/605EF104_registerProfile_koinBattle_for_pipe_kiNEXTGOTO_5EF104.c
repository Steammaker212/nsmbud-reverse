/* registerProfile_koinBattle_for_pipe_kiNEXTGOTO_5EF104
 * address: 0x605EF104   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_koinBattle_for_pipe_kiNEXTGOTO_5EF104())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD2CED;
  Profile__ctor(&stru_60CB1E68, Actor_koinBattle_for_pipe_kiNEXTGOTO_build, 0x88u, &v1, &stru_60B05CA0, 2);
  dword_60CB1E84 = CurrentStateID + 1;
  dword_60CB1E80 = (int)&off_60C0BD58;
  dword_60CB1E88 = (int)sub_605EE618;
  dword_60CB1E8C = 0;
  dword_60CB1E90 = (int)sub_605EE62C;
  dword_60CB1E94 = 0;
  dword_60CB1E98 = (int)nullsub_4804;
  dword_60CB1E9C = 0;
  unk_60CB1EA0 = &off_60C0BD58;
  unk_60CB1EA4 = CurrentStateID + 2;
  dword_60CB1EA8 = (int)sub_605EE720;
  dword_60CB1EAC = 0;
  dword_60CB1EB0 = (int)sub_605EE730;
  dword_60CB1EB4 = 0;
  dword_60CB1EB8 = (int)nullsub_4805;
  dword_60CB1EBC = 0;
  unk_60CB1EC0 = &off_60C0BD58;
  unk_60CB1EC4 = CurrentStateID + 3;
  dword_60CB1EC8 = (int)nullsub_4806;
  dword_60CB1ECC = 0;
  dword_60CB1ED0 = (int)sub_605EE770;
  dword_60CB1ED4 = 0;
  dword_60CB1ED8 = (int)nullsub_4807;
  dword_60CB1EDC = 0;
  CurrentStateID += 4;
  dword_60CB1EE4 = CurrentStateID;
  dword_60CB1EE0 = (int)&off_60C0BD58;
  dword_60CB1EE8 = (int)SE_OBJ_DOKAN_APPEAR_ref;
  dword_60CB1EEC = 0;
  dword_60CB1EF0 = (int)sub_605EE834;
  dword_60CB1EF4 = 0;
  dword_60CB1EF8 = (int)nullsub_4808;
  dword_60CB1EFC = 0;
  return nullsub_4808;
}
