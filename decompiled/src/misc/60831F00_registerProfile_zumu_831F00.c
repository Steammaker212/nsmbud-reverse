/* registerProfile_zumu_831F00
 * address: 0x60831F00   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_zumu_831F00()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AE4F97;
  Profile__ctor(&stru_60CC7238, Actor_zumu_build, 0x23Fu, &v0, &stru_60B0E190, 0);
}
