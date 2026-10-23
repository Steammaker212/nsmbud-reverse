/* registerProfile_pipe_NextGototaimaTag_82D8C8
 * address: 0x6082D8C8   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_pipe_NextGototaimaTag_82D8C8())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AE4D01;
  Profile__ctor(&stru_60CC6E70, Actor_pipe_NextGototaimaTag_build, 0x1C7u, &v1, &stru_60B0DF48, 0);
  dword_60CC6E8C = CurrentStateID + 1;
  dword_60CC6E88 = (int)&off_60C2A99C;
  dword_60CC6E90 = (int)nullsub_5620;
  dword_60CC6E94 = 0;
  dword_60CC6E98 = (int)sub_6082D414;
  dword_60CC6E9C = 0;
  dword_60CC6EA0 = (int)nullsub_5621;
  dword_60CC6EA4 = 0;
  stru_60CC6EA8.vtable = &off_60C2A99C;
  stru_60CC6EA8.id = CurrentStateID + 2;
  dword_60CC6EB0 = (int)sub_6082D4B8;
  dword_60CC6EB4 = 0;
  dword_60CC6EB8 = (int)sub_6082D4C8;
  dword_60CC6EBC = 0;
  dword_60CC6EC0 = (int)nullsub_5622;
  dword_60CC6EC4 = 0;
  CurrentStateID += 3;
  dword_60CC6ECC = CurrentStateID;
  dword_60CC6EC8 = (int)&off_60C2A99C;
  dword_60CC6ED0 = (int)sub_6082D5A4;
  dword_60CC6ED4 = 0;
  dword_60CC6ED8 = (int)sub_6082D5C8;
  dword_60CC6EDC = 0;
  dword_60CC6EE0 = (int)nullsub_276;
  dword_60CC6EE4 = 0;
  return nullsub_276;
}
