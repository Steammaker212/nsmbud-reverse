/* registerProfile_sub_6082EB10_82ECF0
 * address: 0x6082ECF0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_sub_6082EB10_82ECF0()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AE4E0E;
  Profile__ctor(&stru_60CC6F90, sub_6082EB10, 0x241u, &v0, &stru_60B0E020, 0);
}
