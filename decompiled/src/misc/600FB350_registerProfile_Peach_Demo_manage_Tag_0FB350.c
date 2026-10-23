/* registerProfile_Peach_Demo_manage_Tag_0FB350
 * address: 0x600FB350   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_Peach_Demo_manage_Tag_0FB350()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABDF75;
  Profile__ctor(&stru_60C85C48, Actor_Peach_Demo_manage_Tag_build, 0x2B5u, &v2, &stru_60AF60E4, 0);
  *v0 = &off_60BCF120;
  dword_60C85C64 = ++CurrentStateID;
  dword_60C85C60 = (int)&off_60BCF1F4;
  dword_60C85C68 = (int)sub_600F91D8;
  dword_60C85C6C = 0;
  dword_60C85C70 = (int)&loc_600F9484;
  dword_60C85C74 = 0;
  dword_60C85C78 = (int)nullsub_2779;
  dword_60C85C7C = 0;
  return &dword_60C85C60;
}
