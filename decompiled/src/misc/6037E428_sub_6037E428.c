/* sub_6037E428
 * address: 0x6037E428   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *sub_6037E428()
{
  dword_60C967C0 = 0;
  dword_60C967C4 = 0;
  dword_60C967C8 = 0;
  dword_60C967CC = -1073741824;
  dword_60C967D4 = CurrentStateID + 1;
  dword_60C967D0 = (int)&off_60BF2384;
  dword_60C967D8 = (int)sub_6037CDC0;
  dword_60C967DC = 0;
  dword_60C967E0 = (int)sub_6037CDCC;
  dword_60C967E4 = 0;
  dword_60C967E8 = (int)nullsub_3459;
  dword_60C967EC = 0;
  dword_60C967F4 = CurrentStateID + 2;
  dword_60C967F8 = 628;
  dword_60C967FC = 1;
  dword_60C96800 = 632;
  dword_60C96804 = 1;
  dword_60C96808 = 636;
  dword_60C9680C = 1;
  dword_60C967F0 = (int)&off_60BF2398;
  dword_60C96810 = (int)&dword_60C8FCC8;
  *(_DWORD *)algn_60C96818 = CurrentStateID + 3;
  *(_DWORD *)&algn_60C96818[4] = 640;
  dword_60C96820 = 1;
  dword_60C96824 = 644;
  dword_60C96828 = 1;
  dword_60C9682C = 648;
  dword_60C96830 = 1;
  dword_60C96814 = (int)&off_60BF2398;
  dword_60C96834 = (int)&dword_60C8FCEC;
  unk_60C9683C = CurrentStateID + 4;
  unk_60C96840 = 652;
  dword_60C96844 = 1;
  dword_60C96848 = 656;
  dword_60C9684C = 1;
  dword_60C96850 = 660;
  dword_60C96854 = 1;
  dword_60C96838 = (int)&off_60BF2398;
  dword_60C96858 = (int)&dword_60C8FD10;
  unk_60C96860 = CurrentStateID + 5;
  unk_60C96864 = 664;
  dword_60C96868 = 1;
  dword_60C9686C = 668;
  dword_60C96870 = 1;
  dword_60C96874 = 672;
  dword_60C96878 = 1;
  dword_60C9685C = (int)&off_60BF2398;
  dword_60C9687C = (int)&dword_60C8FD34;
  CurrentStateID += 6;
  unk_60C96884 = CurrentStateID;
  unk_60C96888 = 612;
  dword_60C9688C = 1;
  dword_60C96890 = 616;
  dword_60C96894 = 1;
  dword_60C96898 = 620;
  dword_60C9689C = 1;
  dword_60C96880 = (int)&off_60BF2398;
  dword_60C968A0 = (int)&Enemy_StateId_Frozen;
  return &Enemy_StateId_Frozen;
}
