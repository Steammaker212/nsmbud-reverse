/* sub_60364320
 * address: 0x60364320   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60364320(_DWORD *a1)
{
  int v2; // r1
  int v3; // r0
  signed int v4; // r0
  int *v5; // r5
  _DWORD *v6; // r0
  int v7; // r0
  int v8; // s0
  int result; // r0

  sub_6035C5B4((int)a1, 5);
  v2 = a1[1588];
  if ( v2 != 2 )
  {
    a1[1589] = v2;
    a1[1588] = 2;
    (*(void (__fastcall **)(_DWORD *))(*a1 + 696))(a1);
  }
  v3 = (a1[5] >> 12) & 3;
  if ( v3 == 1 )
  {
    v4 = 0;
  }
  else if ( v3 )
  {
    v4 = 1;
  }
  else
  {
    v4 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)a1 + 9);
  }
  a1[1879] = v4;
  v5 = a1 + 1879;
  a1[20] = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)a1 + 9);
  a1[40] = sub_6035C8A0((int)a1);
  v6 = a1 + 1877;
  if ( (*((_BYTE *)a1 + 21) & 1) != 0 )
  {
    v8 = 0;
    *v6 = 128;
    v7 = *v5;
  }
  else
  {
    *v6 = 32;
    v7 = *v5;
    v8 = dword_60AF1F60[*v5];
  }
  a1[31] = v8;
  a1[24] = dword_60AF1F60[v7];
  a1[1875] = 0;
  a1[801] |= 0x20u;
  a1[799] |= 0x20u;
  a1[794] |= 0x40000000u;
  result = a1[796] | 0x40000000;
  a1[796] = result;
  return result;
}
