/* registerProfile_oke_doa_5FB044
 * address: 0x605FB044   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_oke_doa_5FB044()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB2544 = 0;
  dword_60CB2548 = 0;
  dword_60CB254C = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD31A1;
  Profile__ctor(&stru_60CB2550, Actor_oke_doa_build, 0x25Cu, &v0, &stru_60B06014, 2);
}
