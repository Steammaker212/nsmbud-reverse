/* registerProfile_Player_create_797FC4
 * address: 0x60797FC4   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Player_create_797FC4()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60ADBA71;
  Profile__ctor(&stru_60CC4948, Player_create, 0x1BCu, &v0, &stru_60B0C298, 0);
}
