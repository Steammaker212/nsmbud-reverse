/* sub_6064AF30
 * address: 0x6064AF30   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064AF30(int a1)
{
  int v2; // r0
  char v3; // r5
  int v4; // r0
  int v5; // r7
  int v6; // r0
  int *v7; // r7
  int result; // r0
  int v9; // r0
  float v10; // s16
  int v11; // r0
  int v12; // r2
  int *v13; // r6
  int v14; // t1

  v2 = FIELD_S8(a1, 6552);
  if ( (unsigned __int8)v2 == 255 )
  {
    v3 = 0;
  }
  else
  {
    v3 = 9;
    if ( (unsigned __int8)v2 >= 6u )
      v2 = 0;
    v4 = *(_DWORD *)(dword_60C99DD4 + 72 * v2 + 308);
    if ( v4 != 5 )
    {
      v3 = v4 + 1;
      if ( v4 == 4 )
        v3 = 10;
    }
  }
  if ( FIELD_U8(a1, 7356) != (unsigned __int8)v3 )
  {
    if ( FIELD_U8(a1, 7356) )
    {
      if ( v3 )
        goto LABEL_15;
      v5 = a1 + 7260;
      *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 7260) + 12) + 24) = -1082130432;
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7260) + 12) + 4), 0);
      sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7260) + 12) + 4));
      v6 = 2;
    }
    else
    {
      v5 = a1 + 7260;
      *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 7260) + 12) + 24) = 1065353216;
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7260) + 12) + 4), 0);
      sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7260) + 12) + 4));
      v6 = 1;
    }
    FIELD_U32(v5, 88) = v6;
  }
LABEL_15:
  v7 = (int *)(a1 + 7348);
  result = 2;
  if ( FIELD_U32(a1, 7348) != 2 )
  {
    v9 = FIELD_U32(a1, 7272);
    v10 = (float)v3;
    FIELD_F32(v9, 20) = v10;
    FIELD_U32(v9, 28) |= 2u;
    *(_DWORD *)(FIELD_U32(a1, 7272) + 24) = 0;
    Animation_update(FIELD_U32(a1, 7272));
    v11 = FIELD_U32(a1, 7276);
    FIELD_F32(v11, 20) = v10;
    FIELD_U32(v11, 28) |= 2u;
    result = *v7;
  }
  FIELD_U8(a1, 7356) = v3;
  v12 = **(_DWORD **)(FIELD_U32(a1, 7260) + 12);
  if ( result )
  {
    if ( (FIELD_U8(v12, 28) & 0x10) != 0 )
    {
      if ( result == 2 )
      {
        v14 = FIELD_U32(a1, 7272);
        v13 = (int *)(a1 + 7272);
        FIELD_U32(v14, 20) = 0;
        FIELD_U32(v14, 28) |= 2u;
        *(_DWORD *)(*v13 + 24) = 0;
        Animation_update(*v13);
        *(_DWORD *)(v13[1] + 24) = 0;
      }
      *v7 = 0;
      return 0;
    }
  }
  else
  {
    FIELD_U32(v12, 20) = 0;
    FIELD_U32(v12, 28) |= 2u;
    *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 7260) + 12) + 24) = 0;
    return 0;
  }
  return result;
}
