/* registerProfile_moai_ki_6906F0
 * address: 0x606906F0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_moai_ki_6906F0()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD68E4;
  Profile__ctor(&stru_60CB8FB0, Actor_moai_ki_build, 0xAAu, &v0, &stru_60B07E94, 2);
}
