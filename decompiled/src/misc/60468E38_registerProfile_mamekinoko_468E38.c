/* registerProfile_mamekinoko_468E38
 * address: 0x60468E38   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_mamekinoko_468E38()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC9901;
  Profile__ctor(&stru_60C9D4C0, Actor_mamekinoko_build, 0x251u, &v0, &stru_60B02708, 16406);
}
