/* SE_AMB_WATERPILLAR_SPOUT_ref_2_helper
 * address: 0x606FF620   size: 620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_AMB_WATERPILLAR_SPOUT_ref_2_helper(int result)
{
  int v1; // r3
  float v2; // s2
  float v3; // s0
  _BYTE *v4; // r12
  float *v5; // lr
  float v6; // s4
  float v7; // s6
  float *v8; // r1
  float v9; // s8
  _BYTE *v10; // r3
  _BYTE *v11; // r3

  v1 = 0;
  v2 = FIELD_F32(result, 6132);
  v3 = FIELD_F32(result, 6136);
  if ( v3 <= v2 )
  {
    v1 = 1;
    if ( v2 <= v3 )
    {
      v1 = 2;
      FIELD_U8(result, 6185) = 1;
    }
  }
  FIELD_U32(result, 6172) = v1;
  v4 = (_BYTE *)(result + 6180);
  if ( FIELD_U8(result, 6180) )
    return sub_606FF890();
  v5 = (float *)(result + 6140);
  v6 = FIELD_F32(result, 6140);
  v7 = FIELD_F32(result, 6152);
  if ( v6 < v7 )
  {
    v6 = v6 + FIELD_F32(result, 6148);
    *v5 = v6;
    if ( v6 <= v7 )
      goto LABEL_12;
LABEL_11:
    v6 = v7;
    *v5 = v7;
    goto LABEL_12;
  }
  if ( v6 > v7 )
  {
    v6 = v6 - FIELD_F32(result, 6148);
    *v5 = v6;
    if ( v6 < v7 )
      goto LABEL_11;
  }
LABEL_12:
  v8 = (float *)(result + 6144);
  v9 = FIELD_F32(result, 6144);
  if ( v9 < v7 )
  {
    v9 = v9 + FIELD_F32(result, 6148);
    *v8 = v9;
    if ( v9 <= v7 )
      goto LABEL_18;
LABEL_17:
    v9 = v7;
    *v8 = v7;
    goto LABEL_18;
  }
  if ( v9 > v7 )
  {
    v9 = v9 - FIELD_F32(result, 6148);
    *v8 = v9;
    if ( v9 < v7 )
      goto LABEL_17;
  }
LABEL_18:
  if ( (v1 & 3) == 1 )
  {
    FIELD_U32(result, 6176) = 1;
    v11 = (_BYTE *)(result + 6182);
    if ( (float)(v2 - v3) < 16.0 )
    {
      *v11 = 0;
      FIELD_U8(result, 6185) = 1;
      goto LABEL_24;
    }
    *v11 = 1;
    if ( FIELD_F32(result, 6128) <= v3 )
    {
      FIELD_F32(result, 6128) = v3;
      FIELD_F32(result, 148) = v3 / 161.1;
      *v4 = 1;
      return 1;
    }
    else
    {
      FIELD_F32(result, 148) = FIELD_F32(result, 148) - v9;
    }
  }
  else
  {
    if ( v1 )
      return result;
    v10 = (_BYTE *)(result + 6182);
    if ( (float)(v3 - v2) < 16.0 )
    {
      *v10 = 0;
      FIELD_U8(result, 6185) = 1;
LABEL_24:
      FIELD_U32(result, 6172) = 2;
      return 2;
    }
    *v10 = 1;
    if ( v3 <= FIELD_F32(result, 6128) )
    {
      FIELD_U32(result, 6176) = 1;
      FIELD_F32(result, 6128) = v3;
      FIELD_F32(result, 148) = v3 / 161.1;
      *v4 = 1;
    }
    else
    {
      FIELD_F32(result, 148) = v6 + FIELD_F32(result, 148);
    }
  }
  return result;
}
