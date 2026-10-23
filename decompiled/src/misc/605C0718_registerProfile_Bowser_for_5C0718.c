/* registerProfile_Bowser_for_5C0718
 * address: 0x605C0718   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_Bowser_for_5C0718())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CB08FC = 0;
  dword_60CB08F8 = 0;
  dword_60CB08F4 = 0;
  dword_60CB08F0 = 0;
  dword_60CB08EC = 0;
  dword_60CB08E8 = 0;
  dword_60CB0900 = 1107296256;
  dword_60CB0904 = -1040187392;
  dword_60CB0908 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD261A;
  Profile__ctor(&stru_60CB090C, Actor_Bowser_for_build, 0x108u, &v1, &stru_60B055AC, 2);
  dword_60CB0928 = CurrentStateID + 1;
  dword_60CB0924 = (int)&off_60C09CCC;
  dword_60CB092C = (int)nullsub_4750;
  dword_60CB0930 = 0;
  dword_60CB0934 = (int)SE_BOSS_KOOPA_FLOOR_BREAK_ref;
  dword_60CB0938 = 0;
  dword_60CB093C = (int)nullsub_4751;
  dword_60CB0940 = 0;
  unk_60CB0944 = &off_60C09CCC;
  unk_60CB0948 = CurrentStateID + 2;
  dword_60CB094C = (int)sub_605BFFF0;
  dword_60CB0950 = 0;
  dword_60CB0954 = (int)sub_605C0000;
  dword_60CB0958 = 0;
  dword_60CB095C = (int)nullsub_4752;
  dword_60CB0960 = 0;
  CurrentStateID += 3;
  dword_60CB0968 = CurrentStateID;
  dword_60CB0964 = (int)&off_60C09CCC;
  dword_60CB096C = (int)sub_605C0054;
  dword_60CB0970 = 0;
  dword_60CB0974 = (int)sub_605C0140;
  dword_60CB0978 = 0;
  dword_60CB097C = (int)nullsub_242;
  dword_60CB0980 = 0;
  return nullsub_242;
}
