/* registerProfile_kipipe_faiyaPiranha_furawa_4_294E34
 * address: 0x60294E34   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kipipe_faiyaPiranha_furawa_4_294E34()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C8FB08 = 0;
  dword_60C8FB0C = 0;
  dword_60C8FB10 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC319B;
  Profile__ctor(&stru_60C8FB14, Actor_kipipe_faiyaPiranha_furawa_4_build, 0x1E3u, &v0, &stru_60AFE034, 18);
}
