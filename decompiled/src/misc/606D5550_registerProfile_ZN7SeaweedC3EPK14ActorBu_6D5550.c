/* registerProfile_ZN7SeaweedC3EPK14ActorBu_6D5550
 * address: 0x606D5550   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_ZN7SeaweedC3EPK14ActorBu_6D5550()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD7E35;
  Profile__ctor(&stru_60CBB640, Seaweed__ctor, 0x25Au, &v1, &stru_60B08DAC, 0);
  *result = &off_60C1E034;
  return result;
}
