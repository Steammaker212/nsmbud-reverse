/* registerProfile_StaffRoll_Manager_2_74D43C
 * address: 0x6074D43C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_StaffRoll_Manager_2_74D43C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD9CD0;
  Profile__ctor(&stru_60CBE974, Actor_StaffRoll_Manager_2_build, 0x23u, &v0, &stru_60B0A5DC, 2);
}
