/* sub_6026CF48
 * address: 0x6026CF48   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6026CF48(int result)
{
  _DWORD *v1; // r1
  int v2; // r2
  int v3; // r12
  _DWORD *v4; // r2
  float *v5; // r3
  float v6; // s2
  float v7; // s0
  float v8; // s2
  char v9; // r2
  _BYTE *v10; // r3
  _DWORD *v11; // r4
  _DWORD *v12; // lr
  int v13; // r2
  _DWORD *v14; // r3
  float *v15; // lr
  float v16; // s2
  float v17; // s0
  float v18; // s2
  bool v19; // zf
  unsigned int v20; // r1
  unsigned int v21; // t1
  int v22; // r3
  char v23; // r1

  v1 = (_DWORD *)(result + 6888);
  v2 = FIELD_U32(result, 6888);
  if ( !v2 )
    return result;
  if ( v2 == 2 )
  {
    v10 = (_BYTE *)(result + 6904);
    v9 = FIELD_U8(result, 6904);
    v11 = (_DWORD *)(result + 6876);
    v12 = (_DWORD *)(result + 6872);
    if ( v9 )
    {
      *v11 = 1065353216;
      *v12 = 1065353216;
      *v10 = v9 ^ 1;
      v13 = FIELD_U32(result, 6892);
      FIELD_U32(result, 6892) = v13 + 1;
      if ( v13 >= 2 )
      {
        *v1 = 0;
        FIELD_U32(result, 6800) = 1065353216;
        FIELD_U32(result, 6804) = 1065353216;
        return result;
      }
    }
    else
    {
      *v11 = 1066611507;
      *v12 = 1065982362;
      *v10 = 1;
    }
    goto LABEL_25;
  }
  if ( v2 != 1 )
    goto LABEL_25;
  v3 = 2;
  v4 = (_DWORD *)(result + 6932);
  if ( !FIELD_U32(result, 6932) )
  {
    v5 = (float *)(result + 6876);
    v6 = FIELD_F32(result, 6876);
    if ( FIELD_U8(result, 6904) )
    {
      v7 = 1.0;
      v8 = v6 + -0.08;
      if ( v8 <= 1.0 )
        goto LABEL_14;
    }
    else
    {
      v7 = 1.5;
      v8 = v6 + 0.08;
      if ( v8 >= 1.5 )
      {
LABEL_14:
        *v5 = v7;
        *v4 = 1;
        goto LABEL_15;
      }
    }
    v3 = 1;
    *v5 = v8;
  }
LABEL_15:
  v14 = (_DWORD *)(result + 6928);
  if ( FIELD_U32(result, 6928) )
  {
LABEL_22:
    if ( v3 == 2 )
    {
      *v14 = 0;
      *v4 = 0;
      v19 = FIELD_U8(result, 6904) == 1;
      FIELD_U8(result, 6904) ^= 1u;
      if ( v19 )
        *v1 = 2;
    }
    goto LABEL_25;
  }
  v15 = (float *)(result + 6872);
  v16 = FIELD_F32(result, 6872);
  if ( FIELD_U8(result, 6904) )
  {
    v17 = 1.0;
    v18 = v16 + -0.04;
    if ( v18 <= 1.0 )
      goto LABEL_21;
  }
  else
  {
    v17 = 0.75;
    v18 = v16 + 0.04;
    if ( v18 >= 0.75 )
    {
LABEL_21:
      *v15 = v17;
      *v14 = 1;
      goto LABEL_22;
    }
  }
  *v15 = v18;
LABEL_25:
  FIELD_U32(result, 6800) = FIELD_U32(result, 6872);
  v21 = FIELD_U8(result, 6936);
  result += 6936;
  v20 = v21;
  v22 = result - 24;
  if ( v21 >= 4 )
    v20 = 0;
  *(_DWORD *)(v22 + 4 * v20) = *(_DWORD *)(result - 60);
  v23 = (*(_BYTE *)result + 1) & 3;
  *(_DWORD *)(result - 132) = *(_DWORD *)(v22 + 4 * ((*(_BYTE *)result + 2) & 3));
  *(_BYTE *)result = v23;
  return result;
}
