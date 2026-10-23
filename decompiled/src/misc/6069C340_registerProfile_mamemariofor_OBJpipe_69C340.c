/* registerProfile_mamemariofor_OBJpipe_69C340
 * address: 0x6069C340   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_mamemariofor_OBJpipe_69C340()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD6C63;
  Profile__ctor(&stru_60CB9648, Actor_mamemariofor_OBJpipe_build, 0x85u, &v0, &stru_60B0807C, 2);
}
