/* sub_605CCCE0
 * address: 0x605CCCE0   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int sub_605CCCE0()
{
  stru_60CB0ECC._._.id = CurrentStateID + 1;
  stru_60CB0ECC._.beginFunc = 0x1000000C4LL;
  stru_60CB0ECC._.executeFunc = 0x1000000C8LL;
  stru_60CB0ECC._.endFunc = 0x1000000CCLL;
  stru_60CB0ECC._._.vtable = &off_60C0A9A8;
  stru_60CB0ECC.baseState = &NullState;
  stru_60CB0EF0._.executeFunc = 0x1000000D4LL;
  stru_60CB0EF0._.endFunc = 0x1000000D8LL;
  stru_60CB0EF0._._.vtable = &off_60C0A9A8;
  stru_60CB0EF0._._.id = CurrentStateID + 2;
  stru_60CB0EF0._.beginFunc = 0x1000000D0LL;
  stru_60CB0EF0.baseState = &NullState;
  stru_60CB0F14._.executeFunc = 0x1000000E0LL;
  stru_60CB0F14._.endFunc = 0x1000000E4LL;
  stru_60CB0F14._._.vtable = &off_60C0A9A8;
  stru_60CB0F14._._.id = CurrentStateID + 3;
  stru_60CB0F14._.beginFunc = 0x1000000DCLL;
  stru_60CB0F14.baseState = &NullState;
  CurrentStateID += 4;
  stru_60CB0F38._._.id = CurrentStateID;
  stru_60CB0F38._.beginFunc = 0x1000000E8LL;
  stru_60CB0F38._.executeFunc = 0x1000000ECLL;
  stru_60CB0F38._.endFunc = 0x1000000F0LL;
  stru_60CB0F38._._.vtable = &off_60C0A9A8;
  stru_60CB0F38.baseState = &NullState;
  return 1;
}
