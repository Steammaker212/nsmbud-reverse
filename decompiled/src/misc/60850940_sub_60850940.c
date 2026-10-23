/* sub_60850940
 * address: 0x60850940   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60850940(int a1, int a2)
{
  int v4; // r11
  unsigned int result; // r0
  int v6; // r5
  unsigned __int16 v7; // r4
  int v8; // r10
  int v9; // r6
  int v10; // r0
  int v11; // r0
  int v12; // r7
  int v13; // r1
  int v14; // r1
  int v15; // r1
  int i; // r2
  unsigned int v17; // r0
  int v18; // r2
  int v19; // r2
  int v20; // r0
  int j; // r2
  int v22; // r0
  unsigned int v23; // r1
  int v24; // r2

  v4 = FIELD_U32(a1, 12);
  result = FIELD_U16(v4, 14);
  if ( FIELD_U16(v4, 14) )
  {
    v6 = a2 + 12;
    v7 = 0;
    v8 = v4 + FIELD_U32(v4, 16);
    while ( 1 )
    {
      v9 = v4 + *(_DWORD *)(v8 + 4 * v7);
      v10 = FIELD_U8(v9, 29);
      if ( v10 == 2 )
        break;
      if ( v10 == 1 )
      {
        v12 = FIELD_U32(a2, 16);
        if ( v12 != v6 )
        {
          while ( 1 )
          {
            v13 = (*(int (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(v12 + 8) + 56))(
                    FIELD_U32(v12, 8),
                    v9,
                    0);
            if ( v13 )
              break;
            v12 = FIELD_U32(v12, 4);
            if ( v12 == v6 )
              goto LABEL_31;
          }
          sub_60850658(a1, v13, v9);
        }
        goto LABEL_31;
      }
      if ( !FIELD_U8(v9, 29) )
      {
        v11 = FIELD_U32(a2, 16);
        if ( v11 != v6 )
        {
LABEL_16:
          v15 = FIELD_U32(v11, 8);
          for ( i = 0; i < 24; ++i )
          {
            if ( *(unsigned __int8 *)(v9 + i) != *(unsigned __int8 *)(v15 + i + 136) )
            {
              v11 = FIELD_U32(v11, 4);
              if ( v11 == v6 )
                goto LABEL_31;
              goto LABEL_16;
            }
            if ( !*(_BYTE *)(v9 + i) )
              break;
          }
          v17 = FIELD_U16(a1, 32);
          if ( v17 >= FIELD_U16(a1, 34) )
            goto LABEL_31;
          v18 = FIELD_U32(a1, 28);
          FIELD_U16(a1, 32) = v17 + 1;
          *(_DWORD *)(v18 + 8 * v17) = v15;
          v19 = v18 + 8 * v17;
LABEL_30:
          FIELD_U32(v19, 4) = v9;
        }
      }
LABEL_31:
      result = FIELD_U16(v4, 14);
      if ( ++v7 >= result )
        return result;
    }
    v14 = FIELD_U32(a2, 16);
    if ( v14 == v6 )
      goto LABEL_31;
LABEL_23:
    v20 = FIELD_U32(v14, 8);
    for ( j = 0; j < 24; ++j )
    {
      if ( *(unsigned __int8 *)(v9 + j) != *(unsigned __int8 *)(v20 + j + 136) )
      {
        v14 = FIELD_U32(v14, 4);
        if ( v14 == v6 )
          goto LABEL_31;
        goto LABEL_23;
      }
      if ( !*(_BYTE *)(v9 + j) )
        break;
    }
    v22 = sub_6085982C(v20, v9 + FIELD_U32(v9, 36) + *(_DWORD *)(v9 + FIELD_U32(v9, 36)));
    if ( !v22 )
      goto LABEL_31;
    v23 = FIELD_U16(a1, 32);
    if ( v23 >= FIELD_U16(a1, 34) )
      goto LABEL_31;
    v24 = FIELD_U32(a1, 28);
    FIELD_U16(a1, 32) = v23 + 1;
    *(_DWORD *)(v24 + 8 * v23) = v22;
    v19 = v24 + 8 * v23;
    goto LABEL_30;
  }
  return result;
}
