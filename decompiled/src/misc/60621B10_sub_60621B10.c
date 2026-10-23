/* sub_60621B10
 * address: 0x60621B10   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60621B10()
{
  dword_60CB388C = 0;
  dword_60CB3890 = 0;
  dword_60CB3894 = 0;
  dword_60CB389C = CurrentStateID + 1;
  dword_60CB38A0 = 632;
  dword_60CB38A4 = 1;
  dword_60CB38A8 = 636;
  dword_60CB38AC = 1;
  dword_60CB38B0 = 640;
  dword_60CB38B4 = 1;
  dword_60CB3898 = (int)&off_60C116A4;
  dword_60CB38B8 = (int)&NullState;
  dword_60CB38C8 = 1;
  dword_60CB38CC = 648;
  dword_60CB38D0 = 1;
  dword_60CB38D4 = 652;
  dword_60CB38D8 = 1;
  unk_60CB38BC = &off_60C116A4;
  unk_60CB38C0 = CurrentStateID + 2;
  unk_60CB38C4 = 644;
  dword_60CB38DC = (int)&NullState;
  CurrentStateID += 3;
  unk_60CB38E4 = CurrentStateID;
  unk_60CB38E8 = 656;
  dword_60CB38EC = 1;
  dword_60CB38F0 = 660;
  dword_60CB38F4 = 1;
  dword_60CB38F8 = 664;
  dword_60CB38FC = 1;
  dword_60CB38E0 = (int)&off_60C116A4;
  dword_60CB3900 = (int)&NullState;
  return 1;
}
