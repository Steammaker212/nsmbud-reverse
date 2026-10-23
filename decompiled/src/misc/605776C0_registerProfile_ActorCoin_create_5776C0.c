/* registerProfile_ActorCoin_create_5776C0
 * address: 0x605776C0   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_ActorCoin_create_5776C0()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = "アクターコイン";
  Profile__ctor(&stru_60CAEC0C, ActorCoin_create, 0x18Bu, v0, &stru_60B046B8, 8194);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = "アクターコインＲＤＡＳＨ用";
  Profile__ctor(&stru_60CAEC24, ActorCoin_create, 0x18Cu, v0, &stru_60B046DC, 8194);
}
