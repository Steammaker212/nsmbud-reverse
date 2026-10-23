/* sub_608DEFB0
 * address: 0x608DEFB0   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608DEFB0(int a1, _DWORD *a2)
{
  int v2; // r2
  int v3; // r3
  _DWORD *v4; // lr
  int v5; // r3
  int v6; // r12
  int v7; // r2
  _DWORD *v8; // r2
  _DWORD *result; // r0

  v2 = *a2;
  if ( *a2 && *(_DWORD **)(v2 + 4) == a2 )
  {
    v4 = a2 + 3;
    FIELD_U32(v2, 4) = a2[2];
    v6 = a2[2];
    if ( v6 )
    {
      FIELD_U32(v6, 12) = a2[3];
      a2[2] = 0;
    }
  }
  else
  {
    v4 = a2 + 3;
    v3 = a2[3];
    if ( v3 )
      FIELD_U32(v3, 8) = a2[2];
    v5 = a2[2];
    if ( v5 )
    {
      FIELD_U32(v5, 12) = a2[3];
      a2[2] = 0;
    }
    else if ( *a2 )
    {
      *(_DWORD *)(*(_DWORD *)(*a2 + 4) + 12) = *v4;
    }
  }
  *v4 = 0;
  *a2 = 0;
  v7 = FIELD_U32(a1, 4);
  if ( v7 )
  {
    v8 = *(_DWORD **)(v7 + 12);
    v8[2] = a2;
    a2[3] = v8;
    *a2 = *v8;
    result = *(_DWORD **)(a1 + 4);
    result[3] = a2;
  }
  else
  {
    FIELD_U32(a1, 4) = a2;
    *a2 = a1;
    a2[3] = a2;
    return a2;
  }
  return result;
}
