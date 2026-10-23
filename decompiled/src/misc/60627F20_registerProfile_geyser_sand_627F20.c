/* registerProfile_geyser_sand_627F20
 * address: 0x60627F20   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_geyser_sand_627F20())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD3EEB;
  Profile__ctor(&stru_60CB3B1C, Actor_geyser_sand_build, 0x79u, &v1, &stru_60B06934, 0);
  dword_60CB3B38 = CurrentStateID + 1;
  dword_60CB3B34 = (int)&off_60C11E0C;
  dword_60CB3B3C = (int)sub_606250C8;
  dword_60CB3B40 = 0;
  dword_60CB3B44 = (int)sub_606250D4;
  dword_60CB3B48 = 0;
  dword_60CB3B4C = (int)nullsub_4936;
  dword_60CB3B50 = 0;
  stru_60CB3B54.vtable = &off_60C11E0C;
  stru_60CB3B54.id = CurrentStateID + 2;
  dword_60CB3B5C = (int)SE_AMB_SANDPILLAR_SIGN_ref_625120;
  dword_60CB3B60 = 0;
  dword_60CB3B64 = (int)j_SE_AMB_SANDPILLAR_SIGN_ref_6252E8;
  dword_60CB3B68 = 0;
  dword_60CB3B6C = (int)sub_60625298;
  dword_60CB3B70 = 0;
  unk_60CB3B74 = &off_60C11E0C;
  unk_60CB3B78 = CurrentStateID + 3;
  dword_60CB3B7C = (int)sub_6062529C;
  dword_60CB3B80 = 0;
  dword_60CB3B84 = (int)SE_AMB_SANDPILLAR_SIGN_ref_6252E8;
  dword_60CB3B88 = 0;
  dword_60CB3B8C = (int)&loc_6062545C;
  dword_60CB3B90 = 0;
  stru_60CB3B94.vtable = &off_60C11E0C;
  stru_60CB3B94.id = CurrentStateID + 4;
  dword_60CB3B9C = (int)sub_60625548;
  dword_60CB3BA0 = 0;
  dword_60CB3BA4 = (int)SE_AMB_SANDPILLAR_SPOUT_ref;
  dword_60CB3BA8 = 0;
  dword_60CB3BAC = (int)nullsub_4937;
  dword_60CB3BB0 = 0;
  stru_60CB3BB4.vtable = &off_60C11E0C;
  stru_60CB3BB4.id = CurrentStateID + 5;
  dword_60CB3BBC = (int)sub_60625890;
  dword_60CB3BC0 = 0;
  dword_60CB3BC4 = (int)SE_AMB_SANDPILLAR_SPOUT_ref_2;
  dword_60CB3BC8 = 0;
  dword_60CB3BCC = (int)nullsub_4938;
  dword_60CB3BD0 = 0;
  CurrentStateID += 6;
  dword_60CB3BD8 = CurrentStateID;
  dword_60CB3BD4 = (int)&off_60C11E0C;
  dword_60CB3BDC = (int)sandpillar_end_ref;
  dword_60CB3BE0 = 0;
  dword_60CB3BE4 = (int)&loc_60625C18;
  dword_60CB3BE8 = 0;
  dword_60CB3BEC = (int)nullsub_4939;
  dword_60CB3BF0 = 0;
  return nullsub_4939;
}
