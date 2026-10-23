/* registerProfile_RDash24exclusive_moai_ki_690B28
 * address: 0x60690B28   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_RDash24exclusive_moai_ki_690B28()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD68FD;
  Profile__ctor(&stru_60CB8FD0, Actor_RDash24exclusive_moai_ki_build, 0xABu, &v0, &stru_60B07E94, 2);
}
