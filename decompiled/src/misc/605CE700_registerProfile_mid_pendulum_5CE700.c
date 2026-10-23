/* registerProfile_mid_pendulum_5CE700
 * address: 0x605CE700   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_mid_pendulum_5CE700()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD29CE;
  Profile__ctor(&stru_60CB1084, Actor_mid_pendulum_build, 0x27u, &v0, &stru_60B05830, 0);
}
