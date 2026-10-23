/* sub_60008A7C
 * address: 0x60008A7C   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_60008A7C(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // r5
  unsigned int v5; // r0
  unsigned int v6; // r2
  int v7; // kr00_4
  int v8; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r1
  int v12; // r3
  int v13; // r5

  v3 = a3;
  *(_DWORD *)a1 = 0;
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 16) = 1;
  FIELD_U8(a1, 20) = 0;
  if ( (int)a3 >= 1 )
  {
    v7 = 4 * a3;
    v6 = a3 >> 30;
    v5 = v7;
    if ( !is_mul_ok(4u, v3) )
      v6 = 1;
    if ( v6 )
      v5 = -1;
    v8 = sub_608DE334(v5, a2, 4);
    if ( v8 )
    {
      *(_DWORD *)a1 = v3;
      FIELD_U32(a1, 4) = v8;
    }
    else
    {
      v3 = *(_DWORD *)a1;
      if ( *(int *)a1 < 1 )
        goto LABEL_17;
    }
    if ( (v3 & 3) != 0 )
    {
      v9 = 0;
      do
        *(_DWORD *)(FIELD_U32(a1, 4) + 4 * v9++) = 0;
      while ( (v3 & 3) != v9 );
    }
    else
    {
      v9 = 0;
    }
    if ( v3 - 1 >= 3 )
    {
      v10 = v9 - v3;
      v11 = 4 * v9;
      v12 = 0;
      do
      {
        *(_DWORD *)(FIELD_U32(a1, 4) + v11 - 4 * v12) = 0;
        *(_DWORD *)(FIELD_U32(a1, 4) + v11 - 4 * v12 + 4) = 0;
        *(_DWORD *)(FIELD_U32(a1, 4) + v11 - 4 * v12 + 8) = 0;
        v13 = FIELD_U32(a1, 4) + v11 - 4 * v12;
        v12 -= 4;
        FIELD_U32(v13, 12) = 0;
      }
      while ( v10 != v12 );
    }
  }
LABEL_17:
  FIELD_U32(a1, 12) = FIELD_U32(a1, 4);
  return (unsigned int *)a1;
}
