/* sub_60474420
 * address: 0x60474420   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60474420(_DWORD *a1, unsigned int a2, _DWORD *a3, unsigned int a4, int a5)
{
  int *v9; // r1
  _DWORD *v10; // r5
  int v11; // r6
  int v12; // r8
  int v13; // r0
  int v14; // r2
  int v15; // r3
  bool v16; // nf
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  int v20; // [sp+8h] [bp-28h]

  v9 = (int *)a1[878];
  v10 = (_DWORD *)a1[8];
  if ( a1[877] > a2 )
    v9 += 5 * a2;
  v11 = *v9;
  if ( v10 )
  {
    v20 = *v9;
    while ( 1 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      v12 = a3[1];
      (*(void (__fastcall **)(_DWORD *))(v10[4] + 12))(v10 + 4);
      v13 = v10[5];
      if ( v12 == v13 )
        break;
      v14 = 0;
      while ( 1 )
      {
        v15 = *(unsigned __int8 *)(a3[1] + v14);
        v16 = v15 - *(unsigned __int8 *)(v13 + v14) < 0;
        if ( v15 != *(unsigned __int8 *)(v13 + v14) )
          break;
        if ( *(_BYTE *)(a3[1] + v14) )
        {
          if ( ++v14 < 0x80000 )
            continue;
        }
        if ( v10 )
          goto LABEL_16;
        goto LABEL_18;
      }
      v17 = v10 + 2;
      if ( v16 )
        v17 = v10 + 1;
      v10 = (_DWORD *)*v17;
      if ( !*v17 )
      {
LABEL_18:
        v18 = 0;
        goto LABEL_19;
      }
    }
LABEL_16:
    v18 = v10 + 6;
LABEL_19:
    v11 = v20;
  }
  else
  {
    v18 = 0;
  }
  if ( v18[1] > a4 )
    LoopRandom_ref(a1, a2, a3, a5, -1.0, *(int **)(v18[2] + 4 * a4));
  return v11;
}
