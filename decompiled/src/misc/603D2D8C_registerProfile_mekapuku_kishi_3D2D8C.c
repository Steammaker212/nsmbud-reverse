/* registerProfile_mekapuku_kishi_3D2D8C
 * address: 0x603D2D8C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_mekapuku_kishi_3D2D8C()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C98E00 = 0;
  dword_60C98E04 = 0;
  dword_60C98E08 = 0;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC601A;
  Profile__ctor(&stru_60C98E0C, Actor_mekapuku_kishi_build, 0x221u, v0, &stru_60B011B8, 32);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC6035;
  Profile__ctor(&stru_60C98E24, Actor_mekapuku_kishi_build, 0x222u, v0, &stru_60B011B8, 32);
}
