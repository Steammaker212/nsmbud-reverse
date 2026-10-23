/* sub_60137210
 * address: 0x60137210   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int sub_60137210()
{
  dword_60C877D4 = 0x15555555;
  stru_60C877D8._._.id = CurrentStateID + 1;
  stru_60C877D8._.beginFunc = 0x1000000C0LL;
  stru_60C877D8._.executeFunc = 0x1000000C4LL;
  stru_60C877D8._.endFunc = 0x1000000C8LL;
  stru_60C877D8._._.vtable = &off_60BD2460;
  dword_60C877F8 = (int)&NullState;
  stru_60C877FC._.executeFunc = 0x1000000D0LL;
  stru_60C877FC._.endFunc = 0x1000000D4LL;
  stru_60C877FC._._.vtable = &off_60BD2460;
  stru_60C877FC._._.id = CurrentStateID + 2;
  stru_60C877FC._.beginFunc = 0x1000000CCLL;
  dword_60C8781C = (int)&NullState;
  dword_60C8782C = 1;
  dword_60C87830 = 220;
  dword_60C87834 = 1;
  dword_60C87838 = 224;
  dword_60C8783C = 1;
  unk_60C87820 = &off_60BD2460;
  unk_60C87824 = CurrentStateID + 3;
  unk_60C87828 = 216;
  dword_60C87840 = (int)&NullState;
  CurrentStateID += 4;
  *(_DWORD *)algn_60C87848 = CurrentStateID;
  *(_DWORD *)&algn_60C87848[4] = 228;
  dword_60C87850 = 1;
  dword_60C87854 = 232;
  dword_60C87858 = 1;
  dword_60C8785C = 236;
  dword_60C87860 = 1;
  dword_60C87844 = (int)&off_60BD2460;
  dword_60C87864 = (int)&NullState;
  return 1;
}
