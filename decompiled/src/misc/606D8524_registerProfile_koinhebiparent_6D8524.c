/* registerProfile_koinhebiparent_6D8524
 * address: 0x606D8524   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_koinhebiparent_6D8524()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD7E77;
  Profile__ctor(&stru_60CBB784, Actor_koinhebiparent_build, 0x16u, &v0, &stru_60B08E58, 2);
}
