/* registerProfile_GiantWiggler_254EF0
 * address: 0x60254EF0   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_GiantWiggler_254EF0())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C8DFC4 = 0;
  dword_60C8DFC8 = 0;
  dword_60C8DFCC = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC2826;
  Profile__ctor(&stru_60C8DFD0, GiantWiggler_build, 0x1FEu, &v1, &stru_60AFD830, 2);
  dword_60C8DFEC = CurrentStateID + 1;
  dword_60C8DFE8 = (int)&off_60BDAB84;
  dword_60C8DFF0 = (int)sub_6025412C;
  dword_60C8DFF4 = 0;
  dword_60C8DFF8 = (int)sub_60254138;
  dword_60C8DFFC = 0;
  dword_60C8E000 = (int)nullsub_3098;
  dword_60C8E004 = 0;
  CurrentStateID += 2;
  dword_60C8E00C = CurrentStateID;
  dword_60C8E008 = (int)&off_60BDAB84;
  dword_60C8E010 = (int)nullsub_3099;
  dword_60C8E014 = 0;
  dword_60C8E018 = (int)SE_EMY_BIG_HANACHAN_WALK_NUMA_ref;
  dword_60C8E01C = 0;
  dword_60C8E020 = (int)nullsub_3100;
  dword_60C8E024 = 0;
  return nullsub_3100;
}
