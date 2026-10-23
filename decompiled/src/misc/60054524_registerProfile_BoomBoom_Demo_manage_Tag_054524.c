/* registerProfile_BoomBoom_Demo_manage_Tag_054524
 * address: 0x60054524   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_BoomBoom_Demo_manage_Tag_054524()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8080C = 0;
  dword_60C80810 = 0;
  dword_60C80814 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = "ブンブンデモ管理タグ";
  Profile__ctor(&stru_60C80818, Actor_BoomBoom_Demo_manage_Tag_build, 685u, &v1, &stru_60AF52D8, 0);
  dword_60C80834 = ++CurrentStateID;
  dword_60C80838 = 204;
  dword_60C8083C = 1;
  dword_60C80840 = 208;
  dword_60C80844 = 1;
  dword_60C80848 = 212;
  dword_60C8084C = 1;
  dword_60C80830 = (int)&off_60BC3DD4;
  dword_60C80850 = (int)&unk_60C7F6A0;
  return &dword_60C80830;
}
