/* registerProfile_pentaro_kipipe_3D1200
 * address: 0x603D1200   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_pentaro_kipipe_3D1200()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C98CC0 = 0;
  dword_60C98CC4 = 0;
  dword_60C98CC8 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC5F58;
  Profile__ctor(&stru_60C98CCC, Actor_pentaro_kipipe_build, 0x20Fu, &v0, &stru_60B0114C, 2);
}
