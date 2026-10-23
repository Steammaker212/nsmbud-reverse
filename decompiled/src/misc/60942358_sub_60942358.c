/* sub_60942358
 * address: 0x60942358   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60942358(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  bool v6; // r5
  void *v7; // r8
  int v8; // r6
  unsigned int v9; // r7
  size_t v10; // r2
  int v11; // r5
  int (__fastcall *v12)(int, int, int); // r6
  int v13; // r0
  _DWORD v15[2]; // [sp+4h] [bp-24h] BYREF
  _DWORD v16[7]; // [sp+Ch] [bp-1Ch] BYREF

  v16[0] = a2;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 28))(a1) )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1) == 1 )
    {
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 28))(a1) == 20 )
      {
        v4 = FIELD_U32(a2, 4);
        v15[0] = &sead__SafeStringBase__vtable;
        v15[1] = a2 + ((4 * v4) & 0x3FFFFFC);
        v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 44))(a1);
        (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v5 + 8))(v5, v15);
      }
      else
      {
        v7 = (void *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
        v8 = (4 * FIELD_U32(a2, 4)) & 0x3FFFFFC;
        v9 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1);
        v10 = sub_60951610(v16);
        if ( v9 < v10 )
          v10 = v9;
        qmemcpy(v7, (const void *)(a2 + v8), v10);
      }
    }
  }
  else
  {
    v6 = *(_DWORD *)(a2 + ((4 * FIELD_U32(a2, 4)) & 0x3FFFFFC)) != 0;
    *(_BYTE *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1) = v6;
  }
  v11 = v16[0] + ((4 * *(_DWORD *)(v16[0] + 4)) & 0x3FFFFFC);
  v12 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 60);
  v13 = sub_60951610(v16);
  return v12(a1, v11, v13);
}
