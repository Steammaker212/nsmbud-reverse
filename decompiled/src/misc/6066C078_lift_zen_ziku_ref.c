/* lift_zen_ziku_ref
 * address: 0x6066C078   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void lift_zen_ziku_ref()
{
  sead__SafeString v0; // [sp+10h] [bp-20h] BYREF

  dword_60CB6DF8 = (int)&sead__SafeStringBase__vtable;
  dword_60CB6DFC = (int)"lift_zen_ziku_M";
  dword_60CB6E00 = -1065353216;
  dword_60CB6E04 = 1119879168;
  dword_60CB6E08 = 1082130432;
  dword_60CB6E0C = 0;
  dword_60CB6E10 = 0;
  dword_60CB6E14 = -1044381696;
  dword_60CB6E18 = 1117782016;
  dword_60CB6E1C = 1103101952;
  dword_60CB6E20 = -1027604480;
  dword_60CB6E24 = 0;
  dword_60CB6E28 = -1031798784;
  dword_60CB6E2C = 1116995584;
  dword_60CB6E30 = -1038352384;
  dword_60CB6E34 = 1112014848;
  dword_60CB6E38 = 0;
  dword_60CB6E4C = 0;
  dword_60CB6E50 = (int)&sead__SafeStringBase__vtable;
  dword_60CB6E54 = (int)"lift_zen_ziku_L";
  memset(&unk_60CB6E6C, 0, 60);
  dword_60CB6E58 = -1041235968;
  dword_60CB6E5C = 1119879168;
  unk_60CB6E60 = 1106247680;
  unk_60CB6E64 = -1018691584;
  unk_60CB6E68 = 0;
  sub_60000288();
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD5D32;
  Profile__ctor(&stru_60CB6EA8, Actor_ne_2_build, 0x94u, &v0, &stru_60B07A6C, 2);
}
