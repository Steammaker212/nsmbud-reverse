/* sub_604C1F08
 * address: 0x604C1F08   size: 1068   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C1F08(int a1)
{
  char v1; // r12
  int v3; // r0
  char v4; // r12
  _BYTE *v5; // r1
  int v6; // r2
  int result; // r0

  v3 = FIELD_U32(dword_60CC6D78, 424);
  if ( v3 >= 58 )
    v3 = 0;
  FIELD_U32(a1, 14144) = v3;
  if ( ((unsigned int)dword_60CA2F24 & ~(1615601476 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CA2F24) )
  {
    dword_60CA2FC8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2FCC = dword_60CA2B40;
    dword_60CA2FD0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2FD4 = dword_60CA2B48;
    dword_60CA2FD8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2FDC = dword_60CA2B50;
    dword_60CA2FE0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2FE4 = dword_60CA2B58;
    sub_60000288();
    _cxa_guard_release(dword_60CA2F24);
  }
  FIELD_U32(a1, 13944) = sub_604746E4(a1 + 48, &dword_60CA2AF4, &dword_60CA2FC8);
  FIELD_U32(a1, 13948) = sub_604746E4(a1 + 48, &dword_60CA2AF4, &dword_60CA2FD0);
  FIELD_U32(a1, 13952) = sub_604746E4(a1 + 48, &dword_60CA2AF4, &dword_60CA2FD8);
  FIELD_U32(a1, 13956) = sub_604746E4(a1 + 48, &dword_60CA2AF4, &dword_60CA2FE0);
  if ( ((unsigned int)&dword_60CA2F24[1] & ~(1615601780 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2F24[1]) )
  {
    dword_60CA3120 = (int)&sead__SafeStringBase__vtable;
    dword_60CA3124 = dword_60CA2B60;
    dword_60CA3128 = (int)&sead__SafeStringBase__vtable;
    dword_60CA312C = dword_60CA2B68;
    dword_60CA3130 = (int)&sead__SafeStringBase__vtable;
    dword_60CA3134 = dword_60CA2B70;
    dword_60CA3138 = (int)&sead__SafeStringBase__vtable;
    dword_60CA313C = dword_60CA2B78;
    dword_60CA3140 = (int)&sead__SafeStringBase__vtable;
    dword_60CA3144 = dword_60CA2B80;
    dword_60CA3148 = (int)&sead__SafeStringBase__vtable;
    dword_60CA314C = dword_60CA2B88;
    dword_60CA3150 = (int)&sead__SafeStringBase__vtable;
    dword_60CA3154 = dword_60CA2B90;
    dword_60CA3158 = (int)&sead__SafeStringBase__vtable;
    dword_60CA315C = dword_60CA2B98;
    dword_60CA3160 = (int)&sead__SafeStringBase__vtable;
    dword_60CA3164 = dword_60CA2BA0;
    dword_60CA3168 = (int)&sead__SafeStringBase__vtable;
    dword_60CA316C = dword_60CA2BC0;
    dword_60CA3170 = (int)&sead__SafeStringBase__vtable;
    dword_60CA3174 = dword_60CA2BC8;
    sub_60000288();
    _cxa_guard_release(&dword_60CA2F24[1]);
  }
  FIELD_U32(a1, 13960) = sub_604746E4(a1 + 48, &dword_60CA2AD4, &dword_60CA3120);
  FIELD_U32(a1, 13964) = sub_604746E4(a1 + 48, &dword_60CA2AD4, &dword_60CA3128);
  FIELD_U32(a1, 13968) = sub_604746E4(a1 + 48, &dword_60CA2AD4, &dword_60CA3130);
  FIELD_U32(a1, 13972) = sub_604746E4(a1 + 48, &dword_60CA2AD4, &dword_60CA3138);
  FIELD_U32(a1, 13976) = sub_604746E4(a1 + 48, &dword_60CA2AD4, &dword_60CA3140);
  FIELD_U32(a1, 13980) = sub_604746E4(a1 + 48, &dword_60CA2AD4, &dword_60CA3148);
  FIELD_U32(a1, 13984) = sub_604746E4(a1 + 48, &dword_60CA2AD4, &dword_60CA3150);
  FIELD_U32(a1, 13988) = sub_604746E4(a1 + 48, &dword_60CA2AD4, &dword_60CA3158);
  FIELD_U32(a1, 13992) = sub_604746E4(a1 + 48, &dword_60CA2AD4, &dword_60CA3160);
  FIELD_U32(a1, 13996) = sub_604746E4(a1 + 48, &dword_60CA2AD4, &dword_60CA3168);
  FIELD_U32(a1, 14000) = sub_604746E4(a1 + 48, &dword_60CA2AD4, &dword_60CA3170);
  FIELD_U8(a1, 14162) = 1;
  FIELD_U32(a1, 5084) = 1;
  FIELD_U32(a1, 14140) = 10;
  v5 = (_BYTE *)(a1 + 14167);
  v6 = dword_60C99DEC;
  if ( FIELD_U32(dword_60C99DEC, 16) == -1 )
  {
    *v5 = 0;
    FIELD_U8(a1, 14018) = 0;
    return 0;
  }
  else
  {
    *v5 = 1;
    FIELD_U8(a1, 14160) = FIELD_U8(v6, 20);
    result = FIELD_U8(v6, 21);
    FIELD_U8(a1, 14161) = result;
  }
  return result;
}
