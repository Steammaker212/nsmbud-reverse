/* registerProfile_mamemariofor_OBJpipe_4_69C834
 * address: 0x6069C834   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_mamemariofor_OBJpipe_4_69C834()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD6CC6;
  Profile__ctor(&stru_60CB9690, Actor_mamemariofor_OBJpipe_4_build, 0x84u, &v0, &stru_60B080E8, 2);
}
