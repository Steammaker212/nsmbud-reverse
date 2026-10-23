/* registerProfile_tariporigon_for_2_6A2FF4
 * address: 0x606A2FF4   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_tariporigon_for_2_6A2FF4()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD6F74;
  Profile__ctor(&stru_60CB9A00, Actor_tariporigon_for_2_build, 0x38u, &v0, &stru_60B083CC, 0);
}
