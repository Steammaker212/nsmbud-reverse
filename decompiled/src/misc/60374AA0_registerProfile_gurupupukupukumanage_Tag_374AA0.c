/* registerProfile_gurupupukupukumanage_Tag_374AA0
 * address: 0x60374AA0   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_gurupupukupukumanage_Tag_374AA0()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C962D8 = 0;
  dword_60C962DC = 0;
  dword_60C962E0 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC54B6;
  Profile__ctor(&stru_60C962E4, Actor_gurupupukupukumanage_Tag_build, 0x26u, &v0, &stru_60B004F4, 0);
}
