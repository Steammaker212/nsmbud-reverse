/* registerProfile_taitoruDemo_mid_Item_4710F0
 * address: 0x604710F0   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_taitoruDemo_mid_Item_4710F0()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  unk_60C9D8B0 = 1146011648;
  unk_60C9D8B4 = -1018691584;
  dword_60C9D8B8 = 1143111680;
  unk_60C9D8BC = 1149009920;
  unk_60C9D8C0 = -1027080192;
  dword_60C9D8C4 = 1143111680;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC99ED;
  Profile__ctor(&stru_60C9D870, Actor_taitoruDemo_mid_Item_build, 0x258u, &v1, &stru_60B028FC, 2);
  dword_60C9D88C = ++CurrentStateID;
  dword_60C9D888 = (int)&off_60BFC8DC;
  dword_60C9D890 = (int)nullsub_3723;
  dword_60C9D894 = 0;
  dword_60C9D898 = (int)&loc_604709D0;
  dword_60C9D89C = 0;
  dword_60C9D8A0 = (int)nullsub_3724;
  dword_60C9D8A4 = 0;
  return &dword_60C9D888;
}
