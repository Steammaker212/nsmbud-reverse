/* sub_6085A3B0
 * address: 0x6085A3B0   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_WORD *__fastcall sub_6085A3B0(int a1, int a2)
{
  unsigned __int16 *v2; // r7
  int v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r1
  _DWORD *v7; // r5
  int v8; // r4
  int v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r1
  int v12; // r6
  int v13; // r8
  int v14; // r0
  _WORD *result; // r0

  v2 = *(unsigned __int16 **)(a2 + 196);
  v4 = *v2;
  if ( v4 == 2 )
  {
    v10 = (_DWORD *)sub_60855BC8(16);
    v11 = 0;
    v7 = 0;
    if ( v10 )
    {
      *v10 = 0;
      v10[1] = 0;
      v10[2] = 0;
      v10[3] = 0;
      v11 = v10;
    }
    FIELD_U32(a1, 196) = v11;
    v8 = a1 + 196;
    v12 = *((_DWORD *)v2 + 3);
    v13 = sub_608A7E58(v12);
    v14 = sub_60855BC8(44);
    if ( v14 )
    {
      v7 = (_DWORD *)sub_608A7EBC(v14, 5, 3, v13 - 1);
      *v7 = off_60C5A3F0;
    }
    sub_60860584(v7, v12);
    goto LABEL_13;
  }
  if ( v4 == 1 )
  {
    v5 = (_DWORD *)sub_60855BC8(16);
    v6 = 0;
    v7 = 0;
    if ( v5 )
    {
      *v5 = 0;
      v5[1] = 0;
      v5[2] = 0;
      v5[3] = 0;
      v6 = v5;
    }
    FIELD_U32(a1, 196) = v6;
    v8 = a1 + 196;
    v9 = sub_60855BC8(52);
    if ( v9 )
      v7 = (_DWORD *)sub_6085F88C(v9, 5, 3, 1, 0.0, 0.0);
    sub_6085F970(v7, *((_DWORD *)v2 + 3));
LABEL_13:
    *(_DWORD *)(*(_DWORD *)v8 + 12) = v7;
    goto LABEL_15;
  }
  FIELD_U32(a1, 196) = 0;
  v8 = a1 + 196;
LABEL_15:
  result = *(_WORD **)v8;
  if ( *(_DWORD *)v8 )
  {
    FIELD_U8(a1, 192) = 4;
    *result = *v2;
  }
  return result;
}
