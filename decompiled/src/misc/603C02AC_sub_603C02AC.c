/* sub_603C02AC
 * address: 0x603C02AC   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *sub_603C02AC()
{
  dword_60C984D4 = 0;
  dword_60C984D8 = 0;
  dword_60C984DC = 0;
  dword_60C984E4 = CurrentStateID + 1;
  dword_60C984E8 = 456;
  dword_60C984EC = 1;
  dword_60C984F0 = 460;
  dword_60C984F4 = 1;
  dword_60C984F8 = 464;
  dword_60C984FC = 1;
  dword_60C984E0 = (int)&off_60BF6750;
  dword_60C98500 = (int)&stru_60C90710;
  CurrentStateID += 2;
  unk_60C98508 = CurrentStateID;
  unk_60C9850C = 480;
  unk_60C98510 = 1;
  dword_60C98514 = 484;
  dword_60C98518 = 1;
  dword_60C9851C = 488;
  dword_60C98520 = 1;
  dword_60C98504 = (int)&off_60BF6750;
  dword_60C98524 = (int)&stru_60C90758;
  return &stru_60C90758;
}
