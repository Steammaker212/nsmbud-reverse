/* registerProfile_special_sukuroruTag_82FF68
 * address: 0x6082FF68   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_special_sukuroruTag_82FF68()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AE4F53;
  Profile__ctor(&stru_60CC70CC, Actor_special_sukuroruTag_build, 0x249u, &v0, &stru_60B0E100, 0);
}
