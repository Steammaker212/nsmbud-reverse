/* sub_6093FC18
 * address: 0x6093FC18   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6093FC18(int a1, int a2, float *a3, int a4, float a5, int a6, float *a7, float *a8)
{
  int v13; // r7
  unsigned int v14; // r2
  _DWORD *v15; // r0
  _DWORD *v16; // r1
  _DWORD *v17; // r1
  float v18[11]; // [sp+Ch] [bp-2Ch] BYREF

  v13 = 0;
  if ( FIELD_U32(dword_60CD0B60, 20) >= 0xCu )
    v13 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 44);
  sub_6091DD8C(v13, a1);
  v14 = FIELD_U32(v13, 608);
  v15 = *(_DWORD **)(v13 + 612);
  v16 = v15;
  if ( v14 > 4 )
    v16 = v15 + 12;
  if ( *v16 != -1 )
  {
    sub_6091B890(v16, a1, 2, a4);
    v14 = FIELD_U32(v13, 608);
    v15 = *(_DWORD **)(v13 + 612);
  }
  v17 = v15;
  v18[0] = a5;
  if ( v14 > 5 )
    v17 = v15 + 15;
  if ( *v17 != -1 )
  {
    sub_6091B890(v17, a1, 1, (int)v18);
    v14 = FIELD_U32(v13, 608);
    v15 = *(_DWORD **)(v13 + 612);
  }
  if ( v14 > 6 )
    v15 += 18;
  if ( *v15 != -1 )
    sub_6091B890(v15, a1, 2, a6);
  sub_6093F284(a1, v13, a2, a3, a7, a8);
}
