/* registerProfile_pengin_46B98C
 * address: 0x6046B98C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_pengin_46B98C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC9947;
  Profile__ctor(&stru_60C9D54C, Actor_pengin_build, 0x254u, &v0, &stru_60B027DC, 16406);
}
