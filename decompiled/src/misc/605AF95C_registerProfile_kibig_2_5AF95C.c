/* registerProfile_kibig_2_5AF95C
 * address: 0x605AF95C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kibig_2_5AF95C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD23C7;
  Profile__ctor(&stru_60CB02D8, Actor_kibig_2_build, 0x238u, &v0, &stru_60B05200, 2);
}
