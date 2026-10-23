/* sub_6090905C
 * address: 0x6090905C   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090905C(int result, int a2, int a3, float *a4)
{
  float v4; // s0
  float v5; // s2
  int v6; // lr
  unsigned int v7; // r4
  int v8; // r3
  int v9; // r12
  int v10; // r1
  int v11; // r1
  bool v12; // zf
  unsigned int v13; // r4

  if ( a2 == 1 )
  {
    v4 = FIELD_F32(result, 28);
    if ( v4 > FIELD_F32(result, 36) || (v5 = FIELD_F32(result, 32), v5 > FIELD_F32(result, 40)) )
    {
      FIELD_F32(result, 276) = *a4;
      FIELD_F32(result, 280) = a4[1];
LABEL_5:
      v6 = 1;
      v7 = FIELD_U32(result, 16) | 1;
      goto LABEL_10;
    }
    if ( v4 <= *a4 && v5 <= a4[1] )
    {
      FIELD_F32(result, 276) = *a4 - v4;
      FIELD_F32(result, 280) = a4[1] - v5;
      goto LABEL_5;
    }
  }
  v6 = 0;
  v7 = FIELD_U32(result, 16) & 0xFFFFFFFE;
LABEL_10:
  FIELD_U32(result, 16) = v7;
  v8 = FIELD_U32(result, 264);
  if ( v8 >= 0 )
  {
    v9 = 1 << v8;
    v10 = FIELD_U32(result, 272);
    if ( (v6 & a3) == 1 )
      v11 = v10 | v9;
    else
      v11 = v10 & ~v9;
    FIELD_U32(result, 272) = v11;
  }
  if ( (v7 & 8) != 0 )
  {
    v12 = (v7 & 1) == 0;
    v13 = v7 & 0xFFFFFFF7;
    if ( v12 )
    {
      FIELD_U32(result, 276) = -8388609;
      FIELD_U32(result, 280) = -8388609;
    }
    FIELD_U32(result, 16) = v13;
  }
  return result;
}
