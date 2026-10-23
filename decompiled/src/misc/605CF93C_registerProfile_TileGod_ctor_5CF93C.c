/* registerProfile_TileGod_ctor_5CF93C
 * address: 0x605CF93C   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_TileGod_ctor_5CF93C()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD2A0F;
  Profile__ctor(&stru_60CB10C4, TileGod_ctor, 0x2EDu, v0, &stru_60B05878, 4);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD2A28;
  Profile__ctor(&stru_60CB10DC, TileGod_ctor, 0x2EEu, v0, &stru_60B05878, 4);
}
