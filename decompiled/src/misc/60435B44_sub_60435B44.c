/* sub_60435B44
 * address: 0x60435B44   size: 840   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60435B44(int a1, int a2, int a3)
{
  unsigned int result; // r0
  unsigned int v6; // r0
  unsigned int *v7; // r8
  int v8; // r0
  int v9; // r6
  unsigned int **v10; // r4
  int CurrentCoreNumber; // r0
  int v12; // r2
  int v13; // r1
  char *v14; // r12
  _DWORD *v15; // r0
  int v16; // r0
  unsigned int v17; // r0
  int v18; // r12
  int v19; // r3
  int *v20; // r1
  int *v21; // r9
  int TlsValue; // r0
  _DWORD *v23; // r2
  int v24; // r6
  unsigned int **v25; // r4
  int v26; // r0
  int v27; // r2
  int v28; // r1
  char *v29; // r12
  _DWORD *v30; // r0
  int v31; // r12
  int v32; // r3
  int *v33; // r1
  unsigned int *v34; // r10
  int v35; // r0
  _DWORD *v36; // r2
  int v37; // [sp+8h] [bp-40h]
  int v39; // [sp+10h] [bp-38h] BYREF
  int v40; // [sp+14h] [bp-34h]
  int v41; // [sp+18h] [bp-30h]
  int v42; // [sp+1Ch] [bp-2Ch]
  int v43; // [sp+20h] [bp-28h]

  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 148))(a1);
  if ( result == 1 )
  {
    v6 = FIELD_U32(a3, 424);
    v7 = *(unsigned int **)(a1 + 324);
    if ( FIELD_U32(a1, 320) > v6 )
      v7 += 2 * v6;
    FIELD_U32(a1, 432) &= ~(1 << v6);
    v37 = 1 << v6;
    v8 = FIELD_U32(a1, 200);
    if ( v8 )
    {
      v9 = 4 * v8;
      v10 = *(unsigned int ***)(a1 + 208);
      do
      {
        v17 = **v10;
        if ( ((*v10)[2] & 4) != 0
          && (v18 = FIELD_U32(a1, 72),
              v19 = *(_DWORD *)(v18 + 56 * v17),
              (*(_DWORD *)(FIELD_U32(a1, 48) + 4 * (FIELD_U16(v19, 94) >> 5)) & (1 << (FIELD_U16(v19, 94) & 0x1F))) != 0)
          && (*(_DWORD *)(FIELD_U32(a1, 44) + 4 * (FIELD_U16(v19, 96) >> 5)) & (1 << (FIELD_U16(v19, 96) & 0x1F))) != 0 )
        {
          if ( (FIELD_U8(a1, 316) & 2) == 0 )
          {
            v20 = *(int **)(v18 + 56 * v17 + 32);
            if ( v20 )
            {
              v39 = 0;
              v40 = 0;
              v41 = 0;
              v42 = 0;
              v39 = *v20;
              v40 = v20[1];
              v41 = v20[2];
              v42 = v20[4];
              v21 = (int *)v7[1];
              if ( *v7 > v17 )
                v21 += v17;
              TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
              if ( TlsValue )
                CurrentCoreNumber = TlsValue - 1;
              else
                CurrentCoreNumber = nn__os__GetCurrentCoreNumber(0);
              v43 = CurrentCoreNumber;
              v12 = CurrentCoreNumber;
              v13 = FIELD_U32(a2, 412);
              v14 = *(char **)(a2 + 408);
              v15 = (_DWORD *)(a2 + (v13 >> 1));
              if ( (v13 & 1) != 0 )
                v14 = *(char **)&v14[*v15];
              v16 = ((int (__fastcall *)(_DWORD *, int *, int, _DWORD))v14)(v15, &v39, v12, 0);
              *v21 = v16;
              if ( v16 )
                FIELD_U32(a1, 432) |= v37;
            }
          }
        }
        else
        {
          v23 = (_DWORD *)v7[1];
          if ( *v7 > v17 )
            v23 += v17;
          *v23 = 0;
        }
        v9 -= 4;
        ++v10;
      }
      while ( v9 );
    }
    result = FIELD_U32(a1, 212);
    if ( result )
    {
      v24 = 4 * result;
      v25 = *(unsigned int ***)(a1 + 220);
      do
      {
        result = **v25;
        if ( ((*v25)[2] & 4) != 0
          && (v31 = FIELD_U32(a1, 72),
              v32 = *(_DWORD *)(v31 + 56 * result),
              (*(_DWORD *)(FIELD_U32(a1, 48) + 4 * (FIELD_U16(v32, 94) >> 5)) & (1 << (FIELD_U16(v32, 94) & 0x1F))) != 0)
          && (*(_DWORD *)(FIELD_U32(a1, 44) + 4 * (FIELD_U16(v32, 96) >> 5)) & (1 << (FIELD_U16(v32, 96) & 0x1F))) != 0 )
        {
          v33 = *(int **)(v31 + 56 * result + 32);
          if ( v33 )
          {
            v39 = 0;
            v40 = 0;
            v41 = 0;
            v42 = 0;
            v39 = *v33;
            v40 = v33[1];
            v41 = v33[2];
            v42 = v33[4];
            v34 = (unsigned int *)v7[1];
            if ( *v7 > result )
              v34 += result;
            v35 = nn__os__GetTlsValue(dword_60CCFC58);
            if ( v35 )
              v26 = v35 - 1;
            else
              v26 = nn__os__GetCurrentCoreNumber(0);
            v43 = v26;
            v27 = v26;
            v28 = FIELD_U32(a2, 412);
            v29 = *(char **)(a2 + 408);
            v30 = (_DWORD *)(a2 + (v28 >> 1));
            if ( (v28 & 1) != 0 )
              v29 = *(char **)&v29[*v30];
            result = ((int (__fastcall *)(_DWORD *, int *, int, _DWORD))v29)(v30, &v39, v27, 0);
            *v34 = result;
            if ( result )
            {
              result = FIELD_U32(a1, 432) | v37;
              FIELD_U32(a1, 432) = result;
            }
          }
        }
        else
        {
          v36 = (_DWORD *)v7[1];
          if ( *v7 > result )
            v36 += result;
          *v36 = 0;
        }
        v24 -= 4;
        ++v25;
      }
      while ( v24 );
    }
  }
  return result;
}
