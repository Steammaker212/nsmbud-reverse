/* registerProfile_NEXTGOTOburoku_69898C
 * address: 0x6069898C   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_NEXTGOTOburoku_69898C())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CB93AC = 0;
  dword_60CB93B0 = 0;
  dword_60CB93B4 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD6B03;
  Profile__ctor(&stru_60CB93B8, Actor_NEXTGOTOburoku_build, 0x2ECu, &v1, &stru_60B07F80, 0);
  dword_60CB93D4 = CurrentStateID + 1;
  dword_60CB93D0 = (int)&off_60C17F10;
  dword_60CB93D8 = (int)nullsub_5160;
  dword_60CB93DC = 0;
  dword_60CB93E0 = (int)sub_60697BE8;
  dword_60CB93E4 = 0;
  dword_60CB93E8 = (int)nullsub_5161;
  dword_60CB93EC = 0;
  unk_60CB93F0 = &off_60C17F10;
  unk_60CB93F4 = CurrentStateID + 2;
  dword_60CB93F8 = (int)sub_60697F8C;
  dword_60CB93FC = 0;
  dword_60CB9400 = (int)sub_60697FC0;
  dword_60CB9404 = 0;
  dword_60CB9408 = (int)nullsub_5162;
  dword_60CB940C = 0;
  CurrentStateID += 3;
  dword_60CB9414 = CurrentStateID;
  dword_60CB9410 = (int)&off_60C17F10;
  dword_60CB9418 = (int)sub_60698090;
  dword_60CB941C = 0;
  dword_60CB9420 = (int)sub_606980C4;
  dword_60CB9424 = 0;
  dword_60CB9428 = (int)nullsub_5163;
  dword_60CB942C = 0;
  return nullsub_5163;
}
