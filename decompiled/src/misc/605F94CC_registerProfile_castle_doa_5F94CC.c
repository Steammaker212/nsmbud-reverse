/* registerProfile_castle_doa_5F94CC
 * address: 0x605F94CC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_castle_doa_5F94CC()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB2480 = 0;
  dword_60CB2484 = 0;
  dword_60CB2488 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD3083;
  Profile__ctor(&stru_60CB248C, Actor_castle_doa_build, 0x25Fu, &v0, &stru_60B05F60, 2);
}
