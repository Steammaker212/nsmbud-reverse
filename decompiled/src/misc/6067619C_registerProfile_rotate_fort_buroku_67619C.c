/* registerProfile_rotate_fort_buroku_67619C
 * address: 0x6067619C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_rotate_fort_buroku_67619C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD61ED;
  Profile__ctor(&stru_60CB7C18, Actor_rotate_fort_buroku_build, 0x96u, &v0, &stru_60B07BF8, 2);
}
