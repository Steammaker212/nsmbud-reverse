/* registerProfile_parentchild_obuje_child_fort_rock_RDashfor_6AD218
 * address: 0x606AD218   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_parentchild_obuje_child_fort_rock_RDashfor_6AD218()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD741E;
  Profile__ctor(&stru_60CBA10C, Actor_parentchild_obuje_child_fort_rock_RDashfor_build, 0x48u, &v0, &stru_60B085D8, 2);
}
