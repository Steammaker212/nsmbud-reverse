/* registerProfile_Wiggler_2_2D2DCC
 * address: 0x602D2DCC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Wiggler_2_2D2DCC()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C91A90 = 0;
  dword_60C91A94 = 0;
  dword_60C91A98 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC3BA0;
  Profile__ctor(&stru_60C91A9C, Actor_Wiggler_2_build, 0x1FDu, &v0, &stru_60AFEAB4, 18);
}
