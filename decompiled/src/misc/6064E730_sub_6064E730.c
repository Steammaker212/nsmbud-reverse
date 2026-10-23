/* sub_6064E730
 * address: 0x6064E730   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6064E730(int a1)
{
  int v2; // r0
  int v3; // r5
  _BYTE *v4; // r6
  int v5; // r7
  int v6; // r0
  int v7; // r0
  int *result; // r0
  int v9; // r1
  int v10; // r1
  int v11; // r1

  v2 = FIELD_S8(a1, 6552);
  if ( (unsigned __int8)v2 == 255 )
  {
    LOBYTE(v3) = 0;
  }
  else
  {
    if ( (unsigned __int8)v2 >= 6u )
      v2 = 0;
    v3 = *(_DWORD *)(dword_60C99DD4 + 72 * v2 + 308) + 1;
  }
  v4 = (_BYTE *)(a1 + 7318);
  if ( FIELD_U8(a1, 7318) != (unsigned __int8)v3 )
  {
    if ( FIELD_U8(a1, 7318) )
    {
      if ( (_BYTE)v3 )
        goto LABEL_12;
      v5 = a1 + 7256;
      *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 7256) + 12) + 24) = -1082130432;
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7256) + 12) + 4), 0);
      sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7256) + 12) + 4));
      v6 = 2;
    }
    else
    {
      v5 = a1 + 7256;
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7256) + 12) + 4), 0);
      v7 = **(_DWORD **)(FIELD_U32(a1, 7256) + 12);
      FIELD_U32(v7, 20) = 0;
      FIELD_U32(v7, 28) |= 2u;
      *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 7256) + 12) + 24) = 1065353216;
      sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7256) + 12) + 4));
      v6 = 1;
    }
    FIELD_U32(v5, 24) = v6;
  }
LABEL_12:
  result = (int *)(a1 + 7280);
  if ( FIELD_U32(a1, 7280) == 2 )
  {
    *v4 = v3;
    v9 = 2;
  }
  else
  {
    v10 = FIELD_U32(a1, 7260);
    FIELD_F32(v10, 20) = (float)(char)v3;
    FIELD_U32(v10, 28) |= 2u;
    v9 = *result;
    *v4 = v3;
    if ( !v9 )
      return result;
  }
  if ( (*(_BYTE *)(**(_DWORD **)(FIELD_U32(a1, 7256) + 12) + 28) & 0x10) != 0 )
  {
    if ( v9 == 2 )
    {
      v11 = FIELD_U32(a1, 7260);
      FIELD_U32(v11, 20) = 0;
      FIELD_U32(v11, 28) |= 2u;
    }
    *result = 0;
  }
  return result;
}
