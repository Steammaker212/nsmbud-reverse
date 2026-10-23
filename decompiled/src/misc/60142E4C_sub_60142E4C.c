/* sub_60142E4C
 * address: 0x60142E4C   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int sub_60142E4C()
{
  dword_60C87DCC = CurrentStateID + 1;
  dword_60C87DD0 = 0xC0;
  dword_60C87DD4 = 1;
  dword_60C87DD8 = 0xC4;
  dword_60C87DDC = 1;
  dword_60C87DE0 = 0xC8;
  dword_60C87DE4 = 1;
  dword_60C87DC8 = (int)&off_60BD3744;
  dword_60C87DE8 = (int)&NullState;
  dword_60C87DF8 = 1;
  dword_60C87DFC = 208;
  dword_60C87E00 = 1;
  dword_60C87E04 = 212;
  dword_60C87E08 = 1;
  dword_60C87DEC = (int)&off_60BD3744;
  unk_60C87DF0 = CurrentStateID + 2;
  unk_60C87DF4 = 204;
  dword_60C87E0C = (int)&NullState;
  dword_60C87E1C = 1;
  dword_60C87E20 = 220;
  dword_60C87E24 = 1;
  dword_60C87E28 = 224;
  dword_60C87E2C = 1;
  unk_60C87E10 = &off_60BD3744;
  unk_60C87E14 = CurrentStateID + 3;
  unk_60C87E18 = 216;
  dword_60C87E30 = (int)&NullState;
  CurrentStateID += 4;
  *(_DWORD *)algn_60C87E38 = CurrentStateID;
  *(_DWORD *)&algn_60C87E38[4] = 228;
  dword_60C87E40 = 1;
  dword_60C87E44 = 232;
  dword_60C87E48 = 1;
  dword_60C87E4C = 236;
  dword_60C87E50 = 1;
  dword_60C87E34 = (int)&off_60BD3744;
  dword_60C87E54 = (int)&NullState;
  return 1;
}
