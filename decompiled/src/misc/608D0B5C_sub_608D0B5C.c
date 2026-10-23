/* sub_608D0B5C
 * address: 0x608D0B5C   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D0B5C(int result, int a2, int a3, _DWORD *a4)
{
  int v4; // lr
  int v5; // r12
  int v6; // r12
  int v7; // lr
  int v8; // r4
  _DWORD *v9; // r5
  _DWORD *v10; // r3
  int v11; // r12
  int v12; // r3
  int v13; // r1
  int v14; // r3
  int v15; // r6
  _DWORD *v16; // r5

  if ( a3 != 1 )
  {
LABEL_15:
    FIELD_U8(result, 32) = a3;
    return result;
  }
  FIELD_U32(result, 24) = a4;
  if ( a2 > 0 )
  {
    *a4 = a4;
    a4[1] = a4;
    if ( a2 != 1 )
    {
      v4 = 1;
      if ( (a2 & 1) == 0 )
      {
        v5 = FIELD_U32(result, 24);
        FIELD_U32(v5, 8) = v5 + 8;
        FIELD_U32(v5, 12) = v5 + 8;
        v4 = 2;
      }
      if ( a2 != 2 )
      {
        v6 = 8 * v4 + 12;
        v7 = a2 - v4;
        do
        {
          v7 -= 2;
          v8 = FIELD_U32(result, 24) + v6;
          *(_DWORD *)(v8 - 12) = v8 - 12;
          *(_DWORD *)(v8 - 8) = v8 - 12;
          v9 = (_DWORD *)(FIELD_U32(result, 24) + v6);
          *(v9 - 1) = v9 - 1;
          *v9 = v9 - 1;
          v6 += 16;
        }
        while ( v7 );
      }
    }
    v10 = &a4[2 * a2];
    FIELD_U32(result, 28) = v10;
    *v10 = v10;
    v10[1] = v10;
    if ( a2 != 1 )
    {
      v11 = 1;
      if ( (a2 & 1) == 0 )
      {
        v12 = FIELD_U32(result, 28);
        FIELD_U32(v12, 8) = v12 + 8;
        FIELD_U32(v12, 12) = v12 + 8;
        v11 = 2;
      }
      if ( a2 != 2 )
      {
        v13 = a2 - v11;
        v14 = 8 * v11 + 12;
        do
        {
          v13 -= 2;
          v15 = FIELD_U32(result, 28) + v14;
          *(_DWORD *)(v15 - 12) = v15 - 12;
          *(_DWORD *)(v15 - 8) = v15 - 12;
          v16 = (_DWORD *)(FIELD_U32(result, 28) + v14);
          *(v16 - 1) = v16 - 1;
          *v16 = v16 - 1;
          v14 += 16;
        }
        while ( v13 );
      }
    }
    goto LABEL_15;
  }
  FIELD_U32(result, 28) = &a4[2 * a2];
  FIELD_U8(result, 32) = 1;
  return result;
}
