/* sub_606FF890
 * address: 0x606FF890   size: 928   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606FF890(int result)
{
  float *v1; // r1
  float v2; // s2
  float v3; // s0
  float *v4; // r1
  float v5; // s4
  int v6; // r1
  float v7; // s0
  _DWORD *v8; // r12
  int v9; // r2
  int v10; // r3
  float *v11; // r3
  float v12; // s0
  int v13; // r2
  float *v14; // r1
  int v15; // r2

  if ( !FIELD_U8(result, 6182) )
    goto LABEL_19;
  v1 = (float *)(result + 6140);
  v2 = FIELD_F32(result, 6152);
  v3 = FIELD_F32(result, 6140);
  if ( v3 < v2 )
  {
    v3 = v3 + FIELD_F32(result, 6148);
    *v1 = v3;
    if ( v3 <= v2 )
      goto LABEL_8;
LABEL_7:
    v3 = v2;
    *v1 = v2;
    goto LABEL_8;
  }
  if ( v3 > v2 )
  {
    v3 = v3 - FIELD_F32(result, 6148);
    *v1 = v3;
    if ( v3 < v2 )
      goto LABEL_7;
  }
LABEL_8:
  v4 = (float *)(result + 6144);
  v5 = FIELD_F32(result, 6144);
  if ( v5 < v2 )
  {
    v5 = v5 + FIELD_F32(result, 6148);
    *v4 = v5;
    if ( v5 <= v2 )
      goto LABEL_14;
LABEL_13:
    v5 = v2;
    *v4 = v2;
    goto LABEL_14;
  }
  if ( v5 > v2 )
  {
    v5 = v5 - FIELD_F32(result, 6148);
    *v4 = v5;
    if ( v5 < v2 )
      goto LABEL_13;
  }
LABEL_14:
  v6 = FIELD_U32(result, 6172);
  if ( v6 == 1 )
  {
    v7 = FIELD_F32(result, 148) - v5;
    goto LABEL_18;
  }
  if ( !v6 )
  {
    v7 = v3 + FIELD_F32(result, 148);
LABEL_18:
    FIELD_F32(result, 148) = v7;
  }
LABEL_19:
  v8 = (_DWORD *)(result + 6176);
  switch ( FIELD_U32(result, 6176) )
  {
    case 1:
      FIELD_U32(result, 6152) = 0;
      FIELD_U32(result, 6148) = 1008981770;
      *v8 = 2;
      return 2;
    case 2:
      v13 = FIELD_U32(result, 6172);
      if ( v13 == 1 )
      {
        v14 = (float *)(result + 6144);
      }
      else
      {
        if ( v13 )
          return result;
        v14 = (float *)(result + 6140);
      }
      if ( *v14 == 0.0 )
      {
        FIELD_U32(result, 6152) = -1165815185;
        FIELD_U32(result, 6148) = 950519212;
        *v8 = 3;
        return 3;
      }
      return result;
    case 3:
      v9 = FIELD_U32(result, 6172);
      if ( v9 == 1 )
      {
        if ( FIELD_F32(result, 6128) < FIELD_F32(result, 6136) )
          return result;
        goto LABEL_39;
      }
      if ( !v9 && FIELD_F32(result, 6128) <= FIELD_F32(result, 6136) )
      {
LABEL_39:
        FIELD_U32(result, 6152) = 981668463;
        FIELD_U32(result, 6148) = 964891247;
        *v8 = 4;
        return 4;
      }
      return result;
    case 4:
      v15 = FIELD_U32(result, 6172);
      if ( v15 == 1 )
      {
        if ( FIELD_F32(result, 6128) > FIELD_F32(result, 6136) )
          return result;
        goto LABEL_46;
      }
      if ( !v15 && FIELD_F32(result, 6128) >= FIELD_F32(result, 6136) )
      {
LABEL_46:
        FIELD_U32(result, 6152) = -1165815185;
        FIELD_U32(result, 6148) = 964891247;
        *v8 = 5;
        return 5;
      }
      return result;
    case 5:
      v10 = FIELD_U32(result, 6172);
      if ( v10 == 1 )
      {
        v11 = (float *)(result + 6128);
        v12 = FIELD_F32(result, 6136);
        if ( FIELD_F32(result, 6128) < v12 )
          return result;
        goto LABEL_41;
      }
      if ( !v10 )
      {
        v11 = (float *)(result + 6128);
        v12 = FIELD_F32(result, 6136);
        if ( FIELD_F32(result, 6128) <= v12 )
        {
LABEL_41:
          *v11 = v12;
          FIELD_F32(result, 148) = v12 / 161.1;
          *v8 = 6;
          FIELD_U8(result, 6182) = 0;
          return 0;
        }
      }
      return result;
    case 6:
      FIELD_U8(result, 6185) = 1;
      return result;
    default:
      return result;
  }
}
