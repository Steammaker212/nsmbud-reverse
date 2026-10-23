/* registerProfile_StoneEye_ctor_68EBD4
 * address: 0x6068EBD4   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_StoneEye_ctor_68EBD4()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD687D;
  Profile__ctor(&stru_60CB84AC, StoneEye_ctor, 0xA8u, &v0, &stru_60B07E70, 2);
}
