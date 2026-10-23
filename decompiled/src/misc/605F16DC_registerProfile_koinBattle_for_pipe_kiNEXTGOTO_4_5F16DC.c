/* registerProfile_koinBattle_for_pipe_kiNEXTGOTO_4_5F16DC
 * address: 0x605F16DC   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_koinBattle_for_pipe_kiNEXTGOTO_4_5F16DC())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD2D91;
  Profile__ctor(&stru_60CB2050, Actor_koinBattle_for_pipe_kiNEXTGOTO_4_build, 0x87u, &v1, &stru_60B05D0C, 2);
  dword_60CB206C = CurrentStateID + 1;
  dword_60CB2068 = (int)&off_60C0BFF8;
  dword_60CB2070 = (int)sub_605F0D14;
  dword_60CB2074 = 0;
  dword_60CB2078 = (int)sub_605F0D28;
  dword_60CB207C = 0;
  dword_60CB2080 = (int)nullsub_4819;
  dword_60CB2084 = 0;
  unk_60CB2088 = &off_60C0BFF8;
  unk_60CB208C = CurrentStateID + 2;
  dword_60CB2090 = (int)sub_605F0E1C;
  dword_60CB2094 = 0;
  dword_60CB2098 = (int)sub_605F0E2C;
  dword_60CB209C = 0;
  dword_60CB20A0 = (int)nullsub_4820;
  dword_60CB20A4 = 0;
  unk_60CB20A8 = &off_60C0BFF8;
  unk_60CB20AC = CurrentStateID + 3;
  dword_60CB20B0 = (int)nullsub_4821;
  dword_60CB20B4 = 0;
  dword_60CB20B8 = (int)sub_605F0E6C;
  dword_60CB20BC = 0;
  dword_60CB20C0 = (int)nullsub_4822;
  dword_60CB20C4 = 0;
  CurrentStateID += 4;
  dword_60CB20CC = CurrentStateID;
  dword_60CB20C8 = (int)&off_60C0BFF8;
  dword_60CB20D0 = (int)SE_OBJ_DOKAN_APPEAR_ref_5F0EBC;
  dword_60CB20D4 = 0;
  dword_60CB20D8 = (int)sub_605F0F38;
  dword_60CB20DC = 0;
  dword_60CB20E0 = (int)nullsub_4823;
  dword_60CB20E4 = 0;
  return nullsub_4823;
}
