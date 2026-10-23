/* SkeletalAnim_init_helper_877EB0
 * address: 0x60877EB0   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SkeletalAnim_init_helper_877EB0(_DWORD *a1, _DWORD *a2, int a3, unsigned int a4)
{
  signed int result; // r0
  int v8; // r2
  int v9; // r1
  int v10; // r8
  int v11; // r7
  _DWORD *v12; // r0
  int v13; // r1
  int v14; // r1
  int v15; // r0

  result = 0;
  if ( a2[6] && a2[5] <= a4 )
  {
    v8 = *a2;
    v9 = a2[1];
    v10 = a2[2];
    v11 = 0;
    v12 = a1 + 14;
    a1[13] = a3;
    a1[17] = 0;
    if ( v8 < v9 )
      LOWORD(v8) = v9;
    if ( a3 )
    {
      v13 = a2[11];
      if ( v13 )
        v13 = a3 + a2[14];
      sub_6086A288((int)v12, v13, v8);
      v14 = a2[15];
      if ( v14 )
        v14 = a3 + a2[18];
      sub_6086A3DC(a1 + 8, v14, v10);
      v15 = a2[7];
      if ( v15 )
        v15 = a3 + a2[10];
      a1[12] = v15;
      a1[19] = a2[1];
      if ( a2[19] )
        v11 = a3 + a2[22];
    }
    else
    {
      v11 = 0;
      sub_6086A288((int)v12, 0, v8);
      sub_6086A3DC(a1 + 8, 0, v10);
      a1[12] = 0;
      a1[19] = a2[1];
    }
    a1[21] = v11;
    a1[22] = a2[4];
    result = 1;
    if ( *((_BYTE *)a2 + 15) )
      a1[20] |= 0x40u;
  }
  return result;
}
