/* sub_602396F8
 * address: 0x602396F8   size: 1184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602396F8(int a1, int a2, int a3, int *a4)
{
  _DWORD *v8; // r4
  int TlsValue; // r0
  int CurrentCoreNumber; // r0
  int v11; // r11
  int v12; // r1
  int v13; // r6
  int v14; // r0
  int result; // r0
  int v16; // r5
  int v17; // r4
  int v18; // r2
  bool v19; // zf
  int v20; // r10
  int v21; // r1
  int v22; // r8
  int v23; // r0
  int v24; // r7
  int v25; // r1
  int *v26; // r0
  int v27; // r0
  int v28; // r9
  int v29; // r0
  int i; // r5
  int v31; // r4
  bool v32; // zf
  int v33; // r0
  bool v34; // zf
  int v35; // r0
  int v36; // r5
  int v37; // r0
  int j; // r6
  int v39; // r4
  bool v40; // zf
  int v41; // r0
  int v42; // [sp+Ch] [bp-3Ch]
  int v43; // [sp+10h] [bp-38h]
  int v44; // [sp+14h] [bp-34h]
  int v45; // [sp+18h] [bp-30h]
  int v46; // [sp+1Ch] [bp-2Ch]

  v8 = *(_DWORD **)(a1 + 16);
  TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
  if ( TlsValue )
    CurrentCoreNumber = TlsValue - 1;
  else
    CurrentCoreNumber = nn__os__GetCurrentCoreNumber(0);
  v46 = a1;
  v11 = 0;
  if ( v8[1] > CurrentCoreNumber )
  {
    v12 = 3 * CurrentCoreNumber;
    *(_DWORD *)(v8[4] + 48 * CurrentCoreNumber + 8) = *(_DWORD *)(v8[2] + 2416 * CurrentCoreNumber);
    *(_DWORD *)(v8[4] + 48 * CurrentCoreNumber + 12) = *(_DWORD *)(v8[2] + 2416 * CurrentCoreNumber + 264);
    *(_QWORD *)(v8[4] + 48 * CurrentCoreNumber + 16) = *(_QWORD *)(v8[2] + 2416 * CurrentCoreNumber + 1864);
    *(_QWORD *)(v8[4] + 48 * CurrentCoreNumber + 24) = *(_QWORD *)(v8[2] + 2416 * CurrentCoreNumber + 1872);
    v13 = 0;
    v14 = v8[2] + 2416 * CurrentCoreNumber;
    if ( !FIELD_U8(v14, 2412) )
      v13 = v14 + 1848;
    *(_DWORD *)(v8[4] + 16 * v12 + 32) = v13;
    v11 = v8[4] + 16 * v12;
  }
  if ( a4 )
  {
    result = *a4;
    if ( *a4 >= 1 )
    {
      v16 = a4[2];
      v17 = 4 * result;
      do
      {
        v18 = *(_DWORD *)v16;
        result = *(_DWORD *)(*(_DWORD *)v16 + 132);
        if ( result )
        {
          result = *(unsigned __int8 *)(FIELD_U32(v18, 136) + 1872);
          v19 = result == 0;
          if ( *(_BYTE *)(FIELD_U32(v18, 136) + 1872) )
          {
            result = FIELD_U8(v18, 2);
            v19 = result == 0;
          }
          if ( !v19 && FIELD_F32(v18, 108) > 0.0 )
          {
            result = FIELD_U32(v18, 40);
            if ( result > 0
              || !result && (result = *(_DWORD *)(FIELD_U32(v18, 348) + 576) - 1, (unsigned int)result <= 2) )
            {
              result = sub_6089085C(FIELD_U32(v46, 16), a2 + 8, v18, 0, 0, v11);
            }
          }
        }
        v17 -= 4;
        v16 += 4;
      }
      while ( v17 );
    }
  }
  else
  {
    v20 = a2 + 8;
    v21 = 0;
    v43 = a3;
    do
    {
      v42 = v21;
      for ( result = *(_DWORD *)(FIELD_U32(v46, 16) + 4 * v21 + 116); result; result = FIELD_U32(result, 416) )
      {
        v45 = FIELD_U32(result, 352);
        if ( v45 )
        {
          v22 = 0;
          v44 = result;
          do
          {
            v23 = sub_60881D78(result, v22);
            v24 = v23;
            if ( v23 )
            {
              v25 = FIELD_U32(v23, 348);
              v26 = *(int **)(v25 + 552);
              if ( v26 || (v26 = *(int **)(v25 + 556)) != 0 )
                v27 = *v26;
              else
                LOWORD(v27) = 0;
              if ( sub_60237CE0((unsigned __int16)v27) == a3 )
              {
                v28 = FIELD_U32(v24, 348);
                v29 = FIELD_U32(v28, 84);
                if ( v29 >= 1 )
                {
                  for ( i = 0; i < v29; ++i )
                  {
                    if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v28 + 4 * i + 88) + 12) + 2017) == 1 )
                    {
                      v31 = *(_DWORD *)(v24 + 4 * i + 768);
                      if ( v31 )
                      {
                        do
                        {
                          if ( FIELD_U32(v31, 132) )
                          {
                            v32 = *(_BYTE *)(FIELD_U32(v31, 136) + 1872) == 0;
                            if ( *(_BYTE *)(FIELD_U32(v31, 136) + 1872) )
                              v32 = FIELD_U8(v31, 2) == 0;
                            if ( !v32 && FIELD_F32(v31, 108) > 0.0 )
                            {
                              v33 = FIELD_U32(v31, 40);
                              if ( v33 > 0 || !v33 && (unsigned int)(*(_DWORD *)(FIELD_U32(v31, 348) + 576) - 1) <= 2 )
                                sub_6089085C(FIELD_U32(v46, 16), v20, v31, 0, 0, v11);
                            }
                          }
                          v31 = FIELD_U32(v31, 120);
                        }
                        while ( v31 );
                        v29 = FIELD_U32(v28, 84);
                      }
                    }
                  }
                }
                if ( FIELD_U32(v24, 132) )
                {
                  v34 = *(_BYTE *)(FIELD_U32(v24, 136) + 1872) == 0;
                  if ( *(_BYTE *)(FIELD_U32(v24, 136) + 1872) )
                    v34 = FIELD_U8(v24, 2) == 0;
                  if ( !v34 && FIELD_F32(v24, 108) > 0.0 )
                  {
                    v35 = FIELD_U32(v24, 40);
                    if ( v35 > 0 || !v35 && (unsigned int)(*(_DWORD *)(FIELD_U32(v24, 348) + 576) - 1) <= 2 )
                      sub_6089085C(FIELD_U32(v46, 16), v20, v24, 0, 0, v11);
                  }
                }
                v36 = FIELD_U32(v24, 348);
                a3 = v43;
                v37 = FIELD_U32(v36, 84);
                if ( v37 >= 1 )
                {
                  for ( j = 0; j < v37; ++j )
                  {
                    if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v36 + 4 * j + 88) + 12) + 2017) )
                    {
                      v39 = *(_DWORD *)(v24 + 4 * j + 768);
                      if ( v39 )
                      {
                        do
                        {
                          if ( FIELD_U32(v39, 132) )
                          {
                            v40 = *(_BYTE *)(FIELD_U32(v39, 136) + 1872) == 0;
                            if ( *(_BYTE *)(FIELD_U32(v39, 136) + 1872) )
                              v40 = FIELD_U8(v39, 2) == 0;
                            if ( !v40 && FIELD_F32(v39, 108) > 0.0 )
                            {
                              v41 = FIELD_U32(v39, 40);
                              if ( v41 > 0 || !v41 && (unsigned int)(*(_DWORD *)(FIELD_U32(v39, 348) + 576) - 1) <= 2 )
                                sub_6089085C(FIELD_U32(v46, 16), v20, v39, 0, 0, v11);
                            }
                          }
                          v39 = FIELD_U32(v39, 120);
                        }
                        while ( v39 );
                        v37 = FIELD_U32(v36, 84);
                      }
                    }
                  }
                }
              }
            }
            ++v22;
            result = v44;
          }
          while ( v22 != v45 );
        }
      }
      v21 = v42 + 1;
    }
    while ( v42 != 7 );
  }
  return result;
}
