/* registerProfile_rotate_fort_burokume_676540
 * address: 0x60676540   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_rotate_fort_burokume_676540()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD6206;
  Profile__ctor(&stru_60CB7C38, Actor_rotate_fort_burokume_build, 0x321u, &v0, &stru_60B07C1C, 2);
}
