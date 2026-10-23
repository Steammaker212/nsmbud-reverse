/* sub_603A6F1C
 * address: 0x603A6F1C   size: 744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603A6F1C(_DWORD *a1)
{
  char v2; // r12
  int *v3; // r6
  int v4; // r9
  _DWORD *v5; // r5
  int result; // r0
  int v7; // r2
  _DWORD *v8; // r1
  int v9; // r1
  int v10; // r3
  _DWORD *v11; // r2
  int v12; // r1
  int v13; // r2
  int v14; // r7

  sub_60160948(a1 + 1578);
  a1[1748] = a1[1745];
  a1[1749] = a1[1746];
  a1[1750] = a1[1747];
  sub_60160948(a1 + 1776);
  a1[1946] = a1[1943];
  a1[1947] = a1[1944];
  a1[1948] = a1[1945];
  v3 = a1 + 5892;
  if ( (int)a1[5892] >= 1 )
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
    }
    while ( v4 < *v3 );
  }
  if ( ((unsigned int)&dword_60C97990[1] & ~(1614442532 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C97990[1]) )
  {
    dword_60C97A00[0] = 0;
    dword_60C97A04 = 0;
    dword_60C97A08 = 1065353216;
    dword_60C97A0C = 1077936128;
    dword_60C97A10 = 0;
    dword_60C97A14 = -1082130432;
    dword_60C97A20 = 0;
    dword_60C97A24 = 0;
    dword_60C97A1C = 0;
    dword_60C97A18 = 0;
    _cxa_guard_release(&dword_60C97990[1]);
  }
  a1[1754] = a1[1745];
  a1[1755] = a1[1746];
  a1[1756] = a1[1747];
  a1[1952] = a1[1943];
  a1[1953] = a1[1944];
  a1[1954] = a1[1945];
  result = *v3;
  if ( *v3 < 1 )
  {
    v9 = a1[1757];
  }
  else
  {
    v7 = 0;
    v8 = a1 + 2152;
    do
    {
      ++v7;
      *(v8 - 2) = *(v8 - 11);
      *(v8 - 1) = *(v8 - 10);
      *v8 = *(v8 - 9);
      v8 += 196;
      result = *v3;
    }
    while ( v7 < *v3 );
    v9 = a1[1757];
    if ( result >= 1 )
    {
      v10 = 0;
      v11 = a1 + 2153;
      do
      {
        *v11 = v9;
        v11 += 196;
        ++v10;
        --v9;
        result = *v3;
      }
      while ( v10 < *v3 );
    }
  }
  a1[1955] = v9;
  v12 = dword_60C97A00[2 * *(char *)(a1[5894] + a1[5896])];
  v13 = dword_60C97A00[2 * *(char *)(a1[5894] + a1[5896]) + 1];
  a1[1751] = v12;
  a1[1752] = v13;
  a1[1753] = 0;
  a1[1949] = v12;
  a1[1950] = v13;
  a1[1951] = 0;
  if ( result >= 1 )
  {
    v14 = 0;
    result = (int)(a1 + 2149);
    do
    {
      *(_DWORD *)(result - 8) = v12;
      *(_DWORD *)(result - 4) = v13;
      *(_DWORD *)result = 0;
      ++v14;
      result += 784;
    }
    while ( v14 < *v3 );
  }
  return result;
}
