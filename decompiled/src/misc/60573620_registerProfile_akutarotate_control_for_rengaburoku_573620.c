/* registerProfile_akutarotate_control_for_rengaburoku_573620
 * address: 0x60573620   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_akutarotate_control_for_rengaburoku_573620()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD1933;
  Profile__ctor(&stru_60CAEA60, Actor_akutarotate_control_for_rengaburoku_build, 0x132u, &v0, &stru_60B045BC, 6);
}
