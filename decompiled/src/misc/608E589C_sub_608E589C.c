/* sub_608E589C
 * address: 0x608E589C   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E589C(int a1, int a2, int a3)
{
  int v6; // r6
  int v7; // r7
  unsigned int v8; // r6
  void *v9; // r7
  int v10; // r8
  int v11; // r0
  int v12; // r2
  int v13; // r0
  int v14; // r0
  unsigned int v15; // r2
  int v16; // r1
  unsigned int v17; // r0
  _DWORD v19[20]; // [sp+8h] [bp-50h] BYREF

  v6 = 0;
  if ( a2 == -1 || (FIELD_U8(a3, 24) & 0x1F) != 0 )
    return v6;
  if ( FIELD_U32(a3, 8) || FIELD_U32(a3, 16) )
  {
    memset(&v19[1], 0, 44);
    v6 = 0;
    v19[0] = &off_60BF9CF0;
    if ( FIELD_U8(a1, 76) )
    {
      sub_608E69D4(a1, v19, FIELD_U32(a3, 28));
      v6 = 0;
      v7 = (*(int (__fastcall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)a1 + 128))(a1, v19, a2, 0);
      sub_608E69DC(a1, v19, v7);
      if ( v7 )
      {
        v8 = FIELD_U32(a3, 12);
        if ( v8 )
        {
LABEL_8:
          v9 = *(void **)(a3 + 8);
          v10 = 0;
          if ( !v9 )
          {
            v11 = FIELD_U32(a3, 20);
            v10 = 1;
            v12 = (v11 >> 31) | 1;
            v13 = abs32(v11);
            if ( v13 <= 32 )
              v13 = 32;
            v9 = (void *)operator_new_8DE2C8(v8, FIELD_U32(a3, 16), v13 * v12);
          }
          if ( sub_608E65F8(a1) && sub_608E6738(a1) )
          {
            FIELD_U32(a3, 36) = 0;
            FIELD_U32(a3, 40) = v8;
            v6 = (int)v9;
            FIELD_U8(a3, 44) = v10;
          }
          else
          {
            v6 = 0;
            if ( v9 && v10 == 1 )
              operator_delete_8DE3FC(v9);
          }
          goto LABEL_25;
        }
        v6 = 0;
        if ( sub_608E65CC(a1) == 1 )
        {
          v17 = FIELD_U32(a3, 24);
          if ( v17 )
            v8 = (v17 - 1) / v17 * v17;
          else
            v8 = 0;
          goto LABEL_8;
        }
      }
    }
LABEL_25:
    v19[0] = &off_60BF9CF0;
    if ( v19[2] )
      sub_608E6738(v19[2]);
    return v6;
  }
  v6 = 0;
  v19[0] = 0;
  v19[1] = 0;
  v14 = (*(int (__fastcall **)(_DWORD, int, _DWORD *))(**(_DWORD **)(a1 + 80) + 28))(FIELD_U32(a1, 80), a2, v19);
  if ( v14 )
  {
    v15 = FIELD_U32(a3, 24);
    v16 = v19[1];
    if ( !v15 || !(v19[1] % v15) )
    {
      FIELD_U32(a3, 36) = v19[1];
      FIELD_U32(a3, 40) = v16;
      v6 = v14;
      FIELD_U8(a3, 44) = 0;
    }
  }
  return v6;
}
