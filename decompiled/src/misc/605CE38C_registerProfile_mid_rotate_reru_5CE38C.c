/* registerProfile_mid_rotate_reru_5CE38C
 * address: 0x605CE38C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_mid_rotate_reru_5CE38C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD29A6;
  Profile__ctor(&stru_60CB105C, Actor_mid_rotate_reru_build, 0x2Au, &v0, &stru_60B0580C, 0);
}
