/* registerProfile_monoreruburoku_reru_693E98
 * address: 0x60693E98   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_monoreruburoku_reru_693E98()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD6A34;
  Profile__ctor(&stru_60CB9250, Actor_monoreruburoku_reru_build, 0xFFu, &v0, &stru_60B07F08, 2);
}
