/* registerProfile_korekushonkoinhebi_5F728C
 * address: 0x605F728C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_korekushonkoinhebi_5F728C()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD2FDD;
  Profile__ctor(&stru_60CB2378, Actor_korekushonkoinhebi_build, 0x1B2u, &v1, &stru_60B05EF4, 8194);
  dword_60CB2390 = 0x4000000;
  return &dword_60CB2390;
}
