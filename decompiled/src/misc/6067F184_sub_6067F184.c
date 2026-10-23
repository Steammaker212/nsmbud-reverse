/* sub_6067F184
 * address: 0x6067F184   size: 724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6067F184(int *a1)
{
  unsigned int v1; // r3
  int v2; // r2
  float v3; // s2
  int v4; // r1
  float *v5; // r2
  float *v6; // r2
  float *v7; // r2
  float *v8; // r2
  float *v9; // r2
  float *v10; // r2
  float *v11; // r0

  v1 = *((unsigned __int8 *)a1 + 3049);
  if ( v1 >= 8 )
    v1 = 8;
  if ( v1 )
  {
    v2 = *a1;
    v3 = FIELD_F32(dword_60CC6484, 48);
    if ( *(float *)(*a1 + 292) <= v3 && FIELD_F32(v2, 296) <= FIELD_F32(dword_60CC6484, 52) )
    {
      v4 = 0;
      if ( FIELD_F32(dword_60CC6484, 44) <= FIELD_F32(v2, 304) )
        return v4;
    }
    if ( v1 != 1 )
    {
      v5 = (float *)a1[1];
      if ( v5[73] <= v3 && v5[74] <= FIELD_F32(dword_60CC6484, 52) )
      {
        v4 = 0;
        if ( FIELD_F32(dword_60CC6484, 44) <= v5[76] )
          return v4;
      }
      if ( v1 != 2 )
      {
        v6 = (float *)a1[2];
        if ( v6[73] <= v3 && v6[74] <= FIELD_F32(dword_60CC6484, 52) )
        {
          v4 = 0;
          if ( FIELD_F32(dword_60CC6484, 44) <= v6[76] )
            return v4;
        }
        if ( v1 != 3 )
        {
          v7 = (float *)a1[3];
          if ( v7[73] <= v3 && v7[74] <= FIELD_F32(dword_60CC6484, 52) )
          {
            v4 = 0;
            if ( FIELD_F32(dword_60CC6484, 44) <= v7[76] )
              return v4;
          }
          if ( v1 != 4 )
          {
            v8 = (float *)a1[4];
            if ( v8[73] <= v3 && v8[74] <= FIELD_F32(dword_60CC6484, 52) )
            {
              v4 = 0;
              if ( FIELD_F32(dword_60CC6484, 44) <= v8[76] )
                return v4;
            }
            if ( v1 != 5 )
            {
              v9 = (float *)a1[5];
              if ( v9[73] <= v3 && v9[74] <= FIELD_F32(dword_60CC6484, 52) )
              {
                v4 = 0;
                if ( FIELD_F32(dword_60CC6484, 44) <= v9[76] )
                  return v4;
              }
              if ( v1 != 6 )
              {
                v10 = (float *)a1[6];
                if ( v10[73] <= v3 && v10[74] <= FIELD_F32(dword_60CC6484, 52) )
                {
                  v4 = 0;
                  if ( FIELD_F32(dword_60CC6484, 44) <= v10[76] )
                    return v4;
                }
                if ( v1 != 7 )
                {
                  v11 = (float *)a1[7];
                  if ( v11[73] <= v3 && v11[74] <= FIELD_F32(dword_60CC6484, 52) )
                    return FIELD_F32(dword_60CC6484, 44) > v11[76];
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}
