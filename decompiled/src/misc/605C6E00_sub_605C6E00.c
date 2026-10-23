/* sub_605C6E00
 * address: 0x605C6E00   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_605C6E00()
{
  dword_60CB0A90 = CurrentStateID + 1;
  dword_60CB0A94 = 196;
  dword_60CB0A98 = 1;
  dword_60CB0A9C = 200;
  dword_60CB0AA0 = 1;
  dword_60CB0AA4 = 204;
  dword_60CB0AA8 = 1;
  dword_60CB0A8C = (int)&off_60C0A440;
  dword_60CB0AAC = (int)&NullState;
  CurrentStateID += 2;
  *(_DWORD *)algn_60CB0AB4 = CurrentStateID;
  *(_DWORD *)&algn_60CB0AB4[4] = 208;
  *(_DWORD *)&algn_60CB0AB4[8] = 1;
  dword_60CB0AC0 = 212;
  dword_60CB0AC4 = 1;
  dword_60CB0AC8 = 216;
  dword_60CB0ACC = 1;
  dword_60CB0AB0 = (int)&off_60C0A440;
  dword_60CB0AD0 = (int)&NullState;
  return CurrentStateID;
}
