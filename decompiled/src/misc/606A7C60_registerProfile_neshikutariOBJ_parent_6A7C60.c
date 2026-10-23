/* registerProfile_neshikutariOBJ_parent_6A7C60
 * address: 0x606A7C60   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_neshikutariOBJ_parent_6A7C60()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB9D18[0] = -1102263091;
  dword_60CB9D18[1] = -1110651699;
  dword_60CB9D18[2] = -1106737015;
  dword_60CB9D18[3] = -1115125623;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD7218;
  Profile__ctor(&stru_60CB9D00, Actor_neshikutariOBJ_parent_build, 0x33u, &v0, &stru_60B084FC, 2);
}
