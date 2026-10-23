/* registerProfile_parentchild_obuje_child_2_6AD650
 * address: 0x606AD650   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_parentchild_obuje_child_2_6AD650()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CBA12C = 0;
  dword_60CBA130 = 0;
  dword_60CBA134 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD744A;
  Profile__ctor(&stru_60CBA138, Actor_parentchild_obuje_child_2_build, 0x4Au, &v0, &stru_60B085FC, 2);
}
