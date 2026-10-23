/* registerProfile_underwater_efekutofiruta_RDash_6F333C
 * address: 0x606F333C   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_underwater_efekutofiruta_RDash_6F333C()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD849A;
  Profile__ctor(&stru_60CBC324, Actor_underwater_efekutofiruta_RDash_build, 0x344u, v0, &stru_60B094C8, 0);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD84C2;
  Profile__ctor(&stru_60CBC33C, Actor_underwater_efekutofiruta_RDash_build, 0x345u, v0, &stru_60B094C8, 0);
}
