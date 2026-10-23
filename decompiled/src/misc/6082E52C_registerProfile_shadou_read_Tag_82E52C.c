/* registerProfile_shadou_read_Tag_82E52C
 * address: 0x6082E52C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_shadou_read_Tag_82E52C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AE4DAE;
  Profile__ctor(&stru_60CC6F30, Actor_shadou_read_Tag_build, 0x1B7u, &v0, &stru_60B0DFB4, 0);
}
