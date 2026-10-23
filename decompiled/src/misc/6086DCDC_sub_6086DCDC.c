/* sub_6086DCDC
 * address: 0x6086DCDC   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6086DCDC(int *a1, int a2, float a3)
{
  int v3; // r12
  int v4; // r2
  unsigned int v5; // r0
  int v6; // r3
  unsigned int v7; // r2
  float v8; // s2
  float result; // s0
  int v10; // r3
  unsigned int v11; // r2

  v3 = *a1;
  v4 = *((unsigned __int16 *)a1 + 9) - 1;
  v5 = (unsigned int)a3;
  if ( (unsigned int)a3 >= *(unsigned __int8 *)(v3 + v4) )
  {
    FIELD_U32(a2, 8) = (unsigned __int16)v4;
    v8 = (float)*(unsigned __int8 *)(v3 + (unsigned __int16)v4);
    *(float *)a2 = v8;
    FIELD_F32(a2, 4) = v8 + 1.0;
    return v8 + 1.0;
  }
  else
  {
    v6 = FIELD_U32(a2, 8);
    if ( v5 >= *(unsigned __int8 *)(v3 + v6) )
    {
      v10 = v6 + 1;
      do
        v11 = *(unsigned __int8 *)(v3 + v10++);
      while ( v11 <= v5 );
      v6 = v10 - 2;
    }
    else
    {
      do
        v7 = *(unsigned __int8 *)(v3 - 1 + v6--);
      while ( v5 < v7 );
    }
    FIELD_U32(a2, 8) = v6;
    *(float *)a2 = (float)*(unsigned __int8 *)(v3 + v6);
    result = (float)*(unsigned __int8 *)(v3 + v6 + 1);
    FIELD_F32(a2, 4) = result;
  }
  return result;
}
