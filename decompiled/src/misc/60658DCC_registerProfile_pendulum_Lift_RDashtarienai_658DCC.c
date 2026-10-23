/* registerProfile_pendulum_Lift_RDashtarienai_658DCC
 * address: 0x60658DCC   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_pendulum_Lift_RDashtarienai_658DCC()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  dword_60CB65EC = (int)&sead__SafeStringBase__vtable;
  v1[0].vtable = &sead__SafeStringBase__vtable;
  dword_60CB65F0 = (int)"ziku";
  v1[0].cstr = (char *)&unk_60AD58F9;
  Profile__ctor(&stru_60CB65F4, Actor_pendulum_Lift_RDashtarienai_build, 0x5Fu, v1, &stru_60B077B8, 2);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD590F;
  Profile__ctor(&stru_60CB660C, Actor_pendulum_Lift_RDashtarienai_build, 0x60u, v1, &stru_60B077B8, 2);
  dword_60CB6624 = (int)&sead__SafeStringBase__vtable;
  dword_60CB6628 = (int)"huriko_ue_M";
  dword_60CB662C = 1126694912;
  dword_60CB6630 = (int)&sead__SafeStringBase__vtable;
  dword_60CB6634 = (int)"huriko_ue_L";
  dword_60CB6638 = 1130889216;
  return sub_60000288();
}
