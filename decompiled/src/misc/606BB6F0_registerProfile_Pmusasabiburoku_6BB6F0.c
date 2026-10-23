/* registerProfile_Pmusasabiburoku_6BB6F0
 * address: 0x606BB6F0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Pmusasabiburoku_6BB6F0()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD7752;
  Profile__ctor(&stru_60CBA5A8, Actor_Pmusasabiburoku_build, 0x11Cu, &v0, &stru_60B0881C, 0);
}
