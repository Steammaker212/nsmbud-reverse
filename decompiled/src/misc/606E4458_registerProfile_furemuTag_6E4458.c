/* registerProfile_furemuTag_6E4458
 * address: 0x606E4458   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_furemuTag_6E4458()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD818A;
  Profile__ctor(&stru_60CBBF20, Actor_furemuTag_build, 0x31Bu, &v0, &stru_60B09124, 0);
}
