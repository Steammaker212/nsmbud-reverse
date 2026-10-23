/* sub_604CC400
 * address: 0x604CC400   size: 972   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604CC400(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r7
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  _DWORD *v10; // r0
  int v12; // [sp+4h] [bp-44h] BYREF
  int v13; // [sp+8h] [bp-40h]
  int v14; // [sp+Ch] [bp-3Ch]
  int (**v15)(); // [sp+10h] [bp-38h] BYREF
  char *v16; // [sp+14h] [bp-34h]
  int (**v17)(); // [sp+18h] [bp-30h]
  char *v18; // [sp+1Ch] [bp-2Ch]
  int (**v19)(); // [sp+20h] [bp-28h]
  char *v20; // [sp+24h] [bp-24h]

  sub_604CC7F4();
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60475C8C(a1 + 40);
  v15 = &sead__SafeStringBase__vtable;
  v16 = "CourseSelectVS.bflyt";
  message_ref((_DWORD *)(a1 + 40), &v15, a1 + 3840, 0, 0);
  Pa_VSPoint_ref(a1);
  sub_604CDF1C(a1);
  FIELD_U32(a1, 3748) = sub_60473B4C(a1 + 40);
  v15 = &sead__SafeStringBase__vtable;
  v14 = 0;
  v16 = &byte_60B3BA34;
  v17 = &sead__SafeStringBase__vtable;
  v18 = &byte_60B3BA34;
  v19 = &sead__SafeStringBase__vtable;
  v20 = &byte_60B3BA34;
  v12 = (int)&sead__SafeStringBase__vtable;
  v13 = N_WinPosL_00_N_WinPosC_00_N_WinPosR_00_ref(0);
  ((void (__fastcall *)(int (***)(), int *))v15[2])(&v15, &v12);
  v14 = 1;
  v2 = N_WinPosL_00_N_WinPosC_00_N_WinPosR_00_ref(1);
  v12 = (int)&sead__SafeStringBase__vtable;
  v13 = v2;
  ((void (__fastcall *)(int (***)(), int *))(&v15)[2 * v14][2])(&(&v15)[2 * v14], &v12);
  v14 = 2;
  v3 = N_WinPosL_00_N_WinPosC_00_N_WinPosR_00_ref(2);
  v12 = (int)&sead__SafeStringBase__vtable;
  v13 = v3;
  ((void (__fastcall *)(int (***)(), int *))(&v15)[2 * v14][2])(&(&v15)[2 * v14], &v12);
  v12 = 3;
  sub_6047518C(a1 + 40, a1 + 3752, &v15, &v12);
  sub_604CCA08(a1);
  sub_604CCB78(a1);
  sub_604CCEB4(a1);
  v4 = FIELD_U32(a1, 56);
  v5 = sub_604DA618(dword_60CA4D70);
  v6 = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(v4 + 12) + 48))(FIELD_U32(v4, 12), v5, 1);
  FIELD_U32(a1, 20040) = (*(int (__fastcall **)(int, const char *, int))(*(_DWORD *)v6 + 48))(v6, "B_Arrow_00", 1);
  v7 = sub_604DA618(dword_60CA4D74);
  v8 = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(v4 + 12) + 48))(FIELD_U32(v4, 12), v7, 1);
  FIELD_U32(a1, 20044) = (*(int (__fastcall **)(int, const char *, int))(*(_DWORD *)v8 + 48))(v8, "B_Arrow_00", 1);
  sub_604CD1B8(a1);
  Model_s_Nin_NX_NVN_szs_ref_834E7C(&dword_60CA4D60, 0);
  v9 = dword_60C99DEC;
  FIELD_U32(a1, 21860) = -1;
  FIELD_U32(a1, 21864) = 0;
  if ( FIELD_U8(v9, 522) )
    sub_604D2AE8(a1);
  else
    sub_604D2C94(a1);
  sub_6045BF58(a1 + 20244, 0);
  sub_609094C4(a1 + 20244, 66032, 40, 5);
  sub_6045BF58(a1 + 20648, 1);
  sub_609094C4(a1 + 20648, 66032, 40, 5);
  sub_6045BF58(a1 + 21052, 2);
  sub_609094C4(a1 + 21052, 66032, 40, 5);
  sub_6045BF58(a1 + 21456, 3);
  sub_609094C4(a1 + 21456, 66032, 40, 5);
  sub_604CD374(a1 + 21868);
  sub_604CD654(a1 + 35232);
  sub_60544F4C(a1 + 55740);
  sub_604CDAD8(a1);
  v10 = (_DWORD *)dword_60C99DEC;
  FIELD_U32(a1, 615736) = FIELD_U32(dword_60C99DEC, 76);
  FIELD_U32(a1, 615740) = v10[37];
  FIELD_U32(a1, 615744) = v10[55];
  FIELD_U32(a1, 615748) = v10[73];
  FIELD_U32(a1, 615704) = 1;
  FIELD_U8(a1, 615721) = v10[127] == 3;
  return 615721;
}
