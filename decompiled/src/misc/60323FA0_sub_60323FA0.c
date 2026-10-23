/* sub_60323FA0
 * address: 0x60323FA0   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60323FA0(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  char *v6; // r5
  char v7; // r0
  float v8; // s2
  float v9; // s0
  char v10; // r0
  float v11; // s2
  float v12; // s0
  float *v13; // r5
  float v14; // s0
  int v15; // r1
  float v16; // s2
  int result; // r0
  int v18; // [sp+0h] [bp-20h] BYREF
  float v19; // [sp+4h] [bp-1Ch]
  int v20; // [sp+8h] [bp-18h] BYREF
  int v21; // [sp+Ch] [bp-14h]

  v4 = FIELD_U32(a1, 7676);
  v2 = (_DWORD *)(a1 + 7676);
  v3 = v4;
  if ( v4 )
  {
    v5 = v3 - 1;
    *v2 = v5;
  }
  else
  {
    v5 = 0;
  }
  v6 = (char *)(a1 + 7682);
  switch ( FIELD_U8(a1, 7682) )
  {
    case 0:
      if ( !v5 )
      {
        if ( (FIELD_U8(a1, 7683) & 2) != 0 )
          SE_EMY_KILLER_SHOT_ref(a1);
        v7 = 1;
        goto LABEL_16;
      }
      break;
    case 1:
      if ( !FIELD_U32(a1, 7684) )
      {
        v8 = FIELD_F32(a1, 7632) - FIELD_F32(a1, 7636);
        FIELD_F32(a1, 7632) = v8;
        v9 = FIELD_F32(a1, 7628);
        if ( v8 < v9 )
        {
          FIELD_F32(a1, 7632) = v9;
          *v2 = 8;
          v10 = 2;
          goto LABEL_20;
        }
      }
      break;
    case 2:
      if ( !v5 )
      {
        if ( (FIELD_U8(a1, 7683) & 1) != 0 )
          SE_EMY_KILLER_SHOT_ref(a1);
        v7 = 3;
LABEL_16:
        *v6 = v7;
        FIELD_U32(a1, 7684) = 32;
      }
      break;
    case 3:
      if ( !FIELD_U32(a1, 7684) )
      {
        v11 = FIELD_F32(a1, 7636) + FIELD_F32(a1, 7632);
        FIELD_F32(a1, 7632) = v11;
        v12 = FIELD_F32(a1, 7624);
        if ( v11 >= v12 )
        {
          FIELD_F32(a1, 7632) = v12;
          *v2 = 8;
          v10 = 0;
LABEL_20:
          *v6 = v10;
        }
      }
      break;
    default:
      break;
  }
  if ( FIELD_U32(a1, 7640) == 1 )
  {
    v20 = -1056964608;
    v21 = 0;
    v13 = (float *)(a1 + 7632);
    v14 = FIELD_F32(a1, 7632);
    v18 = 1090519040;
    v19 = -v14;
  }
  else
  {
    v13 = (float *)(a1 + 7632);
    v15 = FIELD_U32(a1, 7632);
    v20 = -1056964608;
    v21 = v15;
    v18 = 1090519040;
    v19 = 0.0;
  }
  sub_60165340(a1 + 6176, &v20, &v18);
  v16 = *v13;
  FIELD_U32(a1, 7588) = FIELD_U32(a1, 112);
  FIELD_F32(a1, 7600) = (float)(v16 + -32.0) * 0.0625;
  FIELD_U8(a1, 7680) = 0;
  result = FIELD_U8(a1, 7681);
  if ( FIELD_U8(a1, 7681) )
  {
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6100));
    result = *(unsigned __int8 *)(**(_DWORD **)(FIELD_U32(a1, 6100) + 12) + 28);
    if ( (result & 4) != 0 )
    {
      FIELD_U8(a1, 7681) = 0;
      return 0;
    }
  }
  return result;
}
