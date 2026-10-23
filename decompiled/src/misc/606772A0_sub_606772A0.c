/* sub_606772A0
 * address: 0x606772A0   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateBase *sub_606772A0()
{
  dword_60CB7C54 = CurrentStateID + 1;
  dword_60CB7C50 = (int)&off_60C160A4;
  dword_60CB7C58 = (int)nullsub_5111;
  dword_60CB7C5C = 0;
  dword_60CB7C60 = (int)sub_606765C8;
  dword_60CB7C64 = 0;
  dword_60CB7C68 = (int)nullsub_5112;
  dword_60CB7C6C = 0;
  CurrentStateID += 2;
  dword_60CB7C74 = CurrentStateID;
  dword_60CB7C78 = 192;
  dword_60CB7C7C = 1;
  dword_60CB7C80 = 196;
  dword_60CB7C84 = 1;
  dword_60CB7C88 = 200;
  dword_60CB7C8C = 1;
  dword_60CB7C70 = (int)&off_60C160B8;
  dword_60CB7C90 = (int)&NullState;
  return &NullState;
}
