/* registerProfile_gatan_2BD200
 * address: 0x602BD200   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_gatan_2BD200()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C91158 = 0;
  dword_60C9115C = 0;
  dword_60C91160 = 0;
  dword_60C91168 = CurrentStateID + 1;
  dword_60C91164 = (int)&off_60BE4C28;
  dword_60C9116C = (int)nullsub_3239;
  dword_60C91170 = 0;
  dword_60C91174 = (int)sub_602BC230;
  dword_60C91178 = 0;
  dword_60C9117C = (int)nullsub_3240;
  dword_60C91180 = 0;
  CurrentStateID += 2;
  dword_60C91188 = CurrentStateID;
  dword_60C91184 = (int)&off_60BE4C28;
  dword_60C9118C = (int)sub_602BC26C;
  dword_60C91190 = 0;
  dword_60C91194 = (int)sub_602BC2F8;
  dword_60C91198 = 0;
  dword_60C9119C = (int)nullsub_3241;
  dword_60C911A0 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC3A1E;
  Profile__ctor(&stru_60C911A4, Actor_gatan_build, 0x17Bu, &v0, &stru_60AFE748, 2);
}
