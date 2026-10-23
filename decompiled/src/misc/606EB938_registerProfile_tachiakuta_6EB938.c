/* registerProfile_tachiakuta_6EB938
 * address: 0x606EB938   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_tachiakuta_6EB938()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD82F4;
  Profile__ctor(&stru_60CBC01C, Actor_tachiakuta_build, 0x352u, &v0, &stru_60B09220, 0);
}
