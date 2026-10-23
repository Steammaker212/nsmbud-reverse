/* registerProfile_level_hatenaburoku_56A14C
 * address: 0x6056A14C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_level_hatenaburoku_56A14C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD15BD;
  Profile__ctor(&stru_60CAE608, Actor_level_hatenaburoku_build, 0x133u, &v0, &stru_60B042D4, 4098);
}
