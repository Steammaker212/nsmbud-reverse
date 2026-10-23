/* registerProfile_shadou_read_Tag_2_8306B4
 * address: 0x608306B4   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_shadou_read_Tag_2_8306B4()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CC70EC = 0;
  dword_60CC70F0 = 0;
  dword_60CC70F4 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AE4DAE;
  Profile__ctor(&stru_60CC70F8, Actor_shadou_read_Tag_2_build, 0x31Cu, &v0, &stru_60B0E124, 0);
}
