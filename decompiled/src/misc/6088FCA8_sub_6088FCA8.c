/* sub_6088FCA8
 * address: 0x6088FCA8   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088FCA8(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // r5
  int v10; // r7
  bool v11; // zf
  int v12; // r0
  int *v13; // r6
  int *v14; // r6
  int v15; // r6
  int v16; // r7
  int v17; // r11
  int v18; // r0
  int v19; // r8
  int v20; // r6
  _DWORD *v21; // r6
  _DWORD *v22; // r0
  int *v23; // r0
  int v24; // t1
  int v25; // r2
  _DWORD *v27; // r0
  int *v28; // r0
  int v29; // t1
  int v30; // r2
  int v31; // r4

  v9 = 0;
  v10 = *(_DWORD *)(a1[26] + 4 * a4);
  v11 = v10 == 0;
  if ( v10 )
    v11 = FIELD_U8(v10, 5) == 0;
  if ( !v11 )
  {
    v12 = 0;
    if ( FIELD_U32(v10, 40) > a3 )
    {
      v13 = *(int **)(FIELD_U32(v10, 52) + 4 * a3);
      if ( v13 )
      {
        v12 = *v13;
      }
      else
      {
        v14 = (int *)(FIELD_U32(v10, 48) + 32 * a3);
        if ( v14 )
          v12 = *v14;
      }
    }
    if ( v12 > a1[21] )
    {
      v9 = 0;
      *a2 = 0;
      a2[1] = -1;
      debugPrintRelated3("There is no available Emitter instance.\n");
      return v9;
    }
    v15 = a1[16];
    v16 = a1[18];
    v17 = a1[27];
    v18 = 0;
    while ( 1 )
    {
      if ( ++v16 >= v15 )
        v16 = 0;
      a1[18] = v16;
      if ( !*(_BYTE *)(v17 + 560 * v16 + 8) )
        break;
      if ( ++v18 >= v15 )
        goto LABEL_22;
    }
    v19 = v17 + 560 * v16;
    if ( v19 )
    {
      *a2 = v19;
      v20 = a1[20];
      a1[20] = v20 + 1;
      a2[1] = v20;
      if ( sub_60880BA0(v17 + 560 * v16, a3, v20, a4, a5, a6, a7) )
      {
        if ( a8 )
        {
          v21 = a1 + 849;
          nn__os__LockMutex(a1 + 849);
          nn__os__LockMutex(a1 + 849);
          v22 = &a1[a5];
          if ( v22[157] )
          {
            v24 = v22[221];
            v23 = v22 + 221;
            FIELD_U32(v24, 416) = v19;
            v25 = *v23;
          }
          else
          {
            v22[157] = v19;
            v25 = 0;
            v23 = v22 + 221;
          }
          *(_DWORD *)(v17 + 560 * v16 + 420) = v25;
          v31 = v17 + 560 * v16;
          FIELD_U32(v31, 416) = 0;
          *v23 = v19;
          nn__os__UnlockMutex(v21);
          nn__os__UnlockMutex(v21);
          v9 = 1;
          FIELD_U8(v31, 11) = 1;
        }
        else
        {
          v27 = &a1[a5];
          if ( v27[29] )
          {
            v29 = v27[93];
            v28 = v27 + 93;
            FIELD_U32(v29, 416) = v19;
            v30 = *v28;
          }
          else
          {
            v27[29] = v19;
            v30 = 0;
            v28 = v27 + 93;
          }
          *(_DWORD *)(v17 + 560 * v16 + 420) = v30;
          v9 = 1;
          *(_DWORD *)(v17 + 560 * v16 + 416) = 0;
          *v28 = v19;
        }
        return v9;
      }
      sub_608814B4(v17 + 560 * v16);
    }
    else
    {
LABEL_22:
      debugPrintRelated3("There is no available EmitterSet instance.\n");
    }
    return 0;
  }
  return v9;
}
