/* registerProfile_level_big_Piranha_furawa_2FCC04
 * address: 0x602FCC04   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_level_big_Piranha_furawa_2FCC04()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C92AD4 = 0;
  dword_60C92AD8 = 0;
  dword_60C92ADC = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC4213;
  Profile__ctor(&stru_60C92AE0, Actor_level_big_Piranha_furawa_build, 0x1F1u, &v0, &stru_60AFEF6C, 18);
}
