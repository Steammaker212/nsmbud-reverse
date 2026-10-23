/* sub_6026DFA4
 * address: 0x6026DFA4   size: 744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6026DFA4(int a1)
{
  int result; // r0
  _DWORD *v3; // r5
  _DWORD *v4; // r0
  int v5; // r1
  float *v6; // r1
  float v7; // s2
  float v8; // s0
  float v9; // s2
  _BYTE *v10; // r0
  char v11; // r2
  _DWORD *v12; // r3
  _DWORD *v13; // r1
  int v14; // r7
  _DWORD *v15; // r2
  float *v16; // r3
  float v17; // s2
  float v18; // s0
  float v19; // s2
  bool v20; // zf
  unsigned int v21; // r1
  _BYTE *v22; // r2
  int v23; // r7
  char v24; // r3
  int v25; // r1
  char v26; // r2

  v3 = (_DWORD *)(a1 + 9508);
  result = FIELD_U32(a1, 9508);
  if ( !result )
    return result;
  if ( result == 2 )
  {
    v10 = (_BYTE *)(a1 + 9525);
    v11 = FIELD_U8(a1, 9525);
    v12 = (_DWORD *)(a1 + 9448);
    v13 = (_DWORD *)(a1 + 9444);
    if ( v11 )
    {
      *v12 = 1065353216;
      *v13 = 1065353216;
      *v10 = v11 ^ 1;
      v14 = FIELD_U32(a1, 9512) + 1;
      FIELD_U32(a1, 9512) = v14;
      if ( v14 >= (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1) )
      {
        *v3 = 0;
        FIELD_U8(a1, 9524) = 0;
        FIELD_U32(a1, 9392) = 1065353216;
        FIELD_U32(a1, 9396) = 1065353216;
        FIELD_U32(a1, 9400) = 1065353216;
        FIELD_U32(a1, 9404) = 1065353216;
        FIELD_U32(a1, 9408) = 1065353216;
        FIELD_U32(a1, 9412) = 1065353216;
        FIELD_U32(a1, 9416) = 1065353216;
        FIELD_U32(a1, 9420) = 1065353216;
        FIELD_U32(a1, 9424) = 1065353216;
        result = 9428;
        FIELD_U32(a1, 9428) = 1065353216;
        return result;
      }
    }
    else
    {
      *v12 = 1066611507;
      *v13 = 1065982362;
      *v10 = 1;
    }
    goto LABEL_26;
  }
  if ( result != 1 )
    goto LABEL_26;
  v4 = (_DWORD *)(a1 + 9520);
  v5 = 1;
  if ( !FIELD_U32(a1, 9520) )
  {
    v6 = (float *)(a1 + 9448);
    v7 = FIELD_F32(a1, 9448);
    if ( FIELD_U8(a1, 9525) )
    {
      v8 = 1.0;
      v9 = v7 + -0.08;
      if ( v9 <= 1.0 )
        goto LABEL_15;
    }
    else
    {
      v8 = 1.5;
      v9 = v7 + 0.08;
      if ( v9 >= 1.5 )
      {
LABEL_15:
        *v6 = v8;
        v5 = 1;
        *v4 = 1;
        goto LABEL_16;
      }
    }
    *v6 = v9;
    v5 = 0;
  }
LABEL_16:
  v15 = (_DWORD *)(a1 + 9516);
  if ( FIELD_U32(a1, 9516) )
  {
LABEL_23:
    if ( v5 == 1 )
    {
      *v15 = 0;
      *v4 = 0;
      v20 = FIELD_U8(a1, 9525) == 1;
      FIELD_U8(a1, 9525) ^= 1u;
      if ( v20 )
        *v3 = 2;
    }
    goto LABEL_26;
  }
  v16 = (float *)(a1 + 9444);
  v17 = FIELD_F32(a1, 9444);
  if ( FIELD_U8(a1, 9525) )
  {
    v18 = 1.0;
    v19 = v17 + -0.04;
    if ( v19 <= 1.0 )
      goto LABEL_22;
  }
  else
  {
    v18 = 0.75;
    v19 = v17 + 0.04;
    if ( v19 >= 0.75 )
    {
LABEL_22:
      *v16 = v18;
      *v15 = 1;
      goto LABEL_23;
    }
  }
  *v16 = v19;
LABEL_26:
  result = FIELD_U32(a1, 9444);
  FIELD_U32(a1, 9392) = result;
  v22 = (_BYTE *)(a1 + 9526);
  v21 = FIELD_U8(a1, 9526);
  v23 = a1 + 9452;
  if ( v21 >= 4 )
    v21 = 0;
  *(_DWORD *)(v23 + 4 * v21) = FIELD_U32(a1, 9448);
  v24 = (*v22 + 1) & 3;
  v25 = *(_DWORD *)(v23 + 4 * ((*v22 + 2) & 3));
  FIELD_U32(a1, 9396) = v25;
  *v22 = v24;
  v26 = FIELD_U8(a1, 9524);
  if ( (v26 & 8) != 0 )
  {
    FIELD_U32(a1, 9400) = result;
    FIELD_U32(a1, 9404) = v25;
  }
  if ( (v26 & 4) != 0 )
  {
    FIELD_U32(a1, 9408) = result;
    FIELD_U32(a1, 9412) = v25;
  }
  if ( (v26 & 2) != 0 )
  {
    FIELD_U32(a1, 9424) = result;
    FIELD_U32(a1, 9428) = v25;
  }
  if ( (v26 & 1) != 0 )
  {
    FIELD_U32(a1, 9416) = result;
    FIELD_U32(a1, 9420) = v25;
    return 9420;
  }
  return result;
}
