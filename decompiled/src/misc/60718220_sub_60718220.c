/* sub_60718220
 * address: 0x60718220   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_60718220(int a1, float *a2, char a3, char a4, float a5, float a6, float a7)
{
  float v9; // s22
  int v10; // r6
  float *i; // r5
  float *result; // r0
  int v13; // r1
  float v14; // s0
  float v15; // s4
  float v16; // s8
  float v17; // s18
  float v18; // s0

  v9 = flt_60B09E34[(_DWORD)a2];
  if ( (unsigned __int8)((_BYTE)a2 - 1) <= 1u )
  {
    v10 = 0;
    for ( i = (float *)(a1 + 14604); ; i += 10 )
    {
      *(i - 7) = a7;
      if ( !*((_BYTE *)i - 20) )
      {
        i -= 5;
        goto LABEL_15;
      }
      *(i - 2) = a7;
      result = (float *)*(unsigned __int8 *)i;
      if ( !*(_BYTE *)i )
        break;
      v10 += 2;
      if ( v10 >= 40 )
        return result;
    }
    ++v10;
  }
  else
  {
    v10 = 0;
    for ( i = (float *)(a1 + 14584); ; i += 5 )
    {
      *(i - 2) = a7;
      result = (float *)*(unsigned __int8 *)i;
      if ( !*(_BYTE *)i )
        break;
      if ( result == a2
        && sqrtf(
             (float)((float)((float)(a6 - *(i - 3)) * (float)(a6 - *(i - 3)))
                   + (float)((float)(a5 - *(i - 4)) * (float)(a5 - *(i - 4))))
           + (float)((float)(a7 - a7) * (float)(a7 - a7))) <= *(i - 1) )
      {
        if ( a2 == (float *)4 )
        {
          v15 = *(i - 2) - a7;
          v16 = a5 + (float)((float)(*(i - 4) - a5) * 0.5);
          v17 = a6 + (float)((float)(*(i - 3) - a6) * 0.5);
          *(i - 4) = v16;
          v18 = fabsf(v16 - a5);
          *(i - 3) = v17;
          *(i - 2) = a7 + (float)(v15 * 0.5);
          *(i - 1) = v9 + (float)(v18 + v18);
        }
        return result;
      }
      if ( ++v10 >= 40 )
        return result;
    }
  }
LABEL_15:
  v13 = a1 + 20 * v10;
  FIELD_F32(v13, 14568) = a5;
  result = (float *)(v13 + 14572);
  FIELD_F32(v13, 14572) = a6;
  FIELD_F32(v13, 14576) = a7;
  *(_BYTE *)i = (_BYTE)a2;
  FIELD_F32(v13, 14580) = v9;
  FIELD_U8(v13, 14585) = a3;
  FIELD_U8(v13, 14586) = a4;
  if ( a2 == (float *)2 )
  {
    v14 = -94.0;
  }
  else
  {
    if ( a2 != (float *)1 )
      return result;
    v14 = -39.0;
  }
  *result = *result + v14;
  return result;
}
