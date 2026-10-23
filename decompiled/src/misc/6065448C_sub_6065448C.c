/* sub_6065448C
 * address: 0x6065448C   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065448C(int result)
{
  _BYTE *v1; // r1
  _DWORD *v2; // r4
  float v3; // s6
  float v4; // s0
  _BYTE *v5; // r3
  int v6; // lr
  float v7; // s4
  float v8; // s2
  int v9; // r12
  float v10; // s8
  int v11; // r3
  int v12; // t1
  _DWORD *v13; // r0

  v1 = (_BYTE *)(result + 6880);
  if ( FIELD_U8(result, 6880) )
  {
    v2 = (_DWORD *)(result + 6876);
    v3 = FIELD_F32(result, 6660);
    v4 = FIELD_F32(result, 6876);
    if ( v4 < v3 )
    {
      v5 = (_BYTE *)(result + 6648);
      if ( !FIELD_U8(result, 6648) )
      {
        v6 = 0;
LABEL_23:
        *v5 = 1;
LABEL_24:
        v13 = (_DWORD *)(result + 4 * v6);
        v13[1692] = 1065353216;
        v13[1701] = 8;
        v13[1710] = 0;
        goto LABEL_25;
      }
      goto LABEL_25;
    }
    v7 = FIELD_F32(result, 6756);
    if ( v4 > v7 )
    {
      v5 = (_BYTE *)(result + 6656);
      if ( !FIELD_U8(result, 6656) )
      {
        v6 = 8;
        goto LABEL_23;
      }
LABEL_25:
      *v2 = 0;
      *v1 = 0;
      return 0;
    }
    v8 = FIELD_F32(result, 6672);
    if ( v4 > v3 && v4 < v8 )
    {
      v9 = 1;
      v6 = 0;
      goto LABEL_19;
    }
    v10 = FIELD_F32(result, 6684);
    if ( v4 > v8 && v4 < v10 )
    {
      v9 = 2;
      v6 = 1;
LABEL_14:
      v3 = v8;
      v8 = v10;
      goto LABEL_19;
    }
    v8 = FIELD_F32(result, 6696);
    if ( v4 <= v10 || v4 >= v8 )
    {
      v10 = FIELD_F32(result, 6708);
      if ( v4 > v8 && v4 < v10 )
      {
        v9 = 4;
        v6 = 3;
        goto LABEL_14;
      }
      v8 = FIELD_F32(result, 6720);
      if ( v4 <= v10 || v4 >= v8 )
      {
        v10 = FIELD_F32(result, 6732);
        if ( v4 > v8 && v4 < v10 )
        {
          v9 = 6;
          v6 = 5;
          goto LABEL_14;
        }
        v8 = FIELD_F32(result, 6744);
        if ( v4 <= v10 || v4 >= v8 )
        {
          v6 = 0;
          if ( v4 <= v8 || v4 >= v7 )
            goto LABEL_24;
          v3 = FIELD_F32(result, 6744);
          v9 = 8;
          v6 = 7;
          v8 = FIELD_F32(result, 6756);
          goto LABEL_19;
        }
        v9 = 7;
        v6 = 6;
      }
      else
      {
        v9 = 5;
        v6 = 4;
      }
    }
    else
    {
      v9 = 3;
      v6 = 2;
    }
    v3 = v10;
LABEL_19:
    if ( fabsf(v4 - v3) >= fabsf(v4 - v8) )
    {
      v11 = result + v9;
      v6 = v9;
    }
    else
    {
      v11 = result + v6;
    }
    v12 = FIELD_U8(v11, 6648);
    v5 = (_BYTE *)(v11 + 6648);
    if ( v12 )
      goto LABEL_25;
    goto LABEL_23;
  }
  return result;
}
