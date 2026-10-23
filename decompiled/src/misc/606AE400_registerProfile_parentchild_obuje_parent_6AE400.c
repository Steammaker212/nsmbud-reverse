/* registerProfile_parentchild_obuje_parent_6AE400
 * address: 0x606AE400   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_parentchild_obuje_parent_6AE400())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD74BF;
  Profile__ctor(&stru_60CBA18C, Actor_parentchild_obuje_parent_build, 0xBu, &v1, &stru_60B08620, 0);
  dword_60CBA1A8 = CurrentStateID + 1;
  dword_60CBA1A4 = (int)&off_60C1AC84;
  dword_60CBA1AC = (int)nullsub_5179;
  dword_60CBA1B0 = 0;
  dword_60CBA1B4 = (int)nullsub_5180;
  dword_60CBA1B8 = 0;
  dword_60CBA1BC = (int)nullsub_5181;
  dword_60CBA1C0 = 0;
  unk_60CBA1C4 = &off_60C1AC84;
  unk_60CBA1C8 = CurrentStateID + 2;
  dword_60CBA1CC = (int)nullsub_5182;
  dword_60CBA1D0 = 0;
  dword_60CBA1D4 = (int)nullsub_5183;
  dword_60CBA1D8 = 0;
  dword_60CBA1DC = (int)nullsub_5184;
  dword_60CBA1E0 = 0;
  CurrentStateID += 3;
  dword_60CBA1E8 = CurrentStateID;
  dword_60CBA1E4 = (int)&off_60C1AC84;
  dword_60CBA1EC = (int)nullsub_5185;
  dword_60CBA1F0 = 0;
  dword_60CBA1F4 = (int)sub_606ADD78;
  dword_60CBA1F8 = 0;
  dword_60CBA1FC = (int)nullsub_266;
  dword_60CBA200 = 0;
  return nullsub_266;
}
