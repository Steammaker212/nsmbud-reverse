/* registerProfile_parentchild_obuje_child_rock_6AA380
 * address: 0x606AA380   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_parentchild_obuje_child_rock_6AA380()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD72A7;
  Profile__ctor(&stru_60CB9DE0, Actor_parentchild_obuje_child_rock_build, 0x3Eu, &v0, &stru_60B08520, 0);
}
