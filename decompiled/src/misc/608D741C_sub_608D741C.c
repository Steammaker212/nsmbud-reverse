/* sub_608D741C
 * address: 0x608D741C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D741C(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v10; // r0
  _DWORD *v11; // r6
  int v12; // r1
  int v13; // r5
  int v14; // t1
  int v15; // r2
  int *v16; // r0

  v10 = sub_608C66DC((_DWORD **)(a1 + 2032));
  v11 = v10;
  if ( v10 )
  {
    memset(v10, 0, 136);
    sub_608C4D44(v11);
    *v11 = off_60C5BA28;
    v11[32] = v11 + 32;
    v11[33] = v11 + 32;
  }
  else
  {
    v11 = 0;
  }
  v11[28] = a3;
  v11[29] = a4;
  v11[30] = a5;
  v11[31] = a1;
  v11[11] = a1;
  if ( FIELD_S32(a1, 48) >= 1 )
  {
    v12 = 0;
    do
    {
      v11[v12 + 12] = *(_DWORD *)(a2 + 4 * v12);
      ++v12;
    }
    while ( v12 < FIELD_U32(a1, 48) );
  }
  v14 = FIELD_U32(a1, 2024);
  v13 = a1 + 2024;
  v15 = v11[32];
  v11[32] = v14;
  FIELD_U32(v15, 4) = v13;
  *(_DWORD *)(*(_DWORD *)v13 + 4) = v11 + 32;
  *(_DWORD *)v13 = v15;
  v16 = sub_608C4DF4();
  return sub_608C4F14((int)v16, v11, a6);
}
