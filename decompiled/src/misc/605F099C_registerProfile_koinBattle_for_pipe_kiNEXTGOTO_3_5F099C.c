/* registerProfile_koinBattle_for_pipe_kiNEXTGOTO_3_5F099C
 * address: 0x605F099C   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_koinBattle_for_pipe_kiNEXTGOTO_3_5F099C())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD2D61;
  Profile__ctor(&stru_60CB1FB0, Actor_koinBattle_for_pipe_kiNEXTGOTO_3_build, 0x8Au, &v1, &stru_60B05CE8, 1026);
  dword_60CB1FCC = CurrentStateID + 1;
  dword_60CB1FC8 = (int)&off_60C0BF18;
  dword_60CB1FD0 = (int)sub_605F00D0;
  dword_60CB1FD4 = 0;
  dword_60CB1FD8 = (int)sub_605F00E4;
  dword_60CB1FDC = 0;
  dword_60CB1FE0 = (int)nullsub_4814;
  dword_60CB1FE4 = 0;
  unk_60CB1FE8 = &off_60C0BF18;
  unk_60CB1FEC = CurrentStateID + 2;
  dword_60CB1FF0 = (int)sub_605F01D8;
  dword_60CB1FF4 = 0;
  dword_60CB1FF8 = (int)sub_605F01E8;
  dword_60CB1FFC = 0;
  dword_60CB2000 = (int)nullsub_4815;
  dword_60CB2004 = 0;
  unk_60CB2008 = &off_60C0BF18;
  unk_60CB200C = CurrentStateID + 3;
  dword_60CB2010 = (int)nullsub_4816;
  dword_60CB2014 = 0;
  dword_60CB2018 = (int)sub_605F0228;
  dword_60CB201C = 0;
  dword_60CB2020 = (int)nullsub_4817;
  dword_60CB2024 = 0;
  CurrentStateID += 4;
  dword_60CB202C = CurrentStateID;
  dword_60CB2028 = (int)&off_60C0BF18;
  dword_60CB2030 = (int)SE_OBJ_DOKAN_APPEAR_ref_5F0278;
  dword_60CB2034 = 0;
  dword_60CB2038 = (int)sub_605F02EC;
  dword_60CB203C = 0;
  dword_60CB2040 = (int)nullsub_4818;
  dword_60CB2044 = 0;
  return nullsub_4818;
}
