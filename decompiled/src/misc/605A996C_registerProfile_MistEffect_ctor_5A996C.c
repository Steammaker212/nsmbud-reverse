/* registerProfile_MistEffect_ctor_5A996C
 * address: 0x605A996C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_MistEffect_ctor_5A996C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD2239;
  Profile__ctor(&stru_60CB00FC, MistEffect_ctor, 0x59u, &v0, &stru_60B04F80, 0);
}
