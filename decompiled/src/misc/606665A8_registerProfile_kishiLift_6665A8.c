/* registerProfile_kishiLift_6665A8
 * address: 0x606665A8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kishiLift_6665A8()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD5BE6;
  Profile__ctor(&stru_60CB6BD4, Actor_kishiLift_build, 0xD7u, &v0, &stru_60B07950, 2);
}
