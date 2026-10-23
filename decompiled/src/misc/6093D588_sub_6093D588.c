/* sub_6093D588
 * address: 0x6093D588   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6093D588(int a1, int *a2, int a3, float32x2_t *a4, float a5, int a6, int a7, int a8)
{
  int v13; // r4
  unsigned int v14; // r2
  _DWORD *v15; // r0
  _DWORD *v16; // r1
  _DWORD *v17; // r1
  float v19[11]; // [sp+Ch] [bp-2Ch] BYREF

  v13 = 0;
  if ( FIELD_U32(dword_60CD0B60, 20) >= 0x2Cu )
    v13 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 172);
  sub_6091DD8C(v13, a1);
  v14 = FIELD_U32(v13, 608);
  v15 = *(_DWORD **)(v13 + 612);
  v16 = v15;
  if ( v14 > 4 )
    v16 = v15 + 12;
  if ( *v16 != -1 )
  {
    sub_6091B890(v16, a1, 2, a6);
    v14 = FIELD_U32(v13, 608);
    v15 = *(_DWORD **)(v13 + 612);
  }
  v17 = v15;
  v19[0] = a5;
  if ( v14 > 5 )
    v17 = v15 + 15;
  if ( *v17 != -1 )
  {
    sub_6091B890(v17, a1, 1, (int)v19);
    v14 = FIELD_U32(v13, 608);
    v15 = *(_DWORD **)(v13 + 612);
  }
  if ( v14 > 6 )
    v15 += 18;
  if ( *v15 != -1 )
    sub_6091B890(v15, a1, 2, a7);
  return sub_6093D260(a1, v13, a2, a3, a4, a8);
}
