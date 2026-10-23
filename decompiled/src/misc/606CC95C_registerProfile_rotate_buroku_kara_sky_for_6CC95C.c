/* registerProfile_rotate_buroku_kara_sky_for_6CC95C
 * address: 0x606CC95C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_rotate_buroku_kara_sky_for_6CC95C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD7A7A;
  Profile__ctor(&stru_60CBB26C, Actor_rotate_buroku_kara_sky_for_build, 0xA2u, &v0, &stru_60B08B0C, 2);
}
