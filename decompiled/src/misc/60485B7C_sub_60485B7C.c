/* sub_60485B7C
 * address: 0x60485B7C   size: 1416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60485B7C(int a1)
{
  sead_IDisposer *v2; // r0
  sead_IDisposer *v3; // r0
  int v4; // r0
  _DWORD *v5; // r0
  char v6; // r12
  int v7; // r0
  void (__fastcall *v8)(int, int *, int *); // r3
  char v9; // r12
  char v10; // r12
  int v11; // r0
  char v12; // r12
  int v13; // r0
  int v15; // [sp+8h] [bp-18h] BYREF
  const char *v16; // [sp+Ch] [bp-14h]

  v2 = (sead_IDisposer *)operator_new(0xE04u);
  FIELD_U32(v2, 0x0) = (int)&off_60BFD790;
  v3 = sub_60475900(v2, (int)&FIELD_U32(v2 + (220) * 16, 0x8), 3);
  FIELD_U32(v3, 0x0) = (int)&off_60BFD790;
  FIELD_U32(v3 + (220) * 16, 0x8) = 0;
  FIELD_U32(v3 + (220) * 16, 0xC) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (221) * 16, 0x0) = (int)&byte_60B3BA34;
  FIELD_U32(v3 + (221) * 16, 0x4) = 0;
  LOBYTE(FIELD_U32(v3 + (221) * 16, 0x8)) = 0;
  FIELD_U32(v3 + (221) * 16, 0xC) = 0;
  FIELD_U32(v3 + (222) * 16, 0x0) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (222) * 16, 0x4) = (int)&byte_60B3BA34;
  FIELD_U32(v3 + (222) * 16, 0x8) = 0;
  LOBYTE(FIELD_U32(v3 + (222) * 16, 0xC)) = 0;
  FIELD_U32(v3 + (223) * 16, 0x0) = 0;
  FIELD_U32(v3 + (223) * 16, 0x4) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (223) * 16, 0x8) = (int)&byte_60B3BA34;
  FIELD_U32(v3 + (223) * 16, 0xC) = 0;
  LOBYTE(FIELD_U32(v3 + (224) * 16, 0x0)) = 0;
  FIELD_U32(a1, 4) = v3;
  sub_604734E4(v3, 0);
  v4 = FIELD_U32(a1, 4);
  v15 = (int)&sead__SafeStringBase__vtable;
  v16 = "Game";
  sub_60475C8C(v4);
  v5 = *(_DWORD **)(a1 + 4);
  v15 = (int)&sead__SafeStringBase__vtable;
  v16 = "ChallengeRetryWindow.bflyt";
  message_ref(v5, &v15, a1 + 24, 0, 0);
  if ( ((unsigned int)dword_60C9F380 & ~(1615354992 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60C9F380) )
  {
    dword_60C9F3B0 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F3B4 = dword_60C9F2D4;
    dword_60C9F3B8 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F3BC = dword_60C9F2DC;
    dword_60C9F3C0 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F3C4 = dword_60C9F2E4;
    dword_60C9F3C8 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F3CC = dword_60C9F2EC;
    dword_60C9F3D0 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F3D4 = dword_60C9F2F4;
    dword_60C9F3D8 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F3DC = dword_60C9F2FC;
    sub_60000288();
    _cxa_guard_release(dword_60C9F380);
  }
  v7 = FIELD_U32(a1, 4);
  v8 = *(void (__fastcall **)(int, int *, int *))(*(_DWORD *)v7 + 8);
  v15 = 6;
  v8(v7, &dword_60C9F3B0, &v15);
  FIELD_U32(a1, 16) = operator_new_8DE09C(0x20u);
  if ( ((unsigned int)&dword_60C9F380[1] & ~(1615355252 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C9F380[1]) )
  {
    dword_60C9F3E0 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F3E4 = (int)"Pa_RetryTime_00";
    dword_60C9F3E8 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F3EC = (int)"Pa_ExitTime_00";
    dword_60C9F3F0 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F3F4 = (int)"Pa_RetryCoin_00";
    dword_60C9F3F8 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F3FC = (int)"Pa_ExitCoin_00";
    dword_60C9F400 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F404 = (int)"Pa_Retry1UP_00";
    dword_60C9F408 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F40C = (int)"Pa_Exit1UP_00";
    dword_60C9F410 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F414 = (int)"Pa_RetrySpecial_00";
    dword_60C9F418 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F41C = (int)"Pa_ExitSpecial_00";
    sub_60000288();
    _cxa_guard_release(&dword_60C9F380[1]);
  }
  sub_6047ED10(a1 + 24, FIELD_U32(a1, 16), (int)&dword_60C9F3E0, 8);
  FIELD_U32(a1, 20) = 0;
  sub_604DE988(a1);
  sub_6047EBB4(a1 + 24, **(_DWORD **)(a1 + 16));
  if ( ((unsigned int)&dword_60C9F380[2] & ~(1615355544 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C9F380[2]) )
  {
    dword_60C9F390 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F394 = (int)"N_BtnTime_00";
    dword_60C9F398 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F39C = (int)"N_BtnCoin_00";
    dword_60C9F3A0 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F3A4 = (int)"N_Btn1UP_00";
    dword_60C9F3A8 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F3AC = (int)"N_BtnSpecial_00";
    sub_60000288();
    _cxa_guard_release(&dword_60C9F380[2]);
  }
  v11 = FIELD_U32(a1, 4);
  v15 = 4;
  sub_6047518C(v11, a1 + 548, &dword_60C9F390, &v15);
  if ( ((unsigned int)&dword_60C9F380[3] & ~(1615355736 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C9F380[3]) )
  {
    dword_60C9F420 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F424 = (int)"Pa_RetryTime_00";
    dword_60C9F428 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F42C = (int)"Pa_ExitTime_00";
    dword_60C9F430 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F434 = (int)"Pa_RetryCoin_00";
    dword_60C9F438 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F43C = (int)"Pa_ExitCoin_00";
    dword_60C9F440 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F444 = (int)"Pa_Retry1UP_00";
    dword_60C9F448 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F44C = (int)"Pa_Exit1UP_00";
    dword_60C9F450 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F454 = (int)"Pa_RetrySpecial_00";
    dword_60C9F458 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F45C = (int)"Pa_ExitSpecial_00";
    sub_60000288();
    _cxa_guard_release(&dword_60C9F380[3]);
  }
  v13 = FIELD_U32(a1, 4);
  v15 = 8;
  sub_604756E0(v13, a1 + 564, &dword_60C9F420, &v15);
  FIELD_U8(a1, 596) = 1;
  sub_6047F37C((_DWORD *)(a1 + 24), 9);
  sub_6047F28C((_DWORD *)(a1 + 24), (int)"SE_SYS_DECIDE", 9);
  sub_6047F340((_DWORD *)(a1 + 24), (int)"SE_SYS_CURSOR", 9);
  *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 16) + 4) + 172) = "SE_SYS_BACK";
  *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 16) + 12) + 172) = "SE_SYS_BACK";
  *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 16) + 20) + 172) = "SE_SYS_BACK";
  *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 16) + 28) + 172) = "SE_SYS_BACK";
  FIELD_U8(a1, 492) = 1;
  FIELD_U32(a1, 80) = 2;
  sub_60402084(dword_60C99E68, 2u);
  return sub_60473DE4(*(_DWORD **)(a1 + 4), 2u, &dword_60C9F2F8, 1);
}
