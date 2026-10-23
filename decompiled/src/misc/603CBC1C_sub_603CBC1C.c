/* sub_603CBC1C
 * address: 0x603CBC1C   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CBC1C(int result, int a2, int a3, signed int a4)
{
  int v4; // r5
  bool v5; // zf
  int *v6; // r2
  int v7; // r3
  int v8; // r5
  float v9; // s0
  int v10; // r5
  float v11; // s0
  float v12; // s2
  float v13; // s18
  float v14; // s16
  float *v15; // r3
  int v16; // r4
  char *v17; // r5

  v5 = a2 == -1;
  if ( a2 != -1 )
    a4 = 6300;
  v6 = (int *)(result + 11864);
  if ( a2 != -1 )
  {
    v4 = *(_DWORD *)(result + a4);
    v5 = v4 == 1;
  }
  if ( v5 )
  {
    *v6 = -1;
    return -1;
  }
  v7 = *v6;
  if ( *v6 == a2 )
    return result;
  if ( FIELD_U32(result, 11868) != -1 )
  {
    FIELD_U32(result, 11872) = a2;
    return result;
  }
  if ( !(v4 | a2) )
  {
    if ( v7 == -1 )
    {
      v8 = 0;
      FIELD_U32(result, 11884) = 0;
      goto LABEL_40;
    }
    if ( (unsigned int)(v7 - 2) < 2 )
    {
      v10 = 2;
    }
    else
    {
      v9 = *(float *)(**(_DWORD **)(FIELD_U32(result, 6308) + 20) + 20);
      v10 = 0;
      if ( v7 == 1 )
      {
        if ( v9 >= 1.0 )
          v10 = 2;
      }
      else if ( !v7 && v9 >= 64.0 )
      {
        v10 = 2;
        if ( v9 >= 66.0 )
        {
          v10 = 0;
          if ( v9 < 73.0 )
            v10 = 2;
        }
      }
    }
    FIELD_U32(result, 11884) = v10;
LABEL_27:
    v11 = *(float *)(**(_DWORD **)(FIELD_U32(result, 6308) + 20) + 20);
    if ( (unsigned int)(v7 - 2) < 2 )
    {
      v8 = 2;
      if ( v11 < 1.0 )
        goto LABEL_40;
      v12 = 3.0;
      v8 = 3;
    }
    else
    {
      v8 = 0;
      if ( v7 == 1 )
      {
        if ( v11 < 1.0 )
          goto LABEL_40;
        v12 = 4.0;
        v8 = 2;
      }
      else
      {
        if ( v7 )
          goto LABEL_40;
        if ( v11 < 64.0 )
          goto LABEL_40;
        v8 = 1;
        if ( v11 < 66.0 )
          goto LABEL_40;
        v8 = 2;
        if ( v11 < 71.0 )
          goto LABEL_40;
        v12 = 73.0;
        v8 = 0;
      }
    }
    if ( v11 < v12 )
      v8 = 1;
    goto LABEL_40;
  }
  FIELD_U32(result, 11884) = 3;
  if ( v7 != -1 )
    goto LABEL_27;
  v8 = 0;
LABEL_40:
  v13 = 0.0;
  v14 = 1.0;
  switch ( a2 )
  {
    case 0:
      if ( (unsigned int)(v8 - 1) < 3 )
      {
        v15 = (float *)((char *)&unk_60B01050 + 4 * v8 - 4);
        goto LABEL_46;
      }
      break;
    case 1:
      if ( (unsigned int)(v8 - 1) < 3 )
      {
        v15 = (float *)((char *)&unk_60B0105C + 4 * v8 - 4);
        goto LABEL_46;
      }
      break;
    case 2:
      v15 = (float *)((char *)&unk_60AF2804 + 4 * v8);
LABEL_46:
      v13 = *v15;
      break;
    case 3:
      v14 = 0.0;
      v13 = 2.0;
      break;
    default:
      break;
  }
  v16 = **(_DWORD **)(FIELD_U32(result, 6308) + 20);
  *v6 = a2;
  v17 = &byte_60C98AA0[12 * a2];
  TexAnim_play(v16, FIELD_U32(result, 6304), v17 + 80);
  AnimationCtrl_setRepeat((ModelAnimation *)(v16 + 4), *((_DWORD *)v17 + 22));
  if ( (float)(v14 * FIELD_F32(v16, 24)) < 0.0 )
    sub_6041838C((ModelAnimation *)(v16 + 4));
  FIELD_F32(v16, 24) = v14;
  FIELD_F32(v16, 20) = v13;
  result = FIELD_U32(v16, 28) | 2;
  FIELD_U32(v16, 28) = result;
  return result;
}
