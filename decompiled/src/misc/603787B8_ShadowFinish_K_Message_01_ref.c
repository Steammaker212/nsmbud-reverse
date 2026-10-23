/* ShadowFinish_K_Message_01_ref
 * address: 0x603787B8   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int ShadowFinish_K_Message_01_ref()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C9647C = (int)&sead__SafeStringBase__vtable;
  dword_60C96480 = (int)"ShadowFinish_K_Message_01";
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC5529;
  Profile__ctor(&stru_60C96484, Actor_Quest_for_Toad_build, 0x1CEu, &v1, &stru_60B005FC, 2);
  dword_60C964A0 = CurrentStateID + 1;
  dword_60C9649C = (int)&off_60BF13B0;
  dword_60C964A4 = (int)sub_60378048;
  dword_60C964A8 = 0;
  dword_60C964AC = (int)nullsub_3444;
  dword_60C964B0 = 0;
  dword_60C964B4 = (int)nullsub_3445;
  dword_60C964B8 = 0;
  dword_60C964C0 = CurrentStateID + 2;
  dword_60C964BC = (int)&off_60BF13B0;
  dword_60C964C4 = (int)sub_603780A0;
  dword_60C964C8 = 0;
  dword_60C964CC = (int)&loc_60378130;
  dword_60C964D0 = 0;
  dword_60C964D4 = (int)nullsub_3446;
  dword_60C964D8 = 0;
  dword_60C964E0 = CurrentStateID + 3;
  dword_60C964DC = (int)&off_60BF13B0;
  dword_60C964E4 = (int)sub_60378190;
  dword_60C964E8 = 0;
  dword_60C964EC = (int)sub_603781B4;
  dword_60C964F0 = 0;
  dword_60C964F4 = (int)nullsub_3447;
  dword_60C964F8 = 0;
  dword_60C96500 = CurrentStateID + 4;
  dword_60C964FC = (int)&off_60BF13B0;
  dword_60C96504 = (int)sub_603781F8;
  dword_60C96508 = 0;
  dword_60C9650C = (int)sub_60378294;
  dword_60C96510 = 0;
  dword_60C96514 = (int)nullsub_3448;
  dword_60C96518 = 0;
  dword_60C96520 = CurrentStateID + 5;
  dword_60C9651C = (int)&off_60BF13B0;
  dword_60C96524 = (int)SE_VOC_KINOPIO_LALA_ref;
  dword_60C96528 = 0;
  dword_60C9652C = (int)sub_6037835C;
  dword_60C96530 = 0;
  dword_60C96534 = (int)nullsub_3449;
  dword_60C96538 = 0;
  CurrentStateID += 6;
  dword_60C96540 = CurrentStateID;
  dword_60C9653C = (int)&off_60BF13B0;
  dword_60C96544 = (int)sub_603783A4;
  dword_60C96548 = 0;
  dword_60C9654C = (int)sub_603783B4;
  dword_60C96550 = 0;
  dword_60C96554 = (int)nullsub_3450;
  dword_60C96558 = 0;
  return 0;
}
