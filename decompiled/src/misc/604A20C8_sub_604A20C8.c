/* sub_604A20C8
 * address: 0x604A20C8   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604A20C8(_DWORD *a1)
{
  _DWORD *v1; // r1
  int v2; // r2
  int v3; // r1
  _DWORD *v4; // r1
  int v5; // r2
  int v6; // r1
  _DWORD *v7; // r1
  int v8; // r2
  int v9; // r1
  _DWORD *result; // r0
  int v11; // r1
  int v12; // t1

  v1 = a1 + 5069;
  v2 = a1[5069];
  if ( FIELD_U8(v2, 2689) )
  {
    FIELD_U32(v2, 2656) = 1109393408;
    *(_BYTE *)(*v1 + 2702) = 1;
    v3 = *v1;
    if ( !FIELD_U8(v3, 2690) && !FIELD_U8(v3, 2691) )
    {
      FIELD_U8(v3, 2699) = 1;
      FIELD_U8(v3, 2691) = 1;
      FIELD_U32(v3, 500) = 5;
      FIELD_U32(v3, 2532) = 0;
      FIELD_U32(v3, 2560) = 1065353216;
      FIELD_U8(v3, 2693) = 1;
    }
  }
  v4 = a1 + 5070;
  v5 = a1[5070];
  if ( FIELD_U8(v5, 2689) )
  {
    FIELD_U32(v5, 2656) = 1109393408;
    *(_BYTE *)(*v4 + 2702) = 1;
    v6 = *v4;
    if ( !FIELD_U8(v6, 2690) && !FIELD_U8(v6, 2691) )
    {
      FIELD_U8(v6, 2699) = 1;
      FIELD_U8(v6, 2691) = 1;
      FIELD_U32(v6, 500) = 5;
      FIELD_U32(v6, 2532) = 0;
      FIELD_U32(v6, 2560) = 1065353216;
      FIELD_U8(v6, 2693) = 1;
    }
  }
  v7 = a1 + 5071;
  v8 = a1[5071];
  if ( FIELD_U8(v8, 2689) )
  {
    FIELD_U32(v8, 2656) = 1109393408;
    *(_BYTE *)(*v7 + 2702) = 1;
    v9 = *v7;
    if ( !FIELD_U8(v9, 2690) && !FIELD_U8(v9, 2691) )
    {
      FIELD_U8(v9, 2699) = 1;
      FIELD_U8(v9, 2691) = 1;
      FIELD_U32(v9, 500) = 5;
      FIELD_U32(v9, 2532) = 0;
      FIELD_U32(v9, 2560) = 1065353216;
      FIELD_U8(v9, 2693) = 1;
    }
  }
  v12 = a1[5072];
  result = a1 + 5072;
  v11 = v12;
  if ( FIELD_U8(v12, 2689) )
  {
    FIELD_U32(v11, 2656) = 1109393408;
    *(_BYTE *)(*result + 2702) = 1;
    result = (_DWORD *)*result;
    if ( !*((_BYTE *)result + 2690) && !*((_BYTE *)result + 2691) )
    {
      *((_BYTE *)result + 2699) = 1;
      *((_BYTE *)result + 2691) = 1;
      result[125] = 5;
      result[633] = 0;
      result[640] = 1065353216;
      *((_BYTE *)result + 2693) = 1;
    }
  }
  return result;
}
