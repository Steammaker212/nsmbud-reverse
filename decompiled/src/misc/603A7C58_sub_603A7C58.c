/* sub_603A7C58
 * address: 0x603A7C58   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603A7C58(_DWORD *a1)
{
  int v2; // r1
  int *v3; // r6
  int v4; // r7
  _DWORD *v5; // r5
  int result; // r0
  int v7; // r2
  _DWORD *v8; // r1

  sub_60160948(a1 + 1578);
  a1[1748] = a1[1745];
  a1[1749] = a1[1746];
  a1[1750] = a1[1747];
  sub_60160948(a1 + 1776);
  a1[1946] = a1[1943];
  a1[1947] = a1[1944];
  a1[1948] = a1[1945];
  v3 = a1 + 5892;
  v2 = a1[5892];
  if ( v2 >= 1 )
  {
    v4 = 0;
    v5 = a1 + 1974;
    do
    {
      sub_60160948(v5);
      ++v4;
      v5[170] = v5[167];
      v5[171] = v5[168];
      v5[172] = v5[169];
      v5 += 196;
      v2 = *v3;
    }
    while ( v4 < *v3 );
  }
  a1[5900] = -8;
  result = 0;
  a1[1751] = 0;
  a1[1752] = 0;
  a1[1753] = 0;
  a1[1949] = 0;
  a1[1950] = 0;
  a1[1951] = 0;
  if ( v2 >= 1 )
  {
    v7 = 0;
    v8 = a1 + 2149;
    do
    {
      *(v8 - 2) = 0;
      *(v8 - 1) = 0;
      *v8 = 0;
      ++v7;
      v8 += 196;
    }
    while ( v7 < *v3 );
  }
  return result;
}
