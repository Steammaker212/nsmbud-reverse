/* registerProfile_oke_ruroom_645E94
 * address: 0x60645E94   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_oke_ruroom_645E94()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD5477;
  Profile__ctor(&stru_60CB5BB4, Actor_oke_ruroom_build, 0xA1u, &v0, &stru_60B07474, 2);
}
