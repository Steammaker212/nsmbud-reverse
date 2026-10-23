/* registerProfile_castle_doa_RDashfor_5F9690
 * address: 0x605F9690   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_castle_doa_RDashfor_5F9690()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB24A4 = 0;
  dword_60CB24A8 = 0;
  dword_60CB24AC = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD30E0;
  Profile__ctor(&stru_60CB24B0, Actor_castle_doa_RDashfor_build, 0x260u, &v0, &stru_60B05F84, 2);
}
