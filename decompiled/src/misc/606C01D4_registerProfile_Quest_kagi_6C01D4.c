/* registerProfile_Quest_kagi_6C01D4
 * address: 0x606C01D4   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Quest_kagi_6C01D4()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD77FE;
  Profile__ctor(&stru_60CBA8AC, Actor_Quest_kagi_build, 0x1CDu, &v0, &stru_60B08934, 2);
}
