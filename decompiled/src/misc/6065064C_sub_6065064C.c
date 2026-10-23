/* sub_6065064C
 * address: 0x6065064C   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6065064C(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r0
  int v5; // r5
  char v6; // r8
  _BYTE *v7; // r7
  int v8; // r6
  int v9; // r0
  int v10; // r0
  int *result; // r0
  int v12; // r1
  int v13; // r1
  int v14; // r1

  v2 = FIELD_S8(a1, 6552);
  if ( (unsigned __int8)v2 == 255 )
  {
    v6 = 0;
    LOBYTE(v5) = 0;
  }
  else
  {
    if ( (unsigned __int8)v2 >= 6u )
      v2 = 0;
    v3 = dword_60C99DD4 + 72 * v2;
    v4 = FIELD_U32(v3, 304);
    v5 = FIELD_U32(v3, 308) + 1;
    if ( v4 != 6 || (char)v5 == 1 )
    {
      if ( v4 == 5 )
      {
        v6 = 9;
      }
      else if ( v4 == 4 )
      {
        v6 = 10;
      }
      else
      {
        v6 = FIELD_U8(v3, 308) + 1;
      }
    }
    else
    {
      v6 = FIELD_U8(v3, 308) + 4;
    }
  }
  v7 = (_BYTE *)(a1 + 7548);
  if ( FIELD_U8(a1, 7548) != (unsigned __int8)v5 )
  {
    if ( FIELD_U8(a1, 7548) )
    {
      if ( (_BYTE)v5 )
        goto LABEL_19;
      v8 = a1 + 7256;
      *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 7256) + 12) + 24) = -1082130432;
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7256) + 12) + 4), 0);
      sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7256) + 12) + 4));
      v9 = 2;
    }
    else
    {
      v8 = a1 + 7256;
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7256) + 12) + 4), 0);
      v10 = **(_DWORD **)(FIELD_U32(a1, 7256) + 12);
      FIELD_U32(v10, 20) = 0;
      FIELD_U32(v10, 28) |= 2u;
      *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 7256) + 12) + 24) = 1065353216;
      sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7256) + 12) + 4));
      v9 = 1;
    }
    FIELD_U32(v8, 280) = v9;
  }
LABEL_19:
  result = (int *)(a1 + 7536);
  if ( FIELD_U32(a1, 7536) == 2 )
  {
    *v7 = v5;
    v12 = 2;
  }
  else
  {
    v13 = FIELD_U32(a1, 7260);
    FIELD_F32(v13, 20) = (float)v6;
    FIELD_U32(v13, 28) |= 2u;
    v12 = *result;
    *v7 = v5;
    if ( !v12 )
      return result;
  }
  if ( (*(_BYTE *)(**(_DWORD **)(FIELD_U32(a1, 7256) + 12) + 28) & 0x10) != 0 )
  {
    if ( v12 == 2 )
    {
      v14 = FIELD_U32(a1, 7260);
      FIELD_U32(v14, 20) = 0;
      FIELD_U32(v14, 28) |= 2u;
    }
    *result = 0;
  }
  return result;
}
