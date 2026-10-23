/* sub_604742D0
 * address: 0x604742D0   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604742D0(_DWORD *a1, unsigned int a2, _DWORD *a3, unsigned int a4, float a5, int a6)
{
  int *v11; // r1
  _DWORD *v12; // r5
  int v13; // r6
  int v14; // r8
  int v15; // r0
  int v16; // r2
  int v17; // r3
  bool v18; // nf
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  int v22; // [sp+4h] [bp-34h]

  v11 = (int *)a1[878];
  v12 = (_DWORD *)a1[8];
  if ( a1[877] > a2 )
    v11 += 5 * a2;
  v13 = *v11;
  if ( v12 )
  {
    v22 = *v11;
    while ( 1 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      v14 = a3[1];
      (*(void (__fastcall **)(_DWORD *))(v12[4] + 12))(v12 + 4);
      v15 = v12[5];
      if ( v14 == v15 )
        break;
      v16 = 0;
      while ( 1 )
      {
        v17 = *(unsigned __int8 *)(a3[1] + v16);
        v18 = v17 - *(unsigned __int8 *)(v15 + v16) < 0;
        if ( v17 != *(unsigned __int8 *)(v15 + v16) )
          break;
        if ( *(_BYTE *)(a3[1] + v16) )
        {
          if ( ++v16 < 0x80000 )
            continue;
        }
        if ( v12 )
          goto LABEL_16;
        goto LABEL_18;
      }
      v19 = v12 + 2;
      if ( v18 )
        v19 = v12 + 1;
      v12 = (_DWORD *)*v19;
      if ( !*v19 )
      {
LABEL_18:
        v20 = 0;
        goto LABEL_19;
      }
    }
LABEL_16:
    v20 = v12 + 6;
LABEL_19:
    v13 = v22;
  }
  else
  {
    v20 = 0;
  }
  if ( v20[1] > a4 )
    LoopRandom_ref(a1, a2, a3, a6, a5, *(int **)(v20[2] + 4 * a4));
  return v13;
}
