/* registerProfile_chibiyoshi_3_5E7718
 * address: 0x605E7718   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_chibiyoshi_3_5E7718())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD2C10;
  Profile__ctor(&stru_60CB1B48, Actor_chibiyoshi_3_build, 0x1BEu, &v1, 0, 2);
  unk_60CB1B60 = 1065353216;
  unk_60CB1B64 = -1056964608;
  dword_60CB1B68 = 0;
  dword_60CB1B70 = CurrentStateID + 1;
  dword_60CB1B6C = (int)&off_60C0B60C;
  dword_60CB1B74 = (int)sub_605E6874;
  dword_60CB1B78 = 0;
  dword_60CB1B7C = (int)SE_PLY_CH_YOSHI_EGG_BREAK_ref;
  dword_60CB1B80 = 0;
  dword_60CB1B84 = (int)nullsub_4792;
  dword_60CB1B88 = 0;
  stru_60CB1B8C.vtable = &off_60C0B60C;
  stru_60CB1B8C.id = CurrentStateID + 2;
  dword_60CB1B94 = (int)SE_OBJ_ITEM_APPEAR_ref_5E6A40;
  dword_60CB1B98 = 0;
  dword_60CB1B9C = (int)&loc_605E6B50;
  dword_60CB1BA0 = 0;
  dword_60CB1BA4 = (int)nullsub_4793;
  dword_60CB1BA8 = 0;
  CurrentStateID += 3;
  dword_60CB1BB0 = CurrentStateID;
  dword_60CB1BAC = (int)&off_60C0B60C;
  dword_60CB1BB4 = (int)sub_605E6DA8;
  dword_60CB1BB8 = 0;
  dword_60CB1BBC = (int)sub_605E6E10;
  dword_60CB1BC0 = 0;
  dword_60CB1BC4 = (int)nullsub_4794;
  dword_60CB1BC8 = 0;
  return nullsub_4794;
}
