/* sub_6049FF28
 * address: 0x6049FF28   size: 1684   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049FF28(int a1)
{
  _DWORD *v2; // r9
  char v3; // r12
  char v4; // r12
  char v5; // r12
  int v7; // [sp+10h] [bp-60h]
  int v8; // [sp+14h] [bp-5Ch] BYREF
  const char *v9; // [sp+18h] [bp-58h]
  int (**v10)(); // [sp+1Ch] [bp-54h]
  const char *v11; // [sp+20h] [bp-50h]
  int (**v12)(); // [sp+24h] [bp-4Ch]
  const char *v13; // [sp+28h] [bp-48h]
  int (**v14)(); // [sp+2Ch] [bp-44h]
  const char *v15; // [sp+30h] [bp-40h]
  int (**v16)(); // [sp+34h] [bp-3Ch]
  const char *v17; // [sp+38h] [bp-38h]
  int (**v18)(); // [sp+3Ch] [bp-34h]
  const char *v19; // [sp+40h] [bp-30h]
  int v20; // [sp+44h] [bp-2Ch] BYREF
  const char *v21; // [sp+48h] [bp-28h]

  v2 = (_DWORD *)(a1 + 44);
  sub_604734E4((_DWORD *)(a1 + 44), 0);
  sub_60475C8C((int)v2);
  v8 = (int)&sead__SafeStringBase__vtable;
  v9 = "ChangeTeam.bflyt";
  message_ref(v2, &v8, a1 + 3676, 0, 0);
  v8 = (int)&sead__SafeStringBase__vtable;
  v20 = (int)&sead__SafeStringBase__vtable;
  v9 = "Pa_Return_00";
  v21 = "Pa_Icon_00";
  sub_6050A704(a1 + 12988, v2, &v8, &v20, 1, 0);
  FIELD_U32(a1, 13028) = 2;
  FIELD_U32(a1, 13024) |= 1u;
  if ( ((unsigned int)dword_60CA1010 & ~(1615462428 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CA1010) )
  {
    dword_60CA102C = (int)&sead__SafeStringBase__vtable;
    dword_60CA1030 = dword_60CA0B60;
    dword_60CA1034 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1038 = dword_60CA0B68;
    dword_60CA103C = (int)&sead__SafeStringBase__vtable;
    dword_60CA1040 = dword_60CA0B70;
    dword_60CA1044 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1048 = dword_60CA0B78;
    dword_60CA104C = (int)&sead__SafeStringBase__vtable;
    dword_60CA1050 = dword_60CA0B80;
    dword_60CA1054 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1058 = dword_60CA0B88;
    dword_60CA105C = (int)&sead__SafeStringBase__vtable;
    dword_60CA1060 = dword_60CA0B90;
    dword_60CA1064 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1068 = dword_60CA0B98;
    sub_60000288();
    _cxa_guard_release(dword_60CA1010);
  }
  v8 = 8;
  sub_60476030((int)v2, &dword_60CA102C, &v8);
  FIELD_U8(a1, 4690) = 1;
  v7 = a1 + 3636;
  sub_60502210(a1 + 3636, &unk_60B02C10, 9);
  v8 = (int)&sead__SafeStringBase__vtable;
  v9 = "ChangeTeam";
  sead__SafeStringBase__operator_assign(a1 + 4648, (int)&v8);
  v8 = (int)&sead__SafeStringBase__vtable;
  v9 = "Pa_Return_00";
  v10 = &sead__SafeStringBase__vtable;
  v11 = "Pa_KojinBtn_00";
  v12 = &sead__SafeStringBase__vtable;
  v13 = "Pa_TeamBtnL_00";
  v14 = &sead__SafeStringBase__vtable;
  v15 = "Pa_TeamBtnR_00";
  v16 = &sead__SafeStringBase__vtable;
  v17 = "Pa_ConfirmBtnL_00";
  v18 = &sead__SafeStringBase__vtable;
  v19 = "Pa_ConfirmBtnR_00";
  if ( ((unsigned int)&dword_60CA1010[1] & ~(1615462880 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CA1010[1]) )
  {
    dword_60CA1070 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1074 = (int)"N_Kojin_00";
    dword_60CA1078 = (int)&sead__SafeStringBase__vtable;
    dword_60CA107C = (int)"N_Team_00";
    dword_60CA1080 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1084 = (int)"N_ChangeTeam_00";
    dword_60CA1088 = (int)&sead__SafeStringBase__vtable;
    dword_60CA108C = (int)"N_Confirm_00";
    dword_60CA1090 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1094 = (int)"N_PosAll_00";
    dword_60CA1098 = (int)&sead__SafeStringBase__vtable;
    dword_60CA109C = (int)"N_3Player_00";
    dword_60CA10A0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA10A4 = (int)"N_3Player_01";
    dword_60CA10A8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA10AC = (int)"N_3Player_02";
    dword_60CA10B0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA10B4 = (int)"N_4Player_00";
    dword_60CA10B8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA10BC = (int)"N_4Player_01";
    dword_60CA10C0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA10C4 = (int)"N_4Player_02";
    dword_60CA10C8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA10CC = (int)"N_4Player_03";
    sub_60000288();
    _cxa_guard_release(&dword_60CA1010[1]);
  }
  v20 = 12;
  sub_6047518C((int)v2, a1 + 20204, &dword_60CA1070, &v20);
  v20 = 6;
  sub_604756E0((int)v2, a1 + 20252, &v8, &v20);
  if ( ((unsigned int)&dword_60CA1010[2] & ~(1615463252 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA1010[2]) )
  {
    dword_60CA101C = (int)&sead__SafeStringBase__vtable;
    dword_60CA1020 = (int)"G_Kojin_00";
    dword_60CA1024 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1028 = (int)"G_Team_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA1010[2]);
  }
  FIELD_U32(a1, 20304) = -1;
  FIELD_U32(a1, 20296) = -1;
  FIELD_U32(a1, 20300) = -1;
  FIELD_U32(a1, 20292) = -1;
  FIELD_U32(a1, 20292) = sub_604746E4((int)v2, &dword_60CA0B5C, &dword_60CA101C);
  FIELD_U32(a1, 20300) = sub_604746E4((int)v2, &dword_60CA0B64, &dword_60CA101C);
  FIELD_U32(a1, 20296) = sub_604746E4((int)v2, &dword_60CA0B5C, &dword_60CA1024);
  FIELD_U32(a1, 20304) = sub_604746E4((int)v2, &dword_60CA0B64, &dword_60CA1024);
  v20 = (int)&sead__SafeStringBase__vtable;
  v21 = "Pa_Index_00";
  sub_6050B5E4(a1 + 5716, v2, &v20);
  (*(void (__fastcall **)(_DWORD, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(**(_DWORD **)(a1 + 3564) + 12))(
    FIELD_U32(a1, 3564),
    sub_609909D8,
    0);
  FIELD_U32(a1, 22496) = sub_603FD0B4((_BYTE *)(dword_60C99DEC + 16));
  sub_604A1404(a1);
  CharacterSelectPosTmpHeap_ref(a1);
  sub_6050292C(v7, 9);
  sub_605029C8(v7, 9);
  sub_605029FC(v7, &unk_60B02C14, "SE_SYS_BACK");
  sub_605028F0(v7, &unk_60B02C14, 1);
  sub_605029FC(v7, &unk_60B02C10, "SE_SYS_BACK");
  sub_60558180(a1 + 9296, 0);
  sub_605585A4(a1 + 9296);
  sub_6045BF58(a1 + 20312, 0);
  sub_6045BF58(a1 + 20716, 1);
  sub_6045BF58(a1 + 21120, 2);
  sub_6045BF58(a1 + 21524, 3);
  return sub_6045BF58(a1 + 21928, 4);
}
