/* sub_605BA078
 * address: 0x605BA078   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BA078(int result, int a2, int a3, int a4)
{
  int *v4; // r12
  unsigned int v5; // lr
  float v6; // s4
  unsigned int v7; // r6
  _DWORD *v8; // r9
  int v9; // r4
  float v10; // r10
  unsigned int v11; // r7
  float v12; // s6
  bool v13; // zf
  _DWORD *v14; // r1
  float v15; // t1
  int v16; // r7
  int v17; // r5
  int v18; // r0
  unsigned int v19; // r0
  int v20; // r0

  v4 = (int *)(result + 61656);
  v5 = FIELD_U32(result, 61656);
  if ( v5 )
  {
    v6 = FIELD_F32(a2, 8);
    v7 = result + 1632;
    v8 = (_DWORD *)(a2 + 4);
    v9 = FIELD_U32(result, 61656);
    if ( v5 >= 0xBB9 )
      v9 = 0;
    v10 = *(float *)a2;
    v11 = v7 + 20 * v9;
    while ( 1 )
    {
      if ( *(float *)v7 == *(float *)a2 && FIELD_F32(v7, 4) == FIELD_F32(a2, 4) )
      {
        v12 = FIELD_F32(v7, 8);
        v13 = v12 == v6;
        if ( v12 == v6 )
          v13 = FIELD_U16(v7, 16) == a4;
        if ( v13 )
          break;
      }
      v7 += 20;
      if ( v7 >= v11 )
      {
        v14 = (_DWORD *)(a2 + 8);
        goto LABEL_13;
      }
    }
    FIELD_U32(v7, 12) = a3;
  }
  else
  {
    v8 = (_DWORD *)(a2 + 4);
    v15 = *(float *)a2;
    v14 = (_DWORD *)(a2 + 8);
    v10 = v15;
LABEL_13:
    v16 = 0;
    v17 = result + 1632;
    v18 = result + 1632;
    if ( v5 >= 0xBB9 )
      v5 = 0;
    *(float *)(v18 + 20 * v5) = v10;
    v19 = v18 + 20 * v5;
    FIELD_U32(v19, 4) = *v8;
    FIELD_U32(v19, 8) = *v14;
    v20 = *v4;
    if ( (unsigned int)*v4 >= 0xBB9 )
      v20 = 0;
    *(_WORD *)(v17 + 20 * v20 + 16) = a4;
    if ( (unsigned int)*v4 < 0xBB9 )
      v16 = *v4;
    *(_DWORD *)(v17 + 20 * v16 + 12) = a3;
    result = *v4 + 1;
    *v4 = result;
  }
  return result;
}
