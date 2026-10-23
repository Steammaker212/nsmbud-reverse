/* registerProfile_akutakinokoLift_koin_582290
 * address: 0x60582290   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_akutakinokoLift_koin_582290()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = "アクターキノコリフト追従コイン";
  Profile__ctor(&stru_60CAF138, Actor_akutakinokoLift_koin_build, 0x1A3u, &v0, &stru_60B049C0, 8196);
}
