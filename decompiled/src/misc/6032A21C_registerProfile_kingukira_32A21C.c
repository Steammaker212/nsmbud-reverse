/* registerProfile_kingukira_32A21C
 * address: 0x6032A21C   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kingukira_32A21C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C93B94 = 0;
  dword_60C93B98 = 0;
  dword_60C93B9C = 0;
  dword_60C93BA4 = CurrentStateID + 1;
  dword_60C93BA0 = (int)&off_60BEB770;
  dword_60C93BA8 = (int)sub_60327410;
  dword_60C93BAC = 0;
  dword_60C93BB0 = (int)SE_EMY_KG_KILLER_SHOT_ref;
  dword_60C93BB4 = 0;
  dword_60C93BB8 = (int)nullsub_3348;
  dword_60C93BBC = 0;
  CurrentStateID += 2;
  dword_60C93BC4 = CurrentStateID;
  dword_60C93BC0 = (int)&off_60BEB770;
  dword_60C93BC8 = (int)sub_603274F4;
  dword_60C93BCC = 0;
  dword_60C93BD0 = (int)SE_EMY_KG_KILLER_FLY_ref;
  dword_60C93BD4 = 0;
  dword_60C93BD8 = (int)nullsub_3349;
  dword_60C93BDC = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC49A2;
  Profile__ctor(&stru_60C93BE0, Actor_kingukira_build, 0x279u, &v0, &stru_60AFF790, 18);
}
