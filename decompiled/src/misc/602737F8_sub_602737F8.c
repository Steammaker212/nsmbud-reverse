/* sub_602737F8
 * address: 0x602737F8   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_602737F8()
{
  dword_60C8EB00 = 0;
  dword_60C8EB04 = 0;
  dword_60C8EB08 = 0;
  stru_60C8EA70._.id = CurrentStateID + 1;
  stru_60C8EA70.beginFunc = 0x100000294LL;
  stru_60C8EA70.executeFunc = 0x100000298LL;
  stru_60C8EA70.endFunc = 0x10000029CLL;
  stru_60C8EA70._.vtable = &off_60BDCBC4;
  dword_60C8EA90 = (int)&NullState;
  dword_60C8EAA0 = 1;
  dword_60C8EAA4 = 676;
  dword_60C8EAA8 = 1;
  dword_60C8EAAC = 680;
  dword_60C8EAB0 = 1;
  dword_60C8EA94 = (int)&off_60BDCBC4;
  *(_DWORD *)algn_60C8EA98 = CurrentStateID + 2;
  *(_DWORD *)&algn_60C8EA98[4] = 672;
  dword_60C8EAB4 = (int)&NullState;
  CurrentStateID += 3;
  stru_60C8EAB8._._.id = CurrentStateID;
  stru_60C8EAB8._.beginFunc = 0x1000002ACLL;
  dword_60C8EB0C = 0;
  stru_60C8EAB8._.executeFunc = 0x1000002B0LL;
  stru_60C8EAB8._.endFunc = 0x1000002B4LL;
  stru_60C8EAB8._._.vtable = &off_60BDCBC4;
  stru_60C8EAB8.baseState = &NullState;
  dword_60C8EB10 = -1063256064;
  dword_60C8EB14 = 1086324736;
  dword_60C8EB18 = 0;
  dword_60C8EB1C = 0;
  dword_60C8EB20 = 0;
  dword_60C8EB24 = 0;
  dword_60C8EB28 = 1084227584;
  dword_60C8EB2C = 1084227584;
  return &dword_60C8EB00;
}
