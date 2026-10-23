/* registerProfile_chibiyoshi_5C68F4
 * address: 0x605C68F4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_chibiyoshi_5C68F4()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB0A60 = 0;
  dword_60CB0A64 = 0;
  dword_60CB0A68 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD28A0;
  Profile__ctor(&stru_60CB0A6C, Actor_chibiyoshi_build, 0x1BFu, &v0, &stru_60B056D0, 6);
}
