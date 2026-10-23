/* sub_60473DE4
 * address: 0x60473DE4   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60473DE4(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4)
{
  int *v8; // r1
  bool v9; // cc
  _DWORD *v10; // r0
  int v11; // r9
  int v12; // r2
  _DWORD *v13; // r6
  int v14; // r4
  int v15; // r0
  int v16; // r3
  bool v17; // nf

  v8 = (int *)a1[878];
  v9 = a1[877] > a2;
  v10 = a1 + 8;
  if ( v9 )
    v8 += 5 * a2;
  v11 = *v8;
  while ( 1 )
  {
    v13 = (_DWORD *)*v10;
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    v14 = a3[1];
    (*(void (__fastcall **)(_DWORD *))(v13[4] + 12))(v13 + 4);
    v15 = v13[5];
    if ( v14 == v15 )
      break;
    v12 = 0;
    while ( 1 )
    {
      v16 = *(unsigned __int8 *)(a3[1] + v12);
      v17 = v16 - *(unsigned __int8 *)(v15 + v12) < 0;
      if ( v16 != *(unsigned __int8 *)(v15 + v12) )
        break;
      if ( *(_BYTE *)(a3[1] + v12) )
      {
        if ( ++v12 < 0x80000 )
          continue;
      }
      goto LABEL_13;
    }
    v10 = v13 + 2;
    if ( v17 )
      v10 = v13 + 1;
  }
LABEL_13:
  LoopRandom_ref(a1, a2, a3, a4, 1.0, v13[6]);
  return v11;
}
