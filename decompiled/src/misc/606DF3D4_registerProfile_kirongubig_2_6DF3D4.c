/* registerProfile_kirongubig_2_6DF3D4
 * address: 0x606DF3D4   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kirongubig_2_6DF3D4()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD7FA4;
  Profile__ctor(&stru_60CBBC94, Actor_kirongubig_2_build, 0x23Au, &v0, &stru_60B09050, 2);
}
