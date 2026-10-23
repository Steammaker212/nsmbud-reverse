/* sub_60364754
 * address: 0x60364754   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60364754(_DWORD *a1)
{
  int v2; // r1
  int v3; // r0
  signed int v4; // r1
  _DWORD *v5; // r0
  int v6; // s0
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
  a1[20] = v4;
  a1[1879] = v4;
  a1[40] = sub_6035C8A0((int)a1);
  v5 = a1 + 1877;
  if ( (*((_BYTE *)a1 + 21) & 1) != 0 )
  {
    v6 = 0;
    *v5 = 128;
  }
  else
  {
    *v5 = 32;
    v6 = dword_60AF1F60[a1[20]];
  }
  a1[30] = v6;
  a1[33] = dword_60AF1F60[a1[1879]];
  a1[1875] = 0;
  a1[31] = 0;
  a1[800] |= 0x40000000u;
  a1[798] |= 0x40000000u;
  a1[795] |= 0x20u;
  result = a1[797] | 0x20;
  a1[797] = result;
  return result;
}
