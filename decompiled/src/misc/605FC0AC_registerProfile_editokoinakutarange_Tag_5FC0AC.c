/* registerProfile_editokoinakutarange_Tag_5FC0AC
 * address: 0x605FC0AC   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_editokoinakutarange_Tag_5FC0AC()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD3245;
  Profile__ctor(&stru_60CB25F4, Actor_editokoinakutarange_Tag_build, 0x353u, &v0, &stru_60B060A4, 0);
}
