/* registerProfile_majikuhandoTag_gu_i_686348
 * address: 0x60686348   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_majikuhandoTag_gu_i_686348()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD661F;
  Profile__ctor(&stru_60CB8348, Actor_majikuhandoTag_gu_i_build, 0x1Du, v0, &stru_60B07DBC, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD6641;
  Profile__ctor(&stru_60CB8360, Actor_majikuhandoTag_gu_i_build, 0x1Eu, v0, &stru_60B07DBC, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD6663;
  Profile__ctor(&stru_60CB8378, Actor_majikuhandoTag_gu_i_build, 0x1Fu, v0, &stru_60B07DBC, 2);
}
