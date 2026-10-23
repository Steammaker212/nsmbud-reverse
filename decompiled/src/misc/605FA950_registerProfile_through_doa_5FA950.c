/* registerProfile_through_doa_5FA950
 * address: 0x605FA950   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_through_doa_5FA950()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB2520 = 0;
  dword_60CB2524 = 0;
  dword_60CB2528 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD3187;
  Profile__ctor(&stru_60CB252C, Actor_through_doa_build, 0x25Bu, &v0, &stru_60B05FF0, 2);
}
