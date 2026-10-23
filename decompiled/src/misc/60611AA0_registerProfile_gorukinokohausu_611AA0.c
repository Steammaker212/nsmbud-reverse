/* registerProfile_gorukinokohausu_611AA0
 * address: 0x60611AA0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_gorukinokohausu_611AA0()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD3980;
  Profile__ctor(&stru_60CB30DC, Actor_gorukinokohausu_build, 0x343u, &v0, &stru_60B064FC, 2);
}
