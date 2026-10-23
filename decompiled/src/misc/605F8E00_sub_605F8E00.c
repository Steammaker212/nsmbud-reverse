/* sub_605F8E00
 * address: 0x605F8E00   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_605F8E00()
{
  dword_60CB23DC = 0;
  dword_60CB23E0 = 0;
  dword_60CB23E4 = 0;
  dword_60CB23EC = CurrentStateID + 1;
  dword_60CB23F0 = 632;
  dword_60CB23F4 = 1;
  dword_60CB23F8 = 636;
  dword_60CB23FC = 1;
  dword_60CB2400 = 640;
  dword_60CB2404 = 1;
  dword_60CB23E8 = (int)&off_60C0CD4C;
  dword_60CB2408 = (int)&NullState;
  dword_60CB2418 = 1;
  dword_60CB241C = 648;
  dword_60CB2420 = 1;
  dword_60CB2424 = 652;
  dword_60CB2428 = 1;
  dword_60CB240C = (int)&off_60C0CD4C;
  unk_60CB2410 = CurrentStateID + 2;
  unk_60CB2414 = 644;
  dword_60CB242C = (int)&NullState;
  dword_60CB243C = 1;
  dword_60CB2440 = 660;
  dword_60CB2444 = 1;
  dword_60CB2448 = 664;
  dword_60CB244C = 1;
  dword_60CB2430 = (int)&off_60C0CD4C;
  unk_60CB2434 = CurrentStateID + 3;
  unk_60CB2438 = 656;
  dword_60CB2450 = (int)&NullState;
  CurrentStateID += 4;
  *(_DWORD *)algn_60CB2458 = CurrentStateID;
  *(_DWORD *)&algn_60CB2458[4] = 668;
  dword_60CB2460 = 1;
  dword_60CB2464 = 672;
  dword_60CB2468 = 1;
  dword_60CB246C = 676;
  dword_60CB2470 = 1;
  dword_60CB2454 = (int)&off_60C0CD4C;
  dword_60CB2474 = (int)&NullState;
  return 1;
}
