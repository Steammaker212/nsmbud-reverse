/* sub_607FD83C
 * address: 0x607FD83C   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FD83C(int a1, int a2, _DWORD *a3, int a4)
{
  int v8; // r0
  bool v9; // zf
  char v10; // r5
  int v11; // r0
  float **v12; // r7
  int v13; // r4
  int v14; // r1
  _BOOL4 v15; // r1
  float *v16; // r0
  int v18[9]; // [sp+4h] [bp-24h] BYREF

  if ( a3 )
  {
    *a3 = FIELD_U32(a1, 16);
    a3[1] = FIELD_U32(a1, 20);
    a3[2] = FIELD_U32(a1, 24);
    a3[3] = FIELD_U32(a1, 28);
  }
  v8 = FIELD_U32(a1, 1588);
  v9 = FIELD_U8(v8, 1) == 0;
  if ( FIELD_U8(v8, 1) )
    v9 = *(_BYTE *)v8 == 0;
  if ( !v9 )
  {
    *(_DWORD *)a2 = FIELD_U32(v8, 4);
    FIELD_U32(a2, 4) = FIELD_U32(v8, 8);
    FIELD_U32(a2, 8) = FIELD_U32(v8, 12);
    FIELD_U32(a2, 12) = FIELD_U32(v8, 16);
LABEL_7:
    v10 = 0;
    return v10 & 1;
  }
  if ( !FIELD_U8(a1, 1592) )
    FIELD_U8(a1, 1592) = sub_60802770();
  v10 = 0;
  *(_DWORD *)a2 = FIELD_U32(a1, 16);
  FIELD_U32(a2, 4) = FIELD_U32(a1, 20);
  FIELD_U32(a2, 8) = FIELD_U32(a1, 24);
  FIELD_U32(a2, 12) = FIELD_U32(a1, 28);
  v18[0] = 0;
  v11 = FIELD_U32(a1, 32);
  if ( v11 )
  {
    v12 = *(float ***)(a1 + 40);
    v13 = 4 * v11 - 4;
    v14 = 0;
    if ( !a4 )
    {
      while ( 1 )
      {
        if ( sub_607FD23C((int *)*v12, v14, 0, FIELD_U8(a1, 1592), FIELD_U8(a1, 1593)) )
        {
          sub_607FD490(*v12, v18, (float *)a2, (int)a3);
          if ( v18[0] == 15 )
            break;
        }
        if ( !v13 )
          break;
        v14 = v18[0];
        ++v12;
        v13 -= 4;
      }
      goto LABEL_7;
    }
    v10 = 0;
    while ( 1 )
    {
      v15 = sub_607FD23C((int *)*v12, v14, 1, FIELD_U8(a1, 1592), FIELD_U8(a1, 1593));
      v16 = *v12;
      if ( v15 )
      {
        sub_607FD490(v16, v18, (float *)a2, (int)a3);
        if ( v18[0] == 15 )
          return v10 & 1;
      }
      else
      {
        v10 |= *((_BYTE *)v16 + 36) != 0;
      }
      if ( !v13 )
        break;
      v14 = v18[0];
      ++v12;
      v13 -= 4;
    }
  }
  return v10 & 1;
}
