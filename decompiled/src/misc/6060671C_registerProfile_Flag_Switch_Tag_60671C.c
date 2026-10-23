/* registerProfile_Flag_Switch_Tag_60671C
 * address: 0x6060671C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Flag_Switch_Tag_60671C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD350F;
  Profile__ctor(&stru_60CB2AB8, Actor_Flag_Switch_Tag_build, 0, &v0, &stru_60B06318, 0);
}
