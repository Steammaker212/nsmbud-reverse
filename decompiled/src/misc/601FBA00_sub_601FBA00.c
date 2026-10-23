/* sub_601FBA00
 * address: 0x601FBA00   size: 776   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601FBA00(int a1)
{
  int v2; // r5
  char v3; // r12
  int v4; // r0
  char v5; // r12
  int v6; // r0
  int result; // r0
  int v8; // [sp+4h] [bp-14h]

  v2 = dword_60C8996C;
  v8 = sub_6019112C(dword_60C8996C);
  if ( FIELD_U8(v2, 1384) )
  {
    if ( v8 == 322 )
    {
      FIELD_U8(a1, 400) = 1;
      sub_601E4C88((_DWORD *)dword_60C8B13C, 107, (_DWORD *)(a1 + 80));
      if ( ((unsigned int)&dword_60C8C0D0 & ~(1612692280 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C0D0) )
      {
        dword_60C8C0D4 = (int)&sead__SafeStringBase__vtable;
        dword_60C8C0D8 = (int)"fall";
        dword_60C8C0DC = (int)&sead__SafeStringBase__vtable;
        dword_60C8C0E0 = (int)"enter";
        dword_60C8C0E4 = (int)&sead__SafeStringBase__vtable;
        dword_60C8C0E8 = (int)"wait";
        sub_60000288();
        _cxa_guard_release(&dword_60C8C0D0);
      }
      v4 = FIELD_U32(a1, 268);
    }
    else
    {
      if ( v8 != 296 )
        goto LABEL_13;
      FIELD_U8(a1, 216) &= ~2u;
      if ( ((unsigned int)&dword_60C8C0D0 & ~(1612692068 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C0D0) )
      {
        dword_60C8C0D4 = (int)&sead__SafeStringBase__vtable;
        dword_60C8C0D8 = (int)"fall";
        dword_60C8C0DC = (int)&sead__SafeStringBase__vtable;
        dword_60C8C0E0 = (int)"enter";
        dword_60C8C0E4 = (int)&sead__SafeStringBase__vtable;
        dword_60C8C0E8 = (int)"wait";
        sub_60000288();
        _cxa_guard_release(&dword_60C8C0D0);
      }
      v4 = FIELD_U32(a1, 268);
    }
    sub_6040F4B8(v4, &dword_60C8C0D4, 0);
    FIELD_U32(a1, 272) = 0;
  }
LABEL_13:
  if ( v8 != 322 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v6 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
  if ( (FIELD_U8(v6, 28) & 0x20) != 0 )
  {
    if ( ((unsigned int)&dword_60C8C0D0 & ~(1612692556 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C0D0) )
    {
      dword_60C8C0D4 = (int)&sead__SafeStringBase__vtable;
      dword_60C8C0D8 = (int)"fall";
      dword_60C8C0DC = (int)&sead__SafeStringBase__vtable;
      dword_60C8C0E0 = (int)"enter";
      dword_60C8C0E4 = (int)&sead__SafeStringBase__vtable;
      dword_60C8C0E8 = (int)"wait";
      sub_60000288();
      _cxa_guard_release(&dword_60C8C0D0);
    }
    sub_6040F4B8(FIELD_U32(a1, 268), &dword_60C8C0E4, 1);
    FIELD_U32(a1, 272) = 2;
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
  result = sub_60418548(v6 + 4);
  if ( result == 1 )
  {
    result = EffectData_create(1131, (Vec3 *)(a1 + 80), 0, 0);
    FIELD_U8(a1, 400) = 0;
  }
  return result;
}
