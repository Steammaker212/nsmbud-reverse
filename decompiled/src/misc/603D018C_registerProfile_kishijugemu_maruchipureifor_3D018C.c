/* registerProfile_kishijugemu_maruchipureifor_3D018C
 * address: 0x603D018C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kishijugemu_maruchipureifor_3D018C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C98C68 = 0;
  dword_60C98C6C = 0;
  dword_60C98C70 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC5F0F;
  Profile__ctor(&stru_60C98C74, Actor_kishijugemu_maruchipureifor_build, 0x273u, &v0, &stru_60B010F8, 2);
}
