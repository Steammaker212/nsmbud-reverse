/* sub_60664960
 * address: 0x60664960   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60664960(int a1)
{
  int *i; // r1
  int v2; // r2
  bool v3; // zf
  int v4; // r2
  _BYTE *v5; // r3
  int v6; // r1
  _BYTE *result; // r0
  _DWORD v8[3]; // [sp+0h] [bp-Ch] BYREF

  v8[0] = 0;
  for ( i = *(int **)(a1 + 6368); i; i = (int *)i[1] )
  {
    v2 = *i;
    v3 = *i == 0;
    if ( *i )
    {
      v2 = FIELD_U32(v2, 2196);
      v3 = v2 == 0;
    }
    if ( !v3 && (unsigned __int8)(FIELD_U8(v2, 533) - 1) <= 1u )
    {
      v4 = FIELD_S8(v2, 84);
      if ( (unsigned __int8)v4 != 255 )
      {
        v5 = v8;
        if ( (unsigned __int8)v4 < 4u )
          v5 = (char *)v8 + v4;
        *v5 = 1;
      }
    }
  }
  v6 = v8[0];
  FIELD_U8(a1, 7276) = v8[0];
  result = (_BYTE *)(a1 + 7276);
  result[3] = HIBYTE(v6);
  result[2] = BYTE2(v6);
  result[1] = BYTE1(v6);
  return result;
}
