/* registerProfile_parentchild_obuje_parent_RDashexclusive_6C41E8
 * address: 0x606C41E8   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_parentchild_obuje_parent_RDashexclusive_6C41E8())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD78FE;
  Profile__ctor(&stru_60CBAA80, Actor_parentchild_obuje_parent_RDashexclusive_build, 0xCu, &v1, &stru_60B08A0C, 0);
  dword_60CBAA9C = CurrentStateID + 1;
  dword_60CBAA98 = (int)&off_60C1C2D0;
  dword_60CBAAA0 = (int)nullsub_5222;
  dword_60CBAAA4 = 0;
  dword_60CBAAA8 = (int)nullsub_5223;
  dword_60CBAAAC = 0;
  dword_60CBAAB0 = (int)nullsub_5224;
  dword_60CBAAB4 = 0;
  stru_60CBAAB8.vtable = &off_60C1C2D0;
  stru_60CBAAB8.id = CurrentStateID + 2;
  dword_60CBAAC0 = (int)nullsub_5225;
  dword_60CBAAC4 = 0;
  dword_60CBAAC8 = (int)nullsub_5226;
  dword_60CBAACC = 0;
  dword_60CBAAD0 = (int)nullsub_5227;
  dword_60CBAAD4 = 0;
  stru_60CBAAD8.vtable = &off_60C1C2D0;
  stru_60CBAAD8.id = CurrentStateID + 3;
  dword_60CBAAE0 = (int)nullsub_5228;
  dword_60CBAAE4 = 0;
  dword_60CBAAE8 = (int)sub_606C3968;
  dword_60CBAAEC = 0;
  dword_60CBAAF0 = (int)nullsub_268;
  dword_60CBAAF4 = 0;
  CurrentStateID += 4;
  dword_60CBAAFC = CurrentStateID;
  dword_60CBAAF8 = (int)&off_60C1C2D0;
  dword_60CBAB00 = (int)nullsub_269;
  dword_60CBAB04 = 0;
  dword_60CBAB08 = (int)sub_606C39A8;
  dword_60CBAB0C = 0;
  dword_60CBAB10 = (int)nullsub_5229;
  dword_60CBAB14 = 0;
  return nullsub_5229;
}
