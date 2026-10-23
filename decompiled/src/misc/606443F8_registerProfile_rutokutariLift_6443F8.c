/* registerProfile_rutokutariLift_6443F8
 * address: 0x606443F8   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_rutokutariLift_6443F8()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB5B50[0] = 0;
  dword_60CB5B54 = 0;
  unk_60CB5B58 = 0;
  unk_60CB5B5C = 0x40000000;
  unk_60CB5B60 = -1073741824;
  unk_60CB5B64 = 0x80000000;
  dword_60CB5B68 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD5188;
  Profile__ctor(&stru_60CB5B2C, Actor_rutokutariLift_build, 0x16Bu, &v0, &stru_60B07450, 2);
}
