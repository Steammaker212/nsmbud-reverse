/* sub_60850524
 * address: 0x60850524   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60850524(int a1, int a2, int a3)
{
  int v6; // r4
  unsigned int result; // r0
  unsigned __int16 v8; // r6
  int v9; // r10
  int v10; // r7
  int v11; // r0
  int v12; // r0
  int v13; // r1
  int v14; // r0
  int v15; // r1
  unsigned int v16; // r1
  int v17; // r2

  v6 = FIELD_U32(a1, 12);
  result = FIELD_U16(v6, 14);
  if ( FIELD_U16(v6, 14) )
  {
    v8 = 0;
    v9 = v6 + FIELD_U32(v6, 16);
    while ( 1 )
    {
      v10 = v6 + *(_DWORD *)(v9 + 4 * v8);
      v11 = FIELD_U8(v10, 29);
      if ( v11 == 2 )
        break;
      if ( v11 == 1 )
      {
        v13 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 56))(a2, v6 + *(_DWORD *)(v9 + 4 * v8), a3);
        if ( v13 )
          sub_60850658(a1, v13, v10);
        goto LABEL_16;
      }
      if ( !FIELD_U8(v10, 29) )
      {
        v12 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 48))(a2, v6 + *(_DWORD *)(v9 + 4 * v8), a3);
        if ( v12 )
          goto LABEL_14;
      }
LABEL_16:
      result = FIELD_U16(v6, 14);
      if ( ++v8 >= result )
        return result;
    }
    v14 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 48))(a2, v6 + *(_DWORD *)(v9 + 4 * v8), a3);
    if ( !v14 )
      goto LABEL_16;
    v15 = 0;
    if ( FIELD_U8(v10, 29) == 2 )
      v15 = v10 + FIELD_U32(v10, 36) + *(_DWORD *)(v10 + FIELD_U32(v10, 36));
    v12 = sub_6085982C(v14, v15);
    if ( !v12 )
      goto LABEL_16;
LABEL_14:
    v16 = FIELD_U16(a1, 32);
    if ( v16 < FIELD_U16(a1, 34) )
    {
      v17 = FIELD_U32(a1, 28);
      FIELD_U16(a1, 32) = v16 + 1;
      *(_DWORD *)(v17 + 8 * v16) = v12;
      *(_DWORD *)(v17 + 8 * v16 + 4) = v10;
    }
    goto LABEL_16;
  }
  return result;
}
