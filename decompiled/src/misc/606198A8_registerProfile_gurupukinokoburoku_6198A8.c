/* registerProfile_gurupukinokoburoku_6198A8
 * address: 0x606198A8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_gurupukinokoburoku_6198A8()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD3B4B;
  Profile__ctor(&stru_60CB340C, Actor_gurupukinokoburoku_build, 0x5Eu, &v0, &stru_60B06688, 2);
}
