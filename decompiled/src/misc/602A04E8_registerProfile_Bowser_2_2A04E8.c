/* registerProfile_Bowser_2_2A04E8
 * address: 0x602A04E8   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_Bowser_2_2A04E8())()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C901FC = 0;
  dword_60C90200 = 0;
  dword_60C90204 = 0;
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC3460;
  Profile__ctor(&stru_60C90208, Actor_Bowser_2_build, 0x301u, v1, &stru_60AFE33C, 2);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC3470;
  Profile__ctor(&stru_60C90220, Actor_Bowser_2_build, 0x302u, v1, &stru_60AFE360, 2);
  dword_60C9023C = CurrentStateID + 1;
  dword_60C90238 = (int)&off_60BE23F4;
  dword_60C90240 = (int)nullsub_3184;
  dword_60C90244 = 0;
  dword_60C90248 = (int)nullsub_3185;
  dword_60C9024C = 0;
  dword_60C90250 = (int)nullsub_3186;
  dword_60C90254 = 0;
  CurrentStateID += 2;
  dword_60C9025C = CurrentStateID;
  dword_60C90258 = (int)&off_60BE23F4;
  dword_60C90260 = (int)sub_6029F204;
  dword_60C90264 = 0;
  dword_60C90268 = (int)sub_6029F214;
  dword_60C9026C = 0;
  dword_60C90270 = (int)nullsub_3187;
  dword_60C90274 = 0;
  return nullsub_3187;
}
