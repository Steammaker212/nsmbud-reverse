/* registerProfile_Parabeetle_2_6B8FC8
 * address: 0x606B8FC8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Parabeetle_2_6B8FC8()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD75AF;
  Profile__ctor(&stru_60CBA4E8, Actor_Parabeetle_2_build, 0xCFu, &v0, &stru_60B087B0, 514);
}
