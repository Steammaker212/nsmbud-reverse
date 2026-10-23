/* sub_60850D94
 * address: 0x60850D94   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60850D94(int a1, int a2)
{
  int v4; // r8
  int v5; // r7
  int v6; // r5
  unsigned int v7; // r6
  int v8; // r4
  int v9; // r9
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r2
  int v14; // r0
  int v15; // r0
  int v16; // r1
  int result; // r0
  int v18; // r6
  int v19; // r7

  v4 = FIELD_U16(a1, 32);
  if ( FIELD_U16(a1, 32) )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = FIELD_U32(a1, 28);
      if ( *(_DWORD *)(v6 + 8 * v5) == a2 )
        break;
      v7 = sub_608597C0(a2);
      if ( v7 )
      {
        v8 = 0;
        v9 = -12;
        while ( 1 )
        {
          v9 += 12;
          if ( sub_608597F0(a2) + v9 == *(_DWORD *)(v6 + 8 * v5) )
            break;
          if ( ++v8 >= v7 )
            goto LABEL_12;
        }
        v10 = FIELD_U16(a1, 32);
        if ( v5 + 1 < v10 )
        {
          v11 = FIELD_U32(a1, 28);
          v12 = v11 + 8 * v10;
          v13 = *(_DWORD *)(v12 - 8);
          v10 = *(_DWORD *)(v12 - 4);
          *(_DWORD *)(v11 + 8 * v5) = v13;
          *(_DWORD *)(v11 + 8 * v5 + 4) = v10;
          LOWORD(v10) = FIELD_U16(a1, 32);
        }
        FIELD_U16(a1, 32) = v10 - 1;
      }
LABEL_12:
      if ( ++v5 >= v4 )
        goto LABEL_17;
    }
    v14 = FIELD_U16(a1, 32);
    if ( v5 + 1 < v14 )
    {
      v15 = v6 + 8 * v14;
      v16 = *(_DWORD *)(v15 - 8);
      v14 = *(_DWORD *)(v15 - 4);
      *(_DWORD *)(v6 + 8 * v5) = v16;
      *(_DWORD *)(v6 + 8 * v5 + 4) = v14;
      LOWORD(v14) = FIELD_U16(a1, 32);
    }
    FIELD_U16(a1, 32) = v14 - 1;
  }
LABEL_17:
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 40))(a2);
  v18 = result;
  if ( result )
  {
    v19 = 0;
    do
    {
      result = (*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 44))(a2, v19);
      if ( result )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
      ++v19;
    }
    while ( v18 != v19 );
  }
  return result;
}
