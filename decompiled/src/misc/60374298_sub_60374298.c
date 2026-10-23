/* sub_60374298
 * address: 0x60374298   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *sub_60374298()
{
  dword_60C961F4 = 0;
  dword_60C961F8 = 0;
  dword_60C961FC = 0;
  dword_60C96204 = CurrentStateID + 1;
  dword_60C96208 = 640;
  dword_60C9620C = 1;
  dword_60C96210 = 644;
  dword_60C96214 = 1;
  dword_60C96218 = 648;
  dword_60C9621C = 1;
  dword_60C96200 = (int)&off_60BF0EB0;
  dword_60C96220 = (int)&NullState;
  dword_60C96230 = 1;
  dword_60C96234 = 656;
  dword_60C96238 = 1;
  dword_60C9623C = 660;
  dword_60C96240 = 1;
  dword_60C96224 = (int)&off_60BF0EB0;
  *(_DWORD *)algn_60C96228 = CurrentStateID + 2;
  *(_DWORD *)&algn_60C96228[4] = 652;
  dword_60C96244 = (int)&NullState;
  dword_60C96254 = 1;
  dword_60C96258 = 668;
  dword_60C9625C = 1;
  dword_60C96260 = 672;
  dword_60C96264 = 1;
  dword_60C96248 = (int)&off_60BF0EB0;
  unk_60C9624C = CurrentStateID + 3;
  unk_60C96250 = 664;
  dword_60C96268 = (int)&NullState;
  dword_60C96278 = 1;
  dword_60C9627C = 680;
  dword_60C96280 = 1;
  dword_60C96284 = 684;
  dword_60C96288 = 1;
  dword_60C9626C = (int)&off_60BF0EB0;
  unk_60C96270 = CurrentStateID + 4;
  unk_60C96274 = 676;
  dword_60C9628C = (int)&NullState;
  dword_60C9629C = 1;
  dword_60C962A0 = 692;
  dword_60C962A4 = 1;
  dword_60C962A8 = 696;
  dword_60C962AC = 1;
  dword_60C96290 = (int)&off_60BF0EB0;
  unk_60C96294 = CurrentStateID + 5;
  unk_60C96298 = 688;
  dword_60C962B0 = (int)&NullState;
  CurrentStateID += 6;
  *(_DWORD *)algn_60C962B8 = CurrentStateID;
  *(_DWORD *)&algn_60C962B8[4] = 456;
  dword_60C962C0 = 1;
  dword_60C962C4 = 460;
  dword_60C962C8 = 1;
  dword_60C962CC = 464;
  dword_60C962D0 = 1;
  dword_60C962B4 = (int)&off_60BF0EB0;
  dword_60C962D4 = (int)&stru_60C90710;
  return &stru_60C90710;
}
