/* sub_60996ACC
 * address: 0x60996ACC   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60996ACC(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r6
  int v4; // r7
  int result; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r6
  int v9; // r5
  bool v10; // zf
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r7
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // [sp+4h] [bp-2Ch] BYREF
  int v20; // [sp+8h] [bp-28h]
  int v21; // [sp+Ch] [bp-24h]
  int v22; // [sp+10h] [bp-20h]
  int v23; // [sp+14h] [bp-1Ch]

  v2 = *(_DWORD **)(a1[4] + 72);
  v3 = sub_6098BED8((int)v2);
  v4 = *(_DWORD *)(v2[5] + 840);
  v19 = v3;
  result = FIELD_U8(v4, 12) & (1 << v3);
  if ( (FIELD_U8(v4, 12) & (unsigned __int8)(1 << v3)) != 0 )
  {
    v6 = a1[9];
    if ( !v6 || !(*(int (__fastcall **)(int, int))(*(_DWORD *)v6 + 20))(v6, v3) )
      sub_60996F34(a1);
    if ( a1[9] )
    {
      v7 = a1[10];
      if ( v7 )
      {
        if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v7 + 20))(v7, v3) == 1 )
        {
          v8 = a1[9];
          v9 = a1[10];
          v10 = v8 == 0;
          a1[9] = v9;
          if ( v8 )
            v10 = v8 == v9;
          if ( !v10 )
            (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(v8 + 12) + 156))(FIELD_U32(v8, 12));
          if ( v9 )
          {
            sub_609978D8(v9, a1 + 11);
            *(_DWORD *)(FIELD_U32(v9, 16) + 104) = v9;
            if ( v8 != v9 )
              (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(v9 + 12) + 152))(FIELD_U32(v9, 12));
          }
        }
        a1[10] = 0;
      }
      v23 = FIELD_U32(v4, 8);
      if ( v23 >= 3 )
        sub_60996D8C(a1, v23 - 3);
      v19 = 2139095039;
      v20 = 2139095039;
      v21 = -8388609;
      v22 = -8388609;
      ((void (__fastcall *)(int *, _DWORD))loc_6098E024)(&v19, *(_DWORD *)(*(_DWORD *)(a1[9] + 12) + 56));
      (*(void (__fastcall **)(_DWORD, int *))(**(_DWORD **)(a1[9] + 16) + 28))(*(_DWORD *)(a1[9] + 16), &v19);
      v11 = a1[5];
      v12 = v19;
      v13 = v20;
      v14 = v21;
      v15 = v22;
      FIELD_U32(v11, 24) = v19;
      FIELD_U32(v11, 28) = v15;
      FIELD_U32(v11, 32) = 0;
      FIELD_U8(v11, 64) |= 0x10u;
      v16 = a1[6];
      FIELD_U32(v16, 24) = v14;
      FIELD_U32(v16, 28) = v15;
      FIELD_U32(v16, 32) = 0;
      FIELD_U8(v16, 64) |= 0x10u;
      v17 = a1[7];
      FIELD_U32(v17, 24) = v12;
      FIELD_U32(v17, 28) = v13;
      FIELD_U32(v17, 32) = 0;
      FIELD_U8(v17, 64) |= 0x10u;
      v18 = a1[8];
      FIELD_U32(v18, 24) = v14;
      FIELD_U32(v18, 28) = v13;
      FIELD_U32(v18, 32) = 0;
      FIELD_U8(v18, 64) |= 0x10u;
      return sub_609978D8(a1[9], a1 + 11);
    }
    else
    {
      a1[9] = 0;
      return (*(int (__fastcall **)(_DWORD *, int))(*v2 + 24))(v2, -1);
    }
  }
  return result;
}
