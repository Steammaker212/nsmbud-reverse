/* sub_608B9D20
 * address: 0x608B9D20   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B9D20(int *a1)
{
  int v2; // r6
  int v3; // r7
  int v4; // r0
  bool v5; // zf
  unsigned int v6; // r1
  unsigned int v7; // r0
  int v8; // r8
  int *v9; // r3
  int v10; // r7
  int *v11; // r1
  int *v12; // r3
  int v13; // r7
  int *v14; // r1
  unsigned int v15; // r0
  int v16; // r6
  __int64 v17; // r0
  int v18; // r0
  int v19; // r5
  int *v20; // r0
  int *v21; // r3
  int v22; // r7
  int *v23; // r1
  int v24; // r0

  v2 = 0;
  a1[17] = 0;
  v3 = *a1;
  v4 = sub_608B0CEC((int)(a1 + 2));
  v5 = v4 == 0;
  v6 = 2 * v4 + 1024;
  v7 = a1[1];
  if ( v5 )
    v6 = 1000;
  v8 = v7 / v6;
  if ( (int)(v7 / v6) >= 1 )
  {
    do
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
      ++v2;
      v3 += 1000;
    }
    while ( v2 < v8 );
  }
  while ( 1 )
  {
    v11 = (int *)a1[7];
    if ( v11 == a1 + 6 )
      break;
    v9 = (int *)v11[1];
    v10 = *v9;
    *(_DWORD *)(*v11 + 4) = v9;
    *v9 = *v11;
    FIELD_U32(v10, 4) = v11;
    *v11 = v10;
  }
  while ( 1 )
  {
    v14 = (int *)a1[5];
    if ( v14 == a1 + 4 )
      break;
    v12 = (int *)v14[1];
    v13 = *v12;
    *(_DWORD *)(*v14 + 4) = v12;
    *v12 = *v14;
    FIELD_U32(v13, 4) = v14;
    *v14 = v13;
  }
  while ( (int *)a1[16] != a1 + 15 )
    nn__os__SleepThread(5000000, 0);
  v15 = a1[12];
  if ( v15 >= 0x370 )
  {
    v16 = 0;
    v17 = 156180629LL * (v15 >> 4);
    v18 = a1[11];
    v19 = HIDWORD(v17) >> 1;
    do
    {
      ++v16;
      v18 = sub_608B9518(v18) + 880;
    }
    while ( v16 < v19 );
  }
  v20 = a1 + 13;
  while ( 1 )
  {
    v23 = (int *)a1[14];
    if ( v23 == v20 )
      break;
    v21 = (int *)v23[1];
    v22 = *v21;
    *(_DWORD *)(*v23 + 4) = v21;
    *v21 = *v23;
    FIELD_U32(v22, 4) = v23;
    *v23 = v22;
  }
  v24 = sub_608C3C60(v20);
  sub_608C40AC(v24, a1 + 8);
  return sub_608D6DC4(a1 + 18);
}
