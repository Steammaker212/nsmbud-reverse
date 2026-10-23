/* registerProfile_rotate_control_for_through_koin_58A6EC
 * address: 0x6058A6EC   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_rotate_control_for_through_koin_58A6EC()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = "アクター通過コイン";
  Profile__ctor(&stru_60CAF2C8, Actor_rotate_control_for_through_koin_build, 0x19Bu, v1, &stru_60B04ABC, 8194);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = "回転制御君用通過コイン";
  Profile__ctor(&stru_60CAF2E0, Actor_rotate_control_for_through_koin_build, 0x19Eu, v1, &stru_60B04AE0, 8194);
  dword_60CAF2FC = CurrentStateID + 1;
  dword_60CAF2F8 = (int)&off_60C0647C;
  dword_60CAF300 = (int)nullsub_4661;
  dword_60CAF304 = 0;
  dword_60CAF308 = (int)nullsub_4662;
  dword_60CAF30C = 0;
  dword_60CAF310 = (int)nullsub_4663;
  dword_60CAF314 = 0;
  unk_60CAF318 = &off_60C0647C;
  unk_60CAF31C = CurrentStateID + 2;
  CurrentStateID += 3;
  dword_60CAF33C = CurrentStateID;
  dword_60CAF320 = (int)nullsub_4664;
  dword_60CAF338 = (int)&off_60C0647C;
  dword_60CAF324 = 0;
  dword_60CAF340 = (int)sub_60588C20;
  dword_60CAF328 = (int)sub_60588B40;
  dword_60CAF344 = 0;
  dword_60CAF32C = 0;
  dword_60CAF348 = (int)SE_OBJ_COIN_APP_ref_2;
  dword_60CAF330 = (int)nullsub_4665;
  dword_60CAF334 = 0;
  dword_60CAF34C = 0;
  dword_60CAF350 = (int)nullsub_4666;
  dword_60CAF354 = 0;
  return &dword_60CAF338;
}
