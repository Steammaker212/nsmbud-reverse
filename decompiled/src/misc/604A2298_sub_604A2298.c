/* sub_604A2298
 * address: 0x604A2298   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604A2298(_DWORD *result)
{
  unsigned int v1; // r2
  unsigned int v2; // r4
  _DWORD *v3; // r7
  int v4; // r4
  _DWORD *v5; // r7
  int v6; // t1
  unsigned int v7; // r5
  float *v8; // r9
  float v9; // s4
  int v10; // r8
  float v11; // s6
  _DWORD *v12; // r10
  float v13; // s6
  float v14; // s6
  int v15; // r4

  if ( (int)result[5624] >= 1 )
  {
    v1 = 0;
    while ( 1 )
    {
      v2 = 0;
      if ( v1 < 4 )
        v2 = v1;
      v3 = &result[v2];
      v6 = v3[5069];
      v5 = v3 + 5069;
      v4 = v6;
      if ( !FIELD_U8(v6, 2689) )
        goto LABEL_22;
      v7 = 0;
      if ( v1 < 7 )
        v7 = v1;
      if ( !*((_BYTE *)result + v7 + 22388) )
        goto LABEL_22;
      v8 = (float *)&result[3 * v7];
      v9 = v8[5599];
      v10 = result[v7 + 5583];
      v11 = FIELD_F32(v4, 380) - v9;
      if ( v10 != 1 )
        v10 = 2;
      if ( v11 > 1.0 || v11 < -1.0 )
        break;
      v12 = v8 + 5600;
      v13 = FIELD_F32(v4, 384) - v8[5600];
      if ( v13 > 1.0 )
        goto LABEL_19;
      if ( v13 < -1.0 )
        goto LABEL_19;
      v14 = FIELD_F32(v4, 388) - v8[5601];
      if ( v14 > 1.0 || v14 < -1.0 )
        goto LABEL_19;
LABEL_22:
      if ( (signed int)++v1 >= result[5624] )
        goto LABEL_23;
    }
    v12 = v8 + 5600;
LABEL_19:
    FIELD_F32(v4, 416) = v9;
    FIELD_U32(v4, 420) = *v12;
    FIELD_F32(v4, 424) = v8[5601];
    v15 = *v5;
    if ( !*(_BYTE *)(*v5 + 2690) && !FIELD_U8(v15, 2691) )
    {
      FIELD_U8(v15, 2699) = 1;
      FIELD_U8(v15, 2691) = 1;
      FIELD_U32(v15, 500) = 2;
      FIELD_U32(v15, 2532) = v10;
      FIELD_U32(v15, 2560) = 1065353216;
      FIELD_U8(v15, 2693) = 1;
    }
    goto LABEL_22;
  }
LABEL_23:
  result[3241] = -1;
  result[3240] = -1;
  result[3239] = -1;
  result[3238] = -1;
  result[3237] = -1;
  result[3236] = -1;
  result[3235] = -1;
  result[3234] = -1;
  return result;
}
