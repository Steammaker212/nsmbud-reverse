/* sub_605117A0
 * address: 0x605117A0   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605117A0(int a1)
{
  int v1; // r4
  int v2; // r6
  int v3; // r0
  int v4; // r1
  int i; // r3
  int v6; // r1
  int result; // r0
  int v8; // r6
  int v9; // r1
  int v10; // r2
  int v11; // r4
  unsigned int v12; // r1
  int v13; // r6
  int v14; // r1
  int v15; // r2
  int v16; // r4
  unsigned int v17; // r1

  v1 = a1 + 56;
  v2 = dword_60CA84C4;
  v3 = sub_6047482C(a1 + 56, 5u);
  if ( !v3 )
    return 0;
  v4 = FIELD_U32(v3, 56);
  if ( v2 != v4 )
  {
    for ( i = 1; *(unsigned __int8 *)(v2 + i - 1) == *(unsigned __int8 *)(v4 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(v2 + i - 1) )
        goto LABEL_10;
      if ( i >= 524289 || *(unsigned __int8 *)(v2 + i) != *(unsigned __int8 *)(v4 + i) )
        break;
      if ( !*(_BYTE *)(v2 + i) )
        goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  v6 = (int)FIELD_F32(v3, 16) - 1;
  result = 3;
  switch ( v6 )
  {
    case 0:
      return result;
    case 1:
      return 6;
    case 2:
      v8 = dword_60CA84B4;
      v9 = sub_6047482C(v1, 1u);
      result = 9;
      if ( !v9 )
        return result;
      v10 = FIELD_U32(v9, 56);
      if ( v8 == v10 )
        goto LABEL_22;
      v11 = 1;
      while ( 2 )
      {
        if ( *(unsigned __int8 *)(v8 + v11 - 1) != *(unsigned __int8 *)(v10 + v11 - 1) )
          return result;
        if ( !*(_BYTE *)(v8 + v11 - 1) )
          goto LABEL_22;
        if ( v11 < 524289 && *(unsigned __int8 *)(v8 + v11) == *(unsigned __int8 *)(v10 + v11) )
        {
          if ( *(_BYTE *)(v8 + v11) )
          {
            v11 += 2;
            continue;
          }
LABEL_22:
          v12 = (unsigned int)FIELD_F32(v9, 16) - 1;
          if ( v12 < 3 )
            return dword_60B03824[v12];
        }
        return result;
      }
    case 3:
      v13 = dword_60CA84B4;
      v14 = sub_6047482C(v1, 1u);
      result = 25;
      if ( !v14 )
        return result;
      v15 = FIELD_U32(v14, 56);
      if ( v13 == v15 )
        goto LABEL_33;
      v16 = 1;
      break;
    default:
      return 0;
  }
  while ( *(unsigned __int8 *)(v13 + v16 - 1) == *(unsigned __int8 *)(v15 + v16 - 1) )
  {
    if ( !*(_BYTE *)(v13 + v16 - 1) )
      goto LABEL_33;
    if ( v16 >= 524289 || *(unsigned __int8 *)(v13 + v16) != *(unsigned __int8 *)(v15 + v16) )
      return result;
    if ( !*(_BYTE *)(v13 + v16) )
    {
LABEL_33:
      v17 = (unsigned int)FIELD_F32(v14, 16) - 1;
      if ( v17 < 3 )
        return 2 * v17 + 27;
      return result;
    }
    v16 += 2;
  }
  return result;
}
