/* registerProfile_FreezeBlock_60E948
 * address: 0x6060E948   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_FreezeBlock_60E948()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB2F4C = 0;
  dword_60CB2F48 = 0;
  dword_60CB2F44 = 0;
  dword_60CB2F40 = 0;
  dword_60CB2F50 = -1056964608;
  dword_60CB2F54 = 1098907648;
  dword_60CB2F58 = 1090519040;
  dword_60CB2F5C = 0;
  dword_60CB2F60 = 0;
  dword_60CB2F70 = 0;
  dword_60CB2F6C = 0;
  dword_60CB2F68 = 0;
  dword_60CB2F64 = 0;
  dword_60CB2F74 = -1048576000;
  dword_60CB2F78 = 1098907648;
  dword_60CB2F7C = 1098907648;
  dword_60CB2F80 = 0;
  dword_60CB2F84 = 0;
  dword_60CB2EE8 = CurrentStateID + 1;
  dword_60CB2EE4 = (int)&off_60C0FC3C;
  dword_60CB2EEC = (int)nullsub_4880;
  dword_60CB2EF0 = 0;
  dword_60CB2EF4 = (int)sub_6060DAE0;
  dword_60CB2EF8 = 0;
  dword_60CB2EFC = (int)nullsub_4881;
  dword_60CB2F00 = 0;
  CurrentStateID += 2;
  dword_60CB2F08 = CurrentStateID;
  dword_60CB2F04 = (int)&off_60C0FC3C;
  dword_60CB2F0C = (int)SE_OBJ_ICE_S_THAW_ref;
  dword_60CB2F10 = 0;
  dword_60CB2F14 = (int)sub_6060DC0C;
  dword_60CB2F18 = 0;
  dword_60CB2F1C = (int)nullsub_4882;
  dword_60CB2F20 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD3862;
  Profile__ctor(&stru_60CB2F24, Actor_FreezeBlock_build, 0x11Bu, &v0, 0, 2);
}
