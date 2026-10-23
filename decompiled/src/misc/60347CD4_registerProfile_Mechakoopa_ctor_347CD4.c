/* registerProfile_Mechakoopa_ctor_347CD4
 * address: 0x60347CD4   size: 960   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_Mechakoopa_ctor_347CD4()
{
  sead__SafeString v1; // [sp+Ch] [bp-2Ch] BYREF

  dword_60C94A50 = 0;
  dword_60C94A54 = 0;
  dword_60C94A58 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC4DFE;
  Profile__ctor(&stru_60C94930, Mechakoopa_ctor, 0x20Cu, &v1, &stru_60AFFC4C, 18);
  dword_60C9494C = CurrentStateID + 1;
  dword_60C94948 = (int)&off_60BEE1D4;
  dword_60C94950 = (int)sub_60347454;
  dword_60C94954 = 0;
  dword_60C94958 = (int)sub_6034751C;
  dword_60C9495C = 0;
  dword_60C94960 = (int)nullsub_3386;
  dword_60C94964 = 0;
  dword_60C9496C = CurrentStateID + 2;
  dword_60C94968 = (int)&off_60BEE1D4;
  dword_60C94970 = (int)sub_603476E4;
  dword_60C94974 = 0;
  dword_60C94978 = (int)sub_603476FC;
  dword_60C9497C = 0;
  dword_60C94980 = (int)nullsub_3387;
  dword_60C94984 = 0;
  dword_60C9498C = CurrentStateID + 3;
  dword_60C94990 = 672;
  dword_60C94994 = 1;
  dword_60C94998 = 676;
  dword_60C9499C = 1;
  dword_60C949A0 = 680;
  dword_60C949A4 = 1;
  dword_60C94988 = (int)&off_60BEE1E8;
  dword_60C949A8 = (int)&dword_60C8EA94;
  dword_60C949B0 = CurrentStateID + 4;
  dword_60C949B4 = 660;
  dword_60C949B8 = 1;
  dword_60C949BC = 664;
  dword_60C949C0 = 1;
  dword_60C949C4 = 668;
  dword_60C949C8 = 1;
  dword_60C949AC = (int)&off_60BEE1E8;
  dword_60C949CC = (int)&stru_60C8EA70;
  dword_60C949D4 = CurrentStateID + 5;
  dword_60C949D0 = (int)&off_60BEE1D4;
  dword_60C949D8 = (int)SE_EMY_MECHAKOOPA_DAMAGE_ref;
  dword_60C949DC = 0;
  dword_60C949E0 = (int)sub_603479F0;
  dword_60C949E4 = 0;
  dword_60C949E8 = (int)sub_60347B2C;
  dword_60C949EC = 0;
  dword_60C949F0 = (int)&off_60BEE1D4;
  *(_DWORD *)algn_60C949F4 = CurrentStateID + 6;
  dword_60C949F8 = (int)SE_EMY_MECHAKOOPA_RESTART_F_ref;
  dword_60C949FC = 0;
  dword_60C94A00 = (int)sub_60347C54;
  dword_60C94A04 = 0;
  dword_60C94A08 = (int)sub_60347CC4;
  dword_60C94A0C = 0;
  CurrentStateID += 7;
  *(_DWORD *)algn_60C94A14 = CurrentStateID;
  *(_DWORD *)&algn_60C94A14[4] = 456;
  *(_DWORD *)&algn_60C94A14[8] = 1;
  dword_60C94A20 = 460;
  dword_60C94A24 = 1;
  dword_60C94A28 = 464;
  dword_60C94A2C = 1;
  dword_60C94A10 = (int)&off_60BEE1E8;
  dword_60C94A30 = (int)&stru_60C90710;
  dword_60C94AB0[0] = 1;
  dword_60C94AB4 = 0;
  dword_60C94AB8 = -1082130432;
  dword_60C94ABC = 0;
  dword_60C94AC0 = 1069547520;
  dword_60C94AC4 = 1063339950;
  dword_60C94AC8 = 1071644672;
  dword_60C94ACC = 2;
  dword_60C94AD0 = 0;
  dword_60C94AD4 = -1076258406;
  dword_60C94AD8 = 0;
  dword_60C94ADC = 1066192077;
  dword_60C94AE0 = 1065353216;
  dword_60C94AE4 = 1072064102;
  dword_60C94AE8 = 2;
  dword_60C94AEC = 0;
  dword_60C94AF0 = -1076258406;
  dword_60C94AF4 = 0;
  dword_60C94AF8 = 1066192077;
  dword_60C94AFC = 1065353216;
  dword_60C94B00 = 1072064102;
  dword_60C94B04 = 1;
  dword_60C94B08 = 0;
  dword_60C94B0C = -1082130432;
  unk_60C94B10 = 0;
  unk_60C94B14 = 1069547520;
  unk_60C94B18 = 1063339950;
  unk_60C94B1C = 1071644672;
  dword_60C94A40 = (int)&sead__SafeStringBase__vtable;
  unk_60C94A44 = "mecha_koopa";
  unk_60C94A48 = &sead__SafeStringBase__vtable;
  dword_60C94A4C = (int)"mecha_koopa";
  dword_60C94A5C = (int)&sead__SafeStringBase__vtable;
  dword_60C94A60 = (int)"walk";
  dword_60C94A64 = (int)&sead__SafeStringBase__vtable;
  dword_60C94A68 = (int)"walk";
  dword_60C94A6C = 1;
  dword_60C94A70 = (int)&sead__SafeStringBase__vtable;
  dword_60C94A74 = (int)"damage";
  dword_60C94A78 = (int)&sead__SafeStringBase__vtable;
  unk_60C94A7C = "damage";
  dword_60C94A80 = 0;
  *(_DWORD *)algn_60C94A84 = &sead__SafeStringBase__vtable;
  dword_60C94A88 = (int)"sign";
  dword_60C94A8C = (int)&sead__SafeStringBase__vtable;
  dword_60C94A90 = (int)"sign";
  dword_60C94A94 = 1;
  dword_60C94A98 = (int)&sead__SafeStringBase__vtable;
  dword_60C94A9C = (int)"recover";
  dword_60C94AA0 = (int)&sead__SafeStringBase__vtable;
  dword_60C94AA4 = (int)"recover";
  dword_60C94AA8 = 0;
  return sub_60000288();
}
