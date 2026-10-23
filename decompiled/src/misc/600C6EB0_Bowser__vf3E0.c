/* Bowser__vf3E0
 * address: 0x600C6EB0   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026BB0
// 
// Overridden by: None
int __fastcall Bowser__vf3E0(int a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r0
  int v5; // r1
  _DWORD v6[2]; // [sp+0h] [bp-48h] BYREF
  _BYTE v7[12]; // [sp+8h] [bp-40h] BYREF
  int v8; // [sp+14h] [bp-34h]
  int v9; // [sp+24h] [bp-24h]

  result = FIELD_U8(a1, 7108);
  if ( (result & 0x40) != 0 )
  {
    v6[0] = &sead__SafeStringBase__vtable;
    v6[1] = "Face";
    v3 = **(_DWORD **)(a1 + 7100);
    v4 = (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v3 + 84))(v3, v6);
    (*(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v3 + 108))(v3, v4, v7);
    v5 = v9;
    FIELD_U32(a1, 6664) = v8;
    FIELD_U32(a1, 6668) = v5;
    return 6668;
  }
  return result;
}
