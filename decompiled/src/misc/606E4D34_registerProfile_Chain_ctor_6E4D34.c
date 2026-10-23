/* registerProfile_Chain_ctor_6E4D34
 * address: 0x606E4D34   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Chain_ctor_6E4D34()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD81C6;
  Profile__ctor(&stru_60CBBF70, Chain_ctor, 0xEFu, &v0, &stru_60B09190, 2);
}
