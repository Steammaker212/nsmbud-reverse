/* sub_60270170
 * address: 0x60270170   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60270170(int a1)
{
  int v2; // r3
  int v3; // r2
  char v4; // r0
  char v5; // r1
  char *v6; // r1
  char v7; // r2
  char *v8; // r1
  char v9; // r6
  int v10; // r0
  int (__fastcall *v11)(int, _DWORD *); // r2
  int v12; // r0
  int v13; // r0
  int (__fastcall *v14)(int, int (***)()); // r2
  int v15; // r0
  int v16; // r0
  int (__fastcall *v17)(int, int (***)()); // r2
  int v18; // r0
  int v19; // r0
  int (__fastcall *v20)(int, int (***)()); // r2
  int v21; // r0
  int (**v23)(); // [sp+0h] [bp-48h] BYREF
  const char *v24; // [sp+4h] [bp-44h]
  _DWORD v25[16]; // [sp+8h] [bp-40h] BYREF

  v2 = FIELD_U8(a1, 9527);
  v3 = FIELD_U32(a1, 9476) >> 29;
  v4 = byte_60AF1FA8[v3];
  if ( v2 == 3 )
  {
    v8 = &byte_60AF2524[2 * v3];
    v7 = *v8;
    v5 = v8[1];
  }
  else
  {
    v5 = 15;
    if ( v2 == 2 )
    {
      v7 = byte_60AF2524[2 * v3];
    }
    else if ( v2 == 1 )
    {
      v6 = &byte_60AF2524[2 * v3];
      v7 = 15;
      v5 = v6[1];
    }
    else
    {
      v7 = 15;
    }
  }
  v9 = v7 & v4 & v5;
  if ( (v9 & 1) != 0 )
  {
    v10 = **(_DWORD **)(a1 + 6104);
    v11 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v10 + 84);
    v25[0] = &sead__SafeStringBase__vtable;
    v25[1] = "ef_left";
    v12 = v11(v10, v25);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 6104) + 108))(
      **(_DWORD **)(a1 + 6104),
      v12,
      v25);
    sub_60236DF4(563, v25, 0);
  }
  if ( (v9 & 2) != 0 )
  {
    v13 = **(_DWORD **)(a1 + 6104);
    v14 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v13 + 84);
    v23 = &sead__SafeStringBase__vtable;
    v24 = "ef_right";
    v15 = v14(v13, &v23);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 6104) + 108))(
      **(_DWORD **)(a1 + 6104),
      v15,
      v25);
    sub_60236DF4(563, v25, 0);
  }
  if ( (v9 & 4) != 0 )
  {
    v16 = **(_DWORD **)(a1 + 6104);
    v17 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v16 + 84);
    v23 = &sead__SafeStringBase__vtable;
    v24 = "ef_down";
    v18 = v17(v16, &v23);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 6104) + 108))(
      **(_DWORD **)(a1 + 6104),
      v18,
      v25);
    sub_60236DF4(563, v25, 0);
  }
  if ( (v9 & 8) != 0 )
  {
    v19 = **(_DWORD **)(a1 + 6104);
    v20 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v19 + 84);
    v23 = &sead__SafeStringBase__vtable;
    v24 = "ef_upper";
    v21 = v20(v19, &v23);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 6104) + 108))(
      **(_DWORD **)(a1 + 6104),
      v21,
      v25);
    sub_60236DF4(563, v25, 0);
  }
  FIELD_U8(a1, 9524) = v9;
  return 9524;
}
