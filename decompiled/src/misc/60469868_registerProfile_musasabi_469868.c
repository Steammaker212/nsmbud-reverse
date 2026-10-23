/* registerProfile_musasabi_469868
 * address: 0x60469868   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_musasabi_469868()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC9911;
  Profile__ctor(&stru_60C9D4E0, Actor_musasabi_build, 0x256u, &v0, &stru_60B02770, 16406);
}
