/* sub_6092D404
 * address: 0x6092D404   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6092D404(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r9
  int v5; // r0
  int v6; // r8
  int v7; // r10
  int v8; // r11
  int v9; // r5
  int v10; // r7
  void *v11; // r0
  int v12; // r2
  int v13; // r1
  void *v14; // r0
  int v15; // r2
  int v16; // r1
  _DWORD *v17; // r7
  void *v19; // [sp+4h] [bp-2Ch]
  int v20; // [sp+8h] [bp-28h]

  *a1 = off_60C5E1C0;
  v2 = a1[207];
  if ( v2 )
  {
    v19 = (void *)(v2 - 8);
    v3 = *(_DWORD *)(v2 - 4);
    if ( v3 )
    {
      v4 = 0;
      v5 = v2 + 2144 * v3;
      v6 = 2144 * v3;
      v7 = v5 - 264;
      v8 = v5 - 1328;
      v9 = v5 - 1456;
      v10 = v5 - 2064;
      v20 = v5 - 2144;
      do
      {
        sub_609175E4(v7 + v4);
        sub_60917AE4(v7 + v4 - 80);
        sub_609175E4(v7 + v4 - 344);
        sub_60917AE4(v7 + v4 - 424);
        sub_609175E4(v7 + v4 - 696);
        sub_60917AE4(v7 + v4 - 776);
        sub_609175E4(v8 + v4);
        j_nullsub_280(v9 + v4);
        sub_609175E4(v7 + v4 - 1456);
        sub_60917AE4(v7 + v4 - 1536);
        sub_609175E4(v10 + v4);
        sub_60917AE4(v20 + v4);
        v4 -= 2144;
      }
      while ( v6 + v4 );
    }
    operator_delete_8DE3FC(v19);
    a1[206] = 0;
    a1[207] = 0;
  }
  v11 = (void *)a1[209];
  if ( v11 )
  {
    operator_delete_8DE3FC(v11);
    a1[208] = 0;
    a1[209] = 0;
  }
  v12 = a1[211];
  if ( v12 )
  {
    v13 = *(_DWORD *)(v12 - 4);
    v14 = (void *)(v12 - 8);
    if ( v13 )
    {
      v15 = v12 - 388;
      v16 = 792 * v13;
      do
      {
        v17 = (_DWORD *)(v15 + v16);
        v17[61] = &off_60C5E40C;
        v17[56] = &off_60C5E40C;
        v17[51] = &off_60C5E40C;
        v17[46] = &off_60C5E40C;
        v17[42] = &off_60C5E40C;
        v17[37] = &off_60C5E40C;
        v17[32] = &off_60C5E40C;
        v17[27] = &off_60C5E40C;
        v17[23] = &off_60C5E40C;
        v17[16] = &off_60C5E40C;
        v17[12] = &off_60C5E40C;
        v17[8] = &off_60C5E40C;
        v17[4] = &off_60C5E40C;
        *(_DWORD *)(v15 + v16) = &off_60C5E40C;
        v16 -= 792;
        *(v17 - 5) = &off_60C5E40C;
        *(v17 - 10) = &off_60C5E40C;
        *(v17 - 17) = &off_60C5E40C;
        *(v17 - 21) = &off_60C5E40C;
        *(v17 - 25) = &off_60C5E40C;
        *(v17 - 29) = &off_60C5E40C;
        *(v17 - 33) = &off_60C5E40C;
        *(v17 - 37) = &off_60C5E40C;
        *(v17 - 41) = &off_60C5E40C;
        *(v17 - 45) = &off_60C5E40C;
        *(v17 - 49) = &off_60C5E40C;
        *(v17 - 53) = &off_60C5E40C;
        *(v17 - 57) = &off_60C5E40C;
        *(v17 - 61) = &off_60C5E40C;
        *(v17 - 65) = &off_60C5E40C;
        *(v17 - 69) = &off_60C5E40C;
        *(v17 - 73) = &off_60C5E40C;
        *(v17 - 77) = &off_60C5E40C;
        *(v17 - 81) = &off_60C5E40C;
        *(v17 - 85) = &off_60C5E40C;
        *(v17 - 89) = &off_60C5E40C;
        *(v17 - 93) = &off_60C5E40C;
        *(v17 - 97) = &off_60C5E40C;
        *(v17 - 101) = &off_60C5E40C;
      }
      while ( v16 );
    }
    operator_delete_8DE3FC(v14);
    a1[210] = 0;
    a1[211] = 0;
  }
  a1[170] = &off_60C5E40C;
  a1[165] = &off_60C5E40C;
  a1[160] = &off_60C5E40C;
  a1[155] = &off_60C5E40C;
  a1[151] = &off_60C5E40C;
  a1[146] = &off_60C5E40C;
  a1[141] = &off_60C5E40C;
  a1[136] = &off_60C5E40C;
  a1[132] = &off_60C5E40C;
  a1[125] = &off_60C5E40C;
  a1[121] = &off_60C5E40C;
  a1[117] = &off_60C5E40C;
  a1[113] = &off_60C5E40C;
  a1[109] = &off_60C5E40C;
  a1[104] = &off_60C5E40C;
  a1[99] = &off_60C5E40C;
  a1[92] = &off_60C5E40C;
  a1[88] = &off_60C5E40C;
  a1[84] = &off_60C5E40C;
  a1[80] = &off_60C5E40C;
  a1[76] = &off_60C5E40C;
  a1[72] = &off_60C5E40C;
  a1[68] = &off_60C5E40C;
  a1[64] = &off_60C5E40C;
  a1[60] = &off_60C5E40C;
  a1[56] = &off_60C5E40C;
  a1[52] = &off_60C5E40C;
  a1[48] = &off_60C5E40C;
  a1[44] = &off_60C5E40C;
  a1[40] = &off_60C5E40C;
  a1[36] = &off_60C5E40C;
  a1[32] = &off_60C5E40C;
  a1[28] = &off_60C5E40C;
  a1[24] = &off_60C5E40C;
  a1[20] = &off_60C5E40C;
  a1[16] = &off_60C5E40C;
  a1[12] = &off_60C5E40C;
  a1[8] = &off_60C5E40C;
  return sub_60938DF0(a1);
}
