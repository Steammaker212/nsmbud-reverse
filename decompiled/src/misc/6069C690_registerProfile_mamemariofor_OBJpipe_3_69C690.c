/* registerProfile_mamemariofor_OBJpipe_3_69C690
 * address: 0x6069C690   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_mamemariofor_OBJpipe_3_69C690()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD6CA5;
  Profile__ctor(&stru_60CB9678, Actor_mamemariofor_OBJpipe_3_build, 0x82u, &v0, &stru_60B080C4, 2);
}
