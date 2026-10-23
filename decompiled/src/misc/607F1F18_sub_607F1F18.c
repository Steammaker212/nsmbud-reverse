/* sub_607F1F18
 * address: 0x607F1F18   size: 772   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F1F18(int a1)
{
  _DWORD *v1; // r9
  int v2; // r11
  int v3; // r7
  _DWORD *v4; // r4
  _DWORD *v5; // r4
  int v6; // r0
  int (**v9)(); // [sp+Ch] [bp-2Ch] BYREF
  const char *v10; // [sp+10h] [bp-28h]

  sub_60023F4C();
  system_ref_426530(dword_60C9BBD4);
  v1 = (_DWORD *)operator_new(0x390u);
  v9 = &sead__SafeStringBase__vtable;
  v10 = "3D";
  sub_60443FE0((int)v1, (int)&v9);
  sub_60444108(v1, 1, 128, 5, 26, 0);
  v9 = &sead__SafeStringBase__vtable;
  v10 = "3D";
  v2 = dword_60CD0B40;
  v3 = operator_new_8DE25C(0x1FCu, 0, 4);
  sub_6044364C();
  sub_60958220(v2, v3, 6, &v9, 0, 0);
  v9 = &sead__SafeStringBase__vtable;
  v10 = "BackLayout";
  v4 = (_DWORD *)operator_new_8DE25C(0x1A4u, 0, 4);
  memset(v4, 0, 420);
  sub_60441A3C();
  *v4 = off_60BF9FE4;
  v4[4] = &off_60BFA03C;
  sub_60958220(v2, v4, 5, &v9, 0, 0);
  v9 = &sead__SafeStringBase__vtable;
  v10 = "FrontLayout";
  v5 = (_DWORD *)operator_new_8DE25C(0x1A4u, 0, 4);
  memset(v5, 0, 420);
  sub_60441A3C();
  *v5 = off_60BF9FE4;
  v5[4] = &off_60BFA03C;
  sub_60958220(v2, v5, 7, &v9, 0, 0);
  sub_60443628(v3, (int)v1);
  sub_603F7FF8(0);
  sub_60401BB8(0);
  sub_60400CEC(0);
  sub_60400D94(dword_60C99E44);
  sub_603FF1CC(0);
  sub_603FF310(dword_60C99E2C);
  sub_603F807C(dword_60C99DD0);
  sub_60401ED4(dword_60C99E68);
  sub_604973E4(0);
  sub_60498FAC((_DWORD *)dword_60CA059C, 7, 6);
  sub_603FEEB4(0);
  sub_603FEF70(dword_60C99E24);
  sub_603FE46C(0);
  sub_603FE52C(dword_60C99E1C);
  sub_6081F2E0(dword_60CC6D78);
  v6 = dword_60C99DEC;
  FIELD_U32(dword_60C99DEC, 40) = 5;
  FIELD_U32(v6, 44) = 0;
  FIELD_U8(v6, 66) = 0;
  FIELD_U32(v6, 84) = 0;
  FIELD_U32(v6, 88) = 0;
  FIELD_U32(v6, 92) = 0;
  FIELD_U32(v6, 112) = 5;
  FIELD_U32(v6, 116) = 0;
  FIELD_U8(v6, 138) = 0;
  FIELD_U32(v6, 156) = 0;
  FIELD_U32(v6, 160) = 0;
  FIELD_U32(v6, 164) = 0;
  FIELD_U32(v6, 184) = 5;
  FIELD_U32(v6, 188) = 0;
  FIELD_U8(v6, 210) = 0;
  FIELD_U32(v6, 228) = 0;
  FIELD_U32(v6, 232) = 0;
  FIELD_U32(v6, 236) = 0;
  FIELD_U32(v6, 256) = 5;
  FIELD_U32(v6, 260) = 0;
  FIELD_U8(v6, 282) = 0;
  FIELD_U32(v6, 300) = 0;
  FIELD_U32(v6, 304) = 0;
  FIELD_U32(v6, 308) = 0;
  FIELD_U32(v6, 328) = 5;
  FIELD_U32(v6, 332) = 0;
  FIELD_U8(v6, 354) = 0;
  FIELD_U32(v6, 372) = 0;
  FIELD_U32(v6, 376) = 0;
  FIELD_U32(v6, 380) = 0;
  FIELD_U32(v6, 400) = 5;
  FIELD_U32(v6, 404) = 0;
  FIELD_U8(v6, 426) = 0;
  FIELD_U32(v6, 444) = 0;
  FIELD_U32(v6, 448) = 0;
  FIELD_U32(v6, 452) = 0;
  sub_608EF6A8(a1);
  return sub_600240A4();
}
