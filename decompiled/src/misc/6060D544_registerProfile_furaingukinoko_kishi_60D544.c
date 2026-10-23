/* registerProfile_furaingukinoko_kishi_60D544
 * address: 0x6060D544   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_furaingukinoko_kishi_60D544()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD3813;
  Profile__ctor(&stru_60CB2E84, Actor_furaingukinoko_kishi_build, 0x268u, &v0, &stru_60B06434, 2);
}
