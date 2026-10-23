/* registerProfile_kun_82E044
 * address: 0x6082E044   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kun_82E044()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AE4D9B;
  Profile__ctor(&stru_60CC6F10, Actor_kun_build, 0x24Cu, &v0, &stru_60B0DF90, 0);
}
