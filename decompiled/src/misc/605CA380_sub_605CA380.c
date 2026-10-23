/* sub_605CA380
 * address: 0x605CA380   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *sub_605CA380()
{
  dword_60CB0C84 = CurrentStateID + 1;
  dword_60CB0C88 = 220;
  dword_60CB0C8C = 1;
  dword_60CB0C90 = 224;
  dword_60CB0C94 = 1;
  dword_60CB0C98 = 228;
  dword_60CB0C9C = 1;
  dword_60CB0C80 = (int)&off_60C0A6F4;
  dword_60CB0CA0 = (int)&stru_60CB0F14;
  *(_DWORD *)algn_60CB0CA8 = CurrentStateID + 2;
  *(_DWORD *)&algn_60CB0CA8[4] = 208;
  dword_60CB0CB0 = 1;
  dword_60CB0CB4 = 212;
  dword_60CB0CB8 = 1;
  dword_60CB0CBC = 216;
  dword_60CB0CC0 = 1;
  dword_60CB0CA4 = (int)&off_60C0A6F4;
  dword_60CB0CC4 = (int)&stru_60CB0EF0;
  CurrentStateID += 3;
  unk_60CB0CCC = CurrentStateID;
  unk_60CB0CD0 = 232;
  dword_60CB0CD4 = 1;
  dword_60CB0CD8 = 236;
  dword_60CB0CDC = 1;
  dword_60CB0CE0 = 240;
  dword_60CB0CE4 = 1;
  dword_60CB0CC8 = (int)&off_60C0A6F4;
  dword_60CB0CE8 = (int)&stru_60CB0F38;
  return &stru_60CB0F38;
}
