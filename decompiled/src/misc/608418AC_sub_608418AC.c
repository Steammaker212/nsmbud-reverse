/* sub_608418AC
 * address: 0x608418AC   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608418AC(int result, float *a2)
{
  int v2; // r6
  int v3; // r12
  float *v4; // r7
  float *v5; // r2
  float *v6; // r2
  float *v7; // r2
  float *v8; // r2
  float *v9; // r2
  float *v10; // r2
  float *v11; // r2
  int v12; // r2
  _DWORD *v13; // r3
  float *v14; // r2
  float *v15; // r2
  float *v16; // r2
  float *v17; // r2

  v2 = 0;
  v3 = result + 15868;
  do
  {
    v4 = (float *)(v3 + v2);
    v5 = a2;
    if ( *(float *)(v3 + v2 - 24) < *a2 )
      v5 = v4 - 6;
    *(v4 - 6) = *v5;
    v6 = a2 + 1;
    if ( *(v4 - 5) < a2[1] )
      v6 = v4 - 5;
    *(v4 - 5) = *v6;
    v7 = a2 + 2;
    if ( *(v4 - 4) < a2[2] )
      v7 = v4 - 4;
    *(v4 - 4) = *v7;
    v8 = a2 + 3;
    if ( a2[3] < *(v4 - 3) )
      v8 = v4 - 3;
    *(v4 - 3) = *v8;
    v9 = a2 + 4;
    if ( a2[4] < *(v4 - 2) )
      v9 = v4 - 2;
    *(v4 - 2) = *v9;
    v10 = a2 + 5;
    if ( a2[5] < *(v4 - 1) )
      v10 = v4 - 1;
    *(v4 - 1) = *v10;
    v11 = a2;
    if ( *v4 < *a2 )
      v11 = (float *)(v3 + v2);
    *(float *)(v3 + v2) = *v11;
    v12 = result + v2;
    v2 += 48;
    v13 = (_DWORD *)(v12 + 15872);
    if ( FIELD_F32(v12, 15872) >= a2[1] )
      v13 = a2 + 1;
    FIELD_U32(v12, 15872) = *v13;
    v14 = a2 + 2;
    if ( v4[2] < a2[2] )
      v14 = v4 + 2;
    v4[2] = *v14;
    v15 = a2 + 3;
    if ( a2[3] < v4[3] )
      v15 = v4 + 3;
    v4[3] = *v15;
    v16 = a2 + 4;
    if ( a2[4] < v4[4] )
      v16 = v4 + 4;
    v4[4] = *v16;
    v17 = a2 + 5;
    if ( a2[5] < v4[5] )
      v17 = v4 + 5;
    v4[5] = *v17;
  }
  while ( v2 != 144 );
  return result;
}
