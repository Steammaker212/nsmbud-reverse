/* sub_6043CF50
 * address: 0x6043CF50   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6043CF50(_DWORD *a1)
{
  int v1; // r1
  _DWORD *result; // r0
  int v3; // r2
  int v4; // r1
  _DWORD *v5; // r4
  _DWORD *v6; // r1
  int v7; // r2
  int v8; // r3
  _DWORD *v9; // r3
  int v10; // r1

  v1 = a1[1];
  if ( !v1 )
    return 0;
  if ( (FIELD_U8(v1, 12) & 1) != 0
    && ((v3 = FIELD_U32(v1, 4)) == 0 || (FIELD_U8(v3, 12) & 1) != 0)
    && (a1[3] ^= 1u,
        FIELD_U32(v1, 12) ^= 1u,
        *(_DWORD *)(a1[2] + 12) ^= 1u,
        v4 = a1[2],
        (v5 = *(_DWORD **)(v4 + 4)) != 0)
    && (v5[3] & 1) == 0 )
  {
    FIELD_U32(v4, 4) = v5[2];
    v5[2] = v4;
    v5[3] = FIELD_U32(v4, 12);
    FIELD_U32(v4, 12) = 0;
    a1[2] = v5;
    a1[2] = v5[1];
    v5[1] = a1;
    v5[3] = a1[3];
    a1[3] = 0;
    v5[3] ^= 1u;
    *(_DWORD *)(v5[1] + 12) ^= 1u;
    *(_DWORD *)(v5[2] + 12) ^= 1u;
  }
  else
  {
    v5 = a1;
  }
  v6 = (_DWORD *)sub_6043CF50(v5[1]);
  v5[1] = v6;
  result = (_DWORD *)v5[2];
  if ( !result || (result[3] & 1) != 0 )
  {
    result = v5;
  }
  else
  {
    v5[2] = result[1];
    result[1] = v5;
    result[3] = v5[3];
    v5[3] = 0;
    v6 = (_DWORD *)result[1];
  }
  if ( !v6 )
    return result;
  v7 = v6[3];
  if ( (v7 & 1) != 0 || (v8 = v6[1]) == 0 || (FIELD_U8(v8, 12) & 1) != 0 )
  {
    v9 = v6;
    if ( (v7 & 1) != 0 )
      return result;
    goto LABEL_23;
  }
  result[1] = v6[2];
  v6[2] = result;
  v6[3] = result[3];
  result[3] = 0;
  v9 = (_DWORD *)v6[1];
  if ( !v9 )
    return v6;
  result = v6;
  if ( (v9[3] & 1) == 0 )
  {
LABEL_23:
    v10 = result[2];
    if ( v10 )
    {
      if ( (FIELD_U8(v10, 12) & 1) == 0 )
      {
        result[3] ^= 1u;
        v9[3] ^= 1u;
        *(_DWORD *)(result[2] + 12) ^= 1u;
      }
    }
  }
  return result;
}
