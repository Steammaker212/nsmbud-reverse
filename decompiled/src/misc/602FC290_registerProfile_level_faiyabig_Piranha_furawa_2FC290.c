/* registerProfile_level_faiyabig_Piranha_furawa_2FC290
 * address: 0x602FC290   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_level_faiyabig_Piranha_furawa_2FC290()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C92AA0 = 0;
  dword_60C92AA4 = 0;
  dword_60C92AA8 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC41CE;
  Profile__ctor(&stru_60C92AAC, Actor_level_faiyabig_Piranha_furawa_build, 0x1F2u, &v0, &stru_60AFEF48, 18);
}
