/* sub_60238D98
 * address: 0x60238D98   size: 948   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60238D98(_DWORD *a1)
{
  int v1; // r1
  int i; // r0
  int v4; // r10
  int v5; // r0
  int v6; // r0
  int32x4_t *v7; // r11
  int v8; // r1
  int *v9; // r0
  unsigned __int32 v10; // r12
  int v11; // r3
  int j; // r1
  int32x4_t *v13; // r2
  int v14; // r3
  int v15; // r3
  int v16; // r0
  int v17; // r0
  unsigned __int32 v18; // r12
  int v19; // r3
  int k; // r1
  int32x4_t *v21; // r2
  int v22; // r3
  int v23; // r3
  int result; // r0
  int *v25; // [sp+4h] [bp-14h]
  int *v26; // [sp+8h] [bp-10h]
  int v27; // [sp+Ch] [bp-Ch]
  int v28; // [sp+10h] [bp-8h]
  int v29; // [sp+14h] [bp-4h]

  v1 = 0;
  a1[59] = 0;
  v25 = a1 + 59;
  a1[318] = 0;
  v26 = a1 + 318;
  do
  {
    v27 = v1;
    for ( i = *(_DWORD *)(a1[4] + 4 * v1 + 116); i; i = FIELD_U32(i, 416) )
    {
      v29 = FIELD_U32(i, 352);
      if ( v29 >= 1 )
      {
        v4 = 0;
        v28 = i;
        do
        {
          v6 = sub_60881D78(i, v4);
          v7 = (int32x4_t *)v6;
          if ( v6 )
          {
            v8 = FIELD_U32(v6, 348);
            v9 = *(int **)(v8 + 552);
            if ( v9 || (v9 = *(int **)(v8 + 556)) != 0 )
              v5 = *v9;
            else
              LOWORD(v5) = 0;
            if ( sub_60237CE0((unsigned __int16)v5) == 3 )
            {
              v10 = v7[21].n128_u32[3];
              v11 = FIELD_U32(v10, 84);
              if ( v11 >= 1 )
              {
                for ( j = 0; j < v11; ++j )
                {
                  if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v10 + 4 * j + 88) + 12) + 2017) == 1 )
                  {
                    v13 = (int32x4_t *)FIELD_U32(v7 + (48) * 16, 0x0)[j];
                    if ( v13 )
                    {
                      do
                      {
                        if ( COERCE_FLOAT(vzipq_s32(
                                            vzipq_s32(v13[38], v13[40]).val[1],
                                            vzipq_s32(v13[39], v13[41]).val[1]).val[0].n128_u32[3]) <= 3600.0 )
                        {
                          v15 = a1[59];
                          if ( v15 < a1[60] )
                          {
                            *(_DWORD *)(a1[61] + 4 * v15) = v13;
                            ++a1[59];
                          }
                        }
                        else
                        {
                          v14 = a1[318];
                          if ( v14 < a1[319] )
                          {
                            *(_DWORD *)(a1[320] + 4 * v14) = v13;
                            ++a1[318];
                          }
                        }
                        v13 = (int32x4_t *)v13[7].n128_u32[2];
                      }
                      while ( v13 );
                      v11 = FIELD_U32(v10, 84);
                    }
                  }
                }
              }
              if ( COERCE_FLOAT(vzipq_s32(vzipq_s32(v7[38], v7[40]).val[1], vzipq_s32(v7[39], v7[41]).val[1]).val[0].n128_u32[3]) <= 3600.0 )
              {
                v17 = a1[59];
                if ( v17 < a1[60] )
                {
                  *(_DWORD *)(a1[61] + 4 * v17) = v7;
                  ++a1[59];
                }
              }
              else
              {
                v16 = a1[318];
                if ( v16 < a1[319] )
                {
                  *(_DWORD *)(a1[320] + 4 * v16) = v7;
                  ++a1[318];
                }
              }
              v18 = v7[21].n128_u32[3];
              v19 = FIELD_U32(v18, 84);
              if ( v19 >= 1 )
              {
                for ( k = 0; k < v19; ++k )
                {
                  if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v18 + 4 * k + 88) + 12) + 2017) )
                  {
                    v21 = (int32x4_t *)FIELD_U32(v7 + (48) * 16, 0x0)[k];
                    if ( v21 )
                    {
                      do
                      {
                        if ( COERCE_FLOAT(vzipq_s32(
                                            vzipq_s32(v21[38], v21[40]).val[1],
                                            vzipq_s32(v21[39], v21[41]).val[1]).val[0].n128_u32[3]) <= 3600.0 )
                        {
                          v23 = a1[59];
                          if ( v23 < a1[60] )
                          {
                            *(_DWORD *)(a1[61] + 4 * v23) = v21;
                            ++a1[59];
                          }
                        }
                        else
                        {
                          v22 = a1[318];
                          if ( v22 < a1[319] )
                          {
                            *(_DWORD *)(a1[320] + 4 * v22) = v21;
                            ++a1[318];
                          }
                        }
                        v21 = (int32x4_t *)v21[7].n128_u32[2];
                      }
                      while ( v21 );
                      v19 = FIELD_U32(v18, 84);
                    }
                  }
                }
              }
            }
          }
          ++v4;
          i = v28;
        }
        while ( v4 != v29 );
      }
    }
    v1 = v27 + 1;
  }
  while ( v27 != 7 );
  if ( *v25 >= 2 )
    sub_608DECA0(v25, sub_6023AEE0);
  result = (int)v26;
  if ( *v26 >= 2 )
    return sub_608DECA0(v26, sub_6023AEE0);
  return result;
}
