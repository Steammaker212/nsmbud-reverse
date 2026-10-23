/* registerProfile_rotate_buroku_atari_658D14
 * address: 0x60658D14   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_rotate_buroku_atari_658D14()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  memset(byte_60CB65A8, 0, sizeof(byte_60CB65A8));
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD58CF;
  Profile__ctor(&stru_60CB65CC, Actor_rotate_buroku_atari_build, 0x98u, &v0, &stru_60B07794, 2);
}
