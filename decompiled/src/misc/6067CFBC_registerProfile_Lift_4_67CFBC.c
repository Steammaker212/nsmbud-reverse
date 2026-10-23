/* registerProfile_Lift_4_67CFBC
 * address: 0x6067CFBC   size: 620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_Lift_4_67CFBC())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CB7EBC = 0;
  dword_60CB7EB8 = 0;
  dword_60CB7EB4 = 0;
  dword_60CB7EB0 = 0;
  dword_60CB7EC0 = -1048576000;
  dword_60CB7EC4 = 1098907648;
  dword_60CB7EC8 = 1098907648;
  dword_60CB7ECC = -1048576000;
  dword_60CB7ED0 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD6313;
  Profile__ctor(&stru_60CB7ED4, Actor_Lift_4_build, 0xB8u, &v1, &stru_60B07D18, 2);
  dword_60CB7EF0 = CurrentStateID + 1;
  dword_60CB7EEC = (int)&off_60C16848;
  dword_60CB7EF4 = (int)nullsub_5121;
  dword_60CB7EF8 = 0;
  dword_60CB7EFC = (int)sub_6067B7A8;
  dword_60CB7F00 = 0;
  dword_60CB7F04 = (int)nullsub_5122;
  dword_60CB7F08 = 0;
  dword_60CB7F10 = CurrentStateID + 2;
  dword_60CB7F0C = (int)&off_60C16848;
  dword_60CB7F14 = (int)nullsub_5123;
  dword_60CB7F18 = 0;
  dword_60CB7F1C = (int)sub_6067B8BC;
  dword_60CB7F20 = 0;
  dword_60CB7F24 = (int)nullsub_5124;
  dword_60CB7F28 = 0;
  dword_60CB7F30 = CurrentStateID + 3;
  dword_60CB7F34 = 192;
  dword_60CB7F38 = 1;
  dword_60CB7F3C = 196;
  dword_60CB7F40 = 1;
  dword_60CB7F44 = 200;
  dword_60CB7F48 = 1;
  dword_60CB7F2C = (int)&off_60C1685C;
  dword_60CB7F4C = (int)&NullState;
  dword_60CB7F54 = CurrentStateID + 4;
  dword_60CB7F50 = (int)&off_60C16848;
  dword_60CB7F58 = (int)sub_6067B9A4;
  dword_60CB7F5C = 0;
  dword_60CB7F60 = (int)sub_6067BA40;
  dword_60CB7F64 = 0;
  dword_60CB7F68 = (int)nullsub_5125;
  dword_60CB7F6C = 0;
  dword_60CB7F74 = CurrentStateID + 5;
  dword_60CB7F70 = (int)&off_60C16848;
  dword_60CB7F78 = (int)sub_6067BAE0;
  dword_60CB7F7C = 0;
  dword_60CB7F80 = (int)sub_6067BB7C;
  dword_60CB7F84 = 0;
  dword_60CB7F88 = (int)nullsub_5126;
  dword_60CB7F8C = 0;
  CurrentStateID += 6;
  dword_60CB7F94 = CurrentStateID;
  dword_60CB7F90 = (int)&off_60C16848;
  dword_60CB7F98 = (int)sub_6067BCB0;
  dword_60CB7F9C = 0;
  dword_60CB7FA0 = (int)sub_6067BCEC;
  dword_60CB7FA4 = 0;
  dword_60CB7FA8 = (int)nullsub_5127;
  dword_60CB7FAC = 0;
  return nullsub_5127;
}
