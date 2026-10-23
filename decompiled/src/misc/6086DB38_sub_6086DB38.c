/* sub_6086DB38
 * address: 0x6086DB38   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6086DB38(int *a1, int a2, float a3)
{
  int v3; // r12
  int v4; // r0
  int v5; // r0
  float *v6; // r3
  float *v7; // r3
  float v8; // s2
  float *v9; // r0
  float result; // s0
  float *v11; // r3
  float v12; // s2
  int v13; // r12

  v3 = *a1;
  v4 = *((unsigned __int16 *)a1 + 9) - 1;
  if ( *(float *)(v3 + 4 * v4) <= a3 )
  {
    FIELD_U32(a2, 8) = (unsigned __int16)v4;
    v9 = (float *)(v3 + 4 * (unsigned __int16)v4);
    result = *v9 + 1.0;
    *(float *)a2 = *v9;
    FIELD_F32(a2, 4) = result;
  }
  else
  {
    v5 = FIELD_U32(a2, 8);
    v6 = (float *)(v3 + 4 * v5);
    if ( *v6 <= a3 )
    {
      v11 = v6 + 1;
      --v5;
      do
      {
        v12 = *v11;
        ++v5;
        ++v11;
      }
      while ( v12 <= a3 );
    }
    else
    {
      v7 = v6 - 1;
      do
      {
        v8 = *v7;
        --v5;
        --v7;
      }
      while ( v8 > a3 );
    }
    FIELD_U32(a2, 8) = v5;
    v13 = v3 + 4 * v5;
    *(_DWORD *)a2 = *(_DWORD *)v13;
    result = FIELD_F32(v13, 4);
    FIELD_F32(a2, 4) = result;
  }
  return result;
}
