/* registerProfile_kishikeronpa_3D08EC
 * address: 0x603D08EC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kishikeronpa_3D08EC()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C98C94 = 0;
  dword_60C98C98 = 0;
  dword_60C98C9C = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC5F3F;
  Profile__ctor(&stru_60C98CA0, Actor_kishikeronpa_build, 0x230u, &v0, &stru_60B01128, 2);
}
