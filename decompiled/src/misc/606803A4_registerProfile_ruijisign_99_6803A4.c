/* registerProfile_ruijisign_99_6803A4
 * address: 0x606803A4   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_ruijisign_99_6803A4()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD63F9;
  Profile__ctor(&stru_60CB80B8, Actor_ruijisign_99_build, 0x2E8u, v0, &stru_60B07D44, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD641B;
  Profile__ctor(&stru_60CB80D0, Actor_ruijisign_99_build, 0x2E9u, v0, &stru_60B07D44, 2);
}
