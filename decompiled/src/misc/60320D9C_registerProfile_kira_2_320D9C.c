/* registerProfile_kira_2_320D9C
 * address: 0x60320D9C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_kira_2_320D9C()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C938AC = 0;
  dword_60C938B0 = 0;
  dword_60C938B4 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC4719;
  Profile__ctor(&stru_60C938B8, Actor_kira_2_build, 0x275u, &v2, &stru_60AFF644, 18);
  *v0 = &off_60BEAD4C;
  dword_60C938D4 = ++CurrentStateID;
  dword_60C938D0 = (int)&off_60BEAFE8;
  dword_60C938D8 = (int)sub_6031FDB8;
  dword_60C938DC = 0;
  dword_60C938E0 = (int)SE_EMY_KILLER_CROSS_ref;
  dword_60C938E4 = 0;
  dword_60C938E8 = (int)nullsub_3343;
  dword_60C938EC = 0;
  return &dword_60C938D0;
}
