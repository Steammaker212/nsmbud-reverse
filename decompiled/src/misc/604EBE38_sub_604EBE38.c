/* sub_604EBE38
 * address: 0x604EBE38   size: 1460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_604EBE38(int a1)
{
  char v2; // r12
  _DWORD *v3; // r8
  char v4; // r12
  char v5; // r12
  char v6; // r12
  signed int v7; // r5
  float result; // s0
  _DWORD v9[2]; // [sp+Ch] [bp-34h] BYREF
  int v10; // [sp+14h] [bp-2Ch] BYREF
  const char *v11; // [sp+18h] [bp-28h]

  Model_s_Nin_NX_NVN_szs_ref_834E7C(&dword_60CA60D0, 0);
  sub_604734E4((_DWORD *)(a1 + 10808), 0);
  sub_60475C8C(a1 + 10808);
  v10 = (int)&sead__SafeStringBase__vtable;
  v11 = "Help.bflyt";
  message_ref((_DWORD *)(a1 + 10808), &v10, a1 + 14436, 0, 0);
  v10 = (int)&sead__SafeStringBase__vtable;
  v9[0] = &sead__SafeStringBase__vtable;
  v11 = "Pa_Close_00";
  v9[1] = "Pa_Icon_00";
  sub_6050A704(a1 + 16496, a1 + 10808, &v10, v9, 1, 0);
  FIELD_U32(a1, 16536) = 2;
  FIELD_U32(a1, 16532) |= 1u;
  if ( ((unsigned int)dword_60CA60C0 & ~(1615773496 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CA60C0) )
  {
    dword_60CA6110 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6114 = (int)"Pa_ArrowBtnL_00";
    dword_60CA6118 = (int)&sead__SafeStringBase__vtable;
    dword_60CA611C = (int)"Pa_ArrowBtnR_00";
    dword_60CA6120 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6124 = (int)"Pa_Close_00";
    sub_60000288();
    _cxa_guard_release(dword_60CA60C0);
  }
  FIELD_U32(a1, 16476) = sub_60502E60(a1 + 14396, &dword_60CA6110);
  FIELD_U32(a1, 16480) = sub_60502E60(a1 + 14396, &dword_60CA6118);
  FIELD_U32(a1, 16484) = sub_60502E60(a1 + 14396, &dword_60CA6120);
  v3 = (_DWORD *)(a1 + 16484);
  if ( ((unsigned int)&dword_60CA60C0[1] & ~(1615773700 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CA60C0[1]) )
  {
    dword_60CA6130 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6134 = dword_60CA60EC;
    dword_60CA6138 = (int)&sead__SafeStringBase__vtable;
    dword_60CA613C = dword_60CA60F4;
    dword_60CA6140 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6144 = dword_60CA60FC;
    sub_60000288();
    _cxa_guard_release(&dword_60CA60C0[1]);
  }
  v10 = 3;
  sub_60476030(a1 + 10808, &dword_60CA6130, &v10);
  FIELD_U8(a1, 15450) = 1;
  sub_60502210(a1 + 14396, a1 + 16484, 17);
  v10 = (int)&sead__SafeStringBase__vtable;
  v11 = "Help";
  sead__SafeStringBase__operator_assign(a1 + 15408, (int)&v10);
  if ( ((unsigned int)&dword_60CA60C0[2] & ~(1615773944 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA60C0[2]) )
  {
    dword_60CA6148 = (int)&sead__SafeStringBase__vtable;
    dword_60CA614C = (int)"Pa_PackL_00";
    dword_60CA6150 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6154 = (int)"Pa_PackC_00";
    dword_60CA6158 = (int)&sead__SafeStringBase__vtable;
    dword_60CA615C = (int)"Pa_PackR_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA60C0[2]);
  }
  P_Page_00_ref(a1 + 36, a1 + 10808, &dword_60CA6148);
  P_Page_00_ref(a1 + 3624, a1 + 10808, &dword_60CA6150);
  P_Page_00_ref(a1 + 7212, a1 + 10808, &dword_60CA6158);
  v10 = 3;
  sub_604756E0(a1 + 10808, a1 + 23712, &dword_60CA6148, &v10);
  if ( ((unsigned int)&dword_60CA60C0[3] & ~(1615774204 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CA60C0[3]) )
  {
    dword_60CA6100 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6104 = (int)"T_Text_00";
    dword_60CA6108 = (int)&sead__SafeStringBase__vtable;
    dword_60CA610C = (int)"T_PageNum_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA60C0[3]);
  }
  v10 = 2;
  sub_60475334(a1 + 10808, a1 + 23724, &dword_60CA6100, &v10);
  (*(void (__fastcall **)(_DWORD, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(**(_DWORD **)(a1 + 14328) + 12))(
    FIELD_U32(a1, 14328),
    sub_609909D8,
    0);
  sub_6050292C(a1 + 14396, 15);
  sub_60502960(a1 + 14396, 15);
  sub_60502994(a1 + 14396, 15);
  sub_605029C8(a1 + 14396, 15);
  sub_605029FC(a1 + 14396, a1 + 16476, "SE_SYS_PAGE");
  sub_605028F0(a1 + 14396, a1 + 16476, 1);
  sub_605029FC(a1 + 14396, a1 + 16480, "SE_SYS_PAGE");
  sub_605028F0(a1 + 14396, a1 + 16480, 1);
  sub_605029FC(a1 + 14396, a1 + 16484, "SE_SYS_BACK");
  sub_605028F0(a1 + 14396, a1 + 16484, 1);
  *(_DWORD *)(sub_608DE61C(a1 + 14448, *v3) - FIELD_U32(a1, 14460) + 176) = "SE_SYS_BACK_BTN_OVER";
  *(_DWORD *)(sub_608DE61C(a1 + 14448, *v3) - FIELD_U32(a1, 14460) + 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  v7 = sub_604EC71C();
  HelpImage__02d_ref(a1, v7);
  sub_604ECAA8(a1, v7);
  result = *(float *)(FIELD_U32(a1, 23716) + 24) - *(float *)(FIELD_U32(a1, 23712) + 24);
  FIELD_F32(a1, 23732) = result;
  return result;
}
