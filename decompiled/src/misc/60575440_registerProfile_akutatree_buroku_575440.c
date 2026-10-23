/* registerProfile_akutatree_buroku_575440
 * address: 0x60575440   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_akutatree_buroku_575440()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  dword_60CAEB24 = 0;
  dword_60CAEB20 = 0;
  dword_60CAEB1C = 0;
  dword_60CAEB18 = 0;
  dword_60CAEB14 = 0;
  dword_60CAEB10 = 0;
  dword_60CAEB28 = 1098907648;
  dword_60CAEB2C = -1048576000;
  dword_60CAEB30 = 0;
  dword_60CAEB40 = 0;
  dword_60CAEB3C = 0;
  dword_60CAEB38 = 0;
  dword_60CAEB34 = 0;
  dword_60CAEB44 = -1056964608;
  dword_60CAEB48 = 1090519040;
  dword_60CAEB4C = 1090519040;
  unk_60CAEB50 = 3238002688LL;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = "アクター石ブロック";
  Profile__ctor(&stru_60CAEACC, Actor_akutatree_buroku_build, 0xF5u, v0, &stru_60B04604, 4098);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = "アクター木ブロック";
  Profile__ctor(&stru_60CAEAE4, Actor_akutatree_buroku_build, 0xF7u, v0, &stru_60B04628, 4098);
}
