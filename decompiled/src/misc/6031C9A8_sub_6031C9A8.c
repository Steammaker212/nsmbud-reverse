/* sub_6031C9A8
 * address: 0x6031C9A8   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031C9A8(float *a1)
{
  int v2; // r7
  float *v3; // r5
  int v4; // r6
  int v6; // r0
  float *v7; // r4
  _DWORD *v8; // r0
  unsigned int v9; // r3
  int v10; // r1

  v2 = 32;
  v3 = a1 + 1718;
  v4 = *((_DWORD *)a1 + 1716);
  do
  {
    if ( v4-- < 1 )
      v4 = 63;
    v6 = v4;
    if ( (unsigned int)v4 >= 0x40 )
      v6 = 0;
    v7 = &a1[2 * v6];
    ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(v7 + 1588, *(v3 - 1), 0.125, 1.0, 0.125);
    ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(v7 + 1589, *v3, 0.125, 1.0, 0.125);
    v3 += 2;
    --v2;
  }
  while ( v2 );
  sub_6031C374((int)a1);
  v8 = *((_DWORD **)a1 + 1781);
  v9 = v8[17];
  v10 = v8[3];
  if ( v8[2] > v9 )
    v10 += 4 * v9;
  if ( (*(_BYTE *)(*(_DWORD *)v10 + 28) & 0x20) != 0 )
  {
    (*(void (__fastcall **)(float *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C936A4);
    v8 = *((_DWORD **)a1 + 1781);
  }
  return j_ModelWrapper_updateAnims(v8);
}
