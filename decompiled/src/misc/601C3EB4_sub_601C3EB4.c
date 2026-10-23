/* sub_601C3EB4
 * address: 0x601C3EB4   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601C3EB4()
{
  dword_60C8AE20 = 0;
  dword_60C8AE24 = 0;
  dword_60C8AE28 = 0;
  dword_60C8AE30 = CurrentStateID + 1;
  dword_60C8AE34 = 360;
  dword_60C8AE38 = 1;
  dword_60C8AE3C = 364;
  dword_60C8AE40 = 1;
  dword_60C8AE44 = 368;
  dword_60C8AE48 = 1;
  dword_60C8AE2C = (int)&off_60BD6AE4;
  dword_60C8AE4C = (int)&NullState;
  dword_60C8AE5C = 1;
  dword_60C8AE60 = 376;
  dword_60C8AE64 = 1;
  dword_60C8AE68 = 380;
  dword_60C8AE6C = 1;
  stru_60C8AE50.vtable = &off_60BD6AE4;
  stru_60C8AE50.id = CurrentStateID + 2;
  unk_60C8AE58 = 372;
  dword_60C8AE70 = (int)&NullState;
  CurrentStateID += 3;
  *(_DWORD *)algn_60C8AE78 = CurrentStateID;
  *(_DWORD *)&algn_60C8AE78[4] = 336;
  dword_60C8AE80 = 1;
  dword_60C8AE84 = 340;
  dword_60C8AE88 = 1;
  dword_60C8AE8C = 344;
  dword_60C8AE90 = 1;
  dword_60C8AE74 = (int)&off_60BD6AE4;
  dword_60C8AE94 = (int)&NullState;
  return 1;
}
