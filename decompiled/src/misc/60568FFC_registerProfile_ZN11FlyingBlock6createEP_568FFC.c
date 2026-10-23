/* registerProfile_ZN11FlyingBlock6createEP_568FFC
 * address: 0x60568FFC   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_ZN11FlyingBlock6createEP_568FFC()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD14EC;
  Profile__ctor(&stru_60CAE554, FlyingBlock__create, 0x121u, v0, &stru_60B04268, 4098);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD150E;
  Profile__ctor(&stru_60CAE56C, FlyingBlock__create, 0x122u, v0, &stru_60B04268, 4098);
}
