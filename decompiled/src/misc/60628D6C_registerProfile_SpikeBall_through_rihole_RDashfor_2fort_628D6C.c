/* registerProfile_SpikeBall_through_rihole_RDashfor_2fort_628D6C
 * address: 0x60628D6C   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_SpikeBall_through_rihole_RDashfor_2fort_628D6C()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD3F44;
  Profile__ctor(&stru_60CB3C34, Actor_SpikeBall_through_rihole_RDashfor_2fort_build, 0xBFu, v0, &stru_60B0697C, 0);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD3F5A;
  Profile__ctor(&stru_60CB3C4C, Actor_SpikeBall_through_rihole_RDashfor_2fort_build, 0xC0u, v0, &stru_60B0697C, 0);
}
