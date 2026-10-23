/* sub_6026ECD8
 * address: 0x6026ECD8   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6026ECD8(int a1)
{
  char v2; // r6
  int v3; // r0
  int (__fastcall *v4)(int, _DWORD *); // r2
  int v5; // r0
  int v6; // r0
  int (__fastcall *v7)(int, int (***)()); // r2
  int v8; // r0
  int v9; // r0
  int (__fastcall *v10)(int, int (***)()); // r2
  int v11; // r0
  int v12; // r0
  int (__fastcall *v13)(int, int (***)()); // r2
  int v14; // r0
  int (**v16)(); // [sp+0h] [bp-48h] BYREF
  const char *v17; // [sp+4h] [bp-44h]
  _DWORD v18[16]; // [sp+8h] [bp-40h] BYREF

  v2 = byte_60AF1FA8[FIELD_U32(a1, 9476) >> 29];
  if ( (v2 & 1) != 0 )
  {
    v3 = **(_DWORD **)(a1 + 6104);
    v4 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v3 + 84);
    v18[0] = &sead__SafeStringBase__vtable;
    v18[1] = "ef_left";
    v5 = v4(v3, v18);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 6104) + 108))(
      **(_DWORD **)(a1 + 6104),
      v5,
      v18);
    sub_60236DF4(562, v18, 0);
  }
  if ( (v2 & 2) != 0 )
  {
    v6 = **(_DWORD **)(a1 + 6104);
    v7 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v6 + 84);
    v16 = &sead__SafeStringBase__vtable;
    v17 = "ef_right";
    v8 = v7(v6, &v16);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 6104) + 108))(
      **(_DWORD **)(a1 + 6104),
      v8,
      v18);
    sub_60236DF4(562, v18, 0);
  }
  if ( (v2 & 4) != 0 )
  {
    v9 = **(_DWORD **)(a1 + 6104);
    v10 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v9 + 84);
    v16 = &sead__SafeStringBase__vtable;
    v17 = "ef_under";
    v11 = v10(v9, &v16);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 6104) + 108))(
      **(_DWORD **)(a1 + 6104),
      v11,
      v18);
    sub_60236DF4(562, v18, 0);
  }
  if ( (v2 & 8) != 0 )
  {
    v12 = **(_DWORD **)(a1 + 6104);
    v13 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v12 + 84);
    v16 = &sead__SafeStringBase__vtable;
    v17 = "ef_upper";
    v14 = v13(v12, &v16);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 6104) + 108))(
      **(_DWORD **)(a1 + 6104),
      v14,
      v18);
    sub_60236DF4(562, v18, 0);
  }
  FIELD_U8(a1, 9524) = v2;
  return 9524;
}
