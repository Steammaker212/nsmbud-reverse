/* sub_601A8E68
 * address: 0x601A8E68   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A8E68(int a1)
{
  int v2; // r0
  float v3; // s0
  int result; // r0
  int v5; // r0
  int (__fastcall *v6)(int, _DWORD *, float); // r2
  int v7; // r0
  _DWORD *v8; // r0
  int v9; // r1
  _DWORD v10[2]; // [sp+8h] [bp-48h] BYREF
  _DWORD v11[16]; // [sp+10h] [bp-40h] BYREF

  if ( FIELD_S32(a1, 500) < 0 )
    FIELD_U32(a1, 500) = sub_601E4EA4(dword_60C8B13C, 147, 0, a1 + 80, 1);
  v2 = FIELD_U32(a1, 180) - FIELD_U32(a1, 496);
  FIELD_U32(a1, 180) = v2;
  FIELD_U32(a1, 192) = v2;
  v3 = sub_60168EA0(a1);
  result = FIELD_U32(a1, 484);
  if ( result )
  {
    v5 = **(_DWORD **)(a1 + 268);
    v6 = *(int (__fastcall **)(int, _DWORD *, float))(*(_DWORD *)v5 + 84);
    v11[0] = &sead__SafeStringBase__vtable;
    v11[1] = "ef_wand";
    v7 = v6(v5, v11, v3);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 268) + 108))(**(_DWORD **)(a1 + 268), v7, v11);
    sub_602372C0(a1 + 312, 1216, v11, 1);
    result = FIELD_U32(a1, 484) - 1;
    FIELD_U32(a1, 484) = result;
    if ( !result )
    {
      v8 = *(_DWORD **)(a1 + 268);
      v9 = FIELD_U32(a1, 272);
      v10[0] = &sead__SafeStringBase__vtable;
      v10[1] = "fly_csdm";
      return sub_60421938(v8, v9, (int)v10);
    }
  }
  return result;
}
