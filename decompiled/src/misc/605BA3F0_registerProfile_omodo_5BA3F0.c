/* registerProfile_omodo_5BA3F0
 * address: 0x605BA3F0   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_omodo_5BA3F0()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60CB0700 = 0;
  dword_60CB0704 = 0;
  dword_60CB0708 = 0;
  dword_60CB070C = (int)&sead__SafeStringBase__vtable;
  dword_60CB0710 = (int)"block_odai";
  dword_60CB0714 = (int)&sead__SafeStringBase__vtable;
  dword_60CB0718 = (int)"coin_edit_batten";
  sub_60000288();
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD2577;
  Profile__ctor(&stru_60CB0620, Actor_omodo_build, 0xB6u, &v1, &stru_60B054CC, 2);
  dword_60CB063C = CurrentStateID + 1;
  dword_60CB0638 = (int)&off_60C09804;
  dword_60CB0640 = (int)sub_605BA788;
  dword_60CB0644 = 0;
  dword_60CB0648 = (int)sub_605BA834;
  dword_60CB064C = 0;
  dword_60CB0650 = (int)nullsub_240;
  dword_60CB0654 = 0;
  unk_60CB0658 = &off_60C09804;
  unk_60CB065C = CurrentStateID + 2;
  dword_60CB0660 = (int)sub_605BA8A8;
  dword_60CB0664 = 0;
  dword_60CB0668 = (int)sub_605BA954;
  dword_60CB066C = 0;
  dword_60CB0670 = (int)nullsub_4737;
  dword_60CB0674 = 0;
  unk_60CB0678 = &off_60C09804;
  unk_60CB067C = CurrentStateID + 3;
  dword_60CB0680 = (int)nullsub_4738;
  dword_60CB0684 = 0;
  dword_60CB0688 = (int)sub_605BA9F0;
  dword_60CB068C = 0;
  dword_60CB0690 = (int)nullsub_4739;
  dword_60CB0694 = 0;
  unk_60CB0698 = &off_60C09804;
  unk_60CB069C = CurrentStateID + 4;
  dword_60CB06A0 = (int)sub_605BAA9C;
  dword_60CB06A4 = 0;
  dword_60CB06A8 = (int)sub_605BAB48;
  dword_60CB06AC = 0;
  dword_60CB06B0 = (int)nullsub_4740;
  dword_60CB06B4 = 0;
  unk_60CB06B8 = &off_60C09804;
  unk_60CB06BC = CurrentStateID + 5;
  CurrentStateID += 6;
  dword_60CB06DC = CurrentStateID;
  dword_60CB06C0 = (int)nullsub_4741;
  dword_60CB06D8 = (int)&off_60C09804;
  dword_60CB06C4 = 0;
  dword_60CB06E0 = (int)sub_605BACA4;
  dword_60CB06C8 = (int)sub_605BAC0C;
  dword_60CB06E4 = 0;
  dword_60CB06CC = 0;
  dword_60CB06E8 = (int)sub_605BACE8;
  dword_60CB06D0 = (int)nullsub_4742;
  dword_60CB06D4 = 0;
  dword_60CB06EC = 0;
  dword_60CB06F0 = (int)nullsub_241;
  dword_60CB06F4 = 0;
  return &dword_60CB06D8;
}
