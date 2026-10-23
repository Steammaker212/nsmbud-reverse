/* registerProfile_haipamakusu_82F178
 * address: 0x6082F178   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_haipamakusu_82F178()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AE4E24;
  Profile__ctor(&stru_60CC6FB8, Actor_haipamakusu_build, 0x242u, v0, &stru_60B0E044, 0);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AE4E40;
  Profile__ctor(&stru_60CC6FD0, Actor_haipamakusu_build, 0x243u, v0, &stru_60B0E044, 0);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AE4E5C;
  Profile__ctor(&stru_60CC6FE8, Actor_haipamakusu_build, 0x246u, v0, &stru_60B0E044, 0);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AE4E84;
  Profile__ctor(&stru_60CC7000, Actor_haipamakusu_build, 0x247u, v0, &stru_60B0E044, 0);
}
