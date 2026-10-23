/* registerProfile_shadouretreat_Tag_82FB68
 * address: 0x6082FB68   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_shadouretreat_Tag_82FB68()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AE4EFF;
  Profile__ctor(&stru_60CC7064, Actor_shadouretreat_Tag_build, 0x1CAu, &v1, (ActorInfo *)&unk_60B0E0B0, 0);
  dword_60CC7080 = ++CurrentStateID;
  dword_60CC707C = (int)&off_60C2ADE4;
  dword_60CC7084 = (int)nullsub_5624;
  dword_60CC7088 = 0;
  dword_60CC708C = (int)nullsub_5625;
  dword_60CC7090 = 0;
  dword_60CC7094 = (int)nullsub_5626;
  dword_60CC7098 = 0;
  return &dword_60CC707C;
}
