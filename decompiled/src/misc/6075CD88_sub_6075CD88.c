/* sub_6075CD88
 * address: 0x6075CD88   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075CD88(int a1)
{
  _DWORD *v2; // r6
  float *v3; // r5
  float v4; // s2
  float v5; // s0
  int v6; // r0
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r1
  int result; // r0

  v2 = (_DWORD *)(a1 + 1116);
  v3 = (float *)(a1 + 1112);
  FIELD_F32(a1, 1112) = FIELD_F32(a1, 1116) + FIELD_F32(a1, 1112);
  v4 = sub_60782C24(dword_60CC2C60, FIELD_U32(a1, 172));
  v5 = *v3;
  v6 = 0;
  if ( *v3 >= v4 )
  {
    v7 = FIELD_U32(a1, 1120);
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        v5 = 0.0;
        *v3 = 0.0;
        v6 = 1;
      }
    }
    else
    {
      v5 = v4;
      *v3 = v4;
    }
  }
  v8 = FIELD_U32(a1, 172);
  if ( v8 == 1 )
  {
    v9 = FIELD_U32(a1, 176);
    if ( v9 && (v10 = v9 - 1, (FIELD_U32(a1, 176) = v10) != 0) )
    {
      v5 = 0.0;
      v8 = 1;
      *v2 = 0;
      *v3 = 0.0;
    }
    else
    {
      *v2 = 1065353216;
      v8 = 1;
      if ( v6 == 1 )
      {
        FIELD_U32(a1, 176) = sub_60792ADC(a1, 60, v5) + 30;
        v5 = *v3;
        v8 = FIELD_U32(a1, 172);
      }
    }
  }
  result = sub_60782A74(dword_60CC2C60, v8, v5);
  switch ( result )
  {
    case 0:
      result = sub_60437644(*(_DWORD **)(a1 + 564), 0);
      break;
    case 1:
    case 2:
      result = sub_60437644(*(_DWORD **)(a1 + 564), 5);
      break;
    case 3:
    case 4:
      result = sub_60437644(*(_DWORD **)(a1 + 564), 7);
      break;
    case 5:
    case 6:
      result = sub_60437644(*(_DWORD **)(a1 + 564), 9);
      break;
    default:
      return result;
  }
  return result;
}
