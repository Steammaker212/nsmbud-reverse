/* registerProfile_Quest_for_Toad_2_3CE32C
 * address: 0x603CE32C   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_Quest_for_Toad_2_3CE32C())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC5529;
  Profile__ctor(&stru_60C98B80, Actor_Quest_for_Toad_2_build, 0x1FBu, &v1, &stru_60B0108C, 2);
  dword_60C98B9C = CurrentStateID + 1;
  dword_60C98B98 = (int)&off_60BF7850;
  dword_60C98BA0 = (int)nullsub_3578;
  dword_60C98BA4 = 0;
  dword_60C98BA8 = (int)sub_603CDD04;
  dword_60C98BAC = 0;
  dword_60C98BB0 = (int)nullsub_3579;
  dword_60C98BB4 = 0;
  CurrentStateID += 2;
  dword_60C98BBC = CurrentStateID;
  dword_60C98BB8 = (int)&off_60BF7850;
  dword_60C98BC0 = (int)sub_603CDD30;
  dword_60C98BC4 = 0;
  dword_60C98BC8 = (int)sub_603CDD40;
  dword_60C98BCC = 0;
  dword_60C98BD0 = (int)nullsub_3580;
  dword_60C98BD4 = 0;
  return nullsub_3580;
}
