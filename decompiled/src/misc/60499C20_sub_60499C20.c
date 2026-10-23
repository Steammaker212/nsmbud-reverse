/* sub_60499C20
 * address: 0x60499C20   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60499C20(int result, unsigned int a2, unsigned int a3)
{
  int v3; // r3
  int v4; // r7
  int v5; // r3
  int v6; // r4
  int *v7; // r5
  unsigned int v8; // r4
  int v9; // r5
  unsigned int v10; // r1
  unsigned int v11; // [sp+0h] [bp-28h] BYREF
  int v12; // [sp+4h] [bp-24h]
  int v13; // [sp+8h] [bp-20h]
  int v14; // [sp+Ch] [bp-1Ch]

  v3 = 0;
  if ( a2 <= 6 )
    v3 = dword_60B02BC0[a2];
  if ( FIELD_U32(result, 129140) == v3 )
  {
    v4 = result + 128764;
  }
  else if ( FIELD_U32(result, 132128) == v3 )
  {
    v4 = result + 131752;
  }
  else if ( FIELD_U32(result, 135116) == v3 )
  {
    v4 = result + 134740;
  }
  else if ( FIELD_U32(result, 138104) == v3 )
  {
    v4 = result + 137728;
  }
  else if ( FIELD_U32(result, 141092) == v3 )
  {
    v4 = result + 140716;
  }
  else
  {
    if ( FIELD_U32(result, 144080) != v3 )
      return result;
    v4 = result + 143704;
  }
  v5 = 0;
  v6 = 0;
  v12 = 0;
  v13 = 7;
  v14 = 0;
  v11 = a3;
  if ( dword_60CD0B40 )
  {
    v7 = *(int **)(dword_60CD0B40 + 36);
    v8 = FIELD_U32(result, 146840);
    if ( FIELD_U32(dword_60CD0B40, 32) > v8 )
      v7 += v8;
    v6 = 0;
    v9 = *v7;
    if ( v9 )
      v6 = FIELD_U32(v9, 72);
  }
  v12 = v6;
  v13 = a2;
  if ( a3 <= 3 )
  {
    v10 = dword_60B02B84[a3];
    if ( v10 >= 4 )
      v10 = 0;
    v5 = *(_DWORD *)(result + 4 * v10 + 3632);
  }
  v14 = v5;
  sub_603FF880(v4, &v11);
  FIELD_U8(v4, 2695) = 1;
  FIELD_U32(v4, 388) = -1027080192;
  return -1027080192;
}
