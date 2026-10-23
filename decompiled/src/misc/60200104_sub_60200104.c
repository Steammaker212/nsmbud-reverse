/* sub_60200104
 * address: 0x60200104   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60200104()
{
  dword_60C8C17C = 0;
  dword_60C8C180 = 0;
  dword_60C8C184 = 0;
  dword_60C8C190 = CurrentStateID + 1;
  dword_60C8C194 = 104;
  dword_60C8C198 = 1;
  dword_60C8C19C = 108;
  dword_60C8C1A0 = 1;
  dword_60C8C1A4 = 112;
  dword_60C8C1A8 = 1;
  dword_60C8C18C = (int)&off_60BD83D4;
  dword_60C8C1AC = (int)&NullState;
  dword_60C8C1BC = 1;
  dword_60C8C1C0 = 120;
  dword_60C8C1C4 = 1;
  dword_60C8C1C8 = 124;
  dword_60C8C1CC = 1;
  stru_60C8C1B0.vtable = &off_60BD83D4;
  stru_60C8C1B0.id = CurrentStateID + 2;
  unk_60C8C1B8 = 116;
  dword_60C8C1D0 = (int)&NullState;
  CurrentStateID += 3;
  *(_DWORD *)algn_60C8C1D8 = CurrentStateID;
  *(_DWORD *)&algn_60C8C1D8[4] = 128;
  dword_60C8C1E0 = 1;
  dword_60C8C1E4 = 132;
  dword_60C8C1E8 = 1;
  dword_60C8C1EC = 136;
  dword_60C8C1F0 = 1;
  dword_60C8C1D4 = (int)&off_60BD83D4;
  dword_60C8C1F4 = (int)&NullState;
  return 1;
}
