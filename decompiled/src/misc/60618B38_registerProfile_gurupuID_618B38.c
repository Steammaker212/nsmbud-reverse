/* registerProfile_gurupuID_618B38
 * address: 0x60618B38   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_gurupuID_618B38()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD3B13;
  Profile__ctor(&stru_60CB33CC, Actor_gurupuID_build, 0x11u, &v0, &stru_60B06640, 2);
}
