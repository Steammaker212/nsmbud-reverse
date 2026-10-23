/* registerProfile_faiyafurawa_45E25C
 * address: 0x6045E25C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_faiyafurawa_45E25C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC9872;
  Profile__ctor(&stru_60C9D144, Actor_faiyafurawa_build, 0x250u, &v0, &stru_60B02594, 16406);
}
