/* registerProfile_BossKK_Demo_manage_Tag_03290C
 * address: 0x6003290C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_BossKK_Demo_manage_Tag_03290C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C7FC0C = ++CurrentStateID;
  dword_60C7FC10 = 204;
  dword_60C7FC14 = 1;
  dword_60C7FC18 = 208;
  dword_60C7FC1C = 1;
  dword_60C7FC20 = 212;
  dword_60C7FC24 = 1;
  dword_60C7FC08 = (int)&off_60BC2118;
  dword_60C7FC28 = (int)&unk_60C7F6A0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = "ボスK.K.デモ管理タグ";
  Profile__ctor(&stru_60C7FC2C, Actor_BossKK_Demo_manage_Tag_build, 0x2B1u, &v0, &stru_60AF51B0, 0);
}
