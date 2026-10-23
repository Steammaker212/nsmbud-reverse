/* sub_60588290
 * address: 0x60588290   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60588290(_DWORD *a1)
{
  char v1; // r12
  _DWORD *v3; // r0
  int v4; // r1
  int v5; // r3
  unsigned int v6; // r4
  int v7; // r5
  unsigned int v8; // r6
  int v9; // r2
  int v10; // r1
  int result; // r0

  if ( ((unsigned int)dword_60CAF2B0 & ~(1616413352 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CAF2B0) )
  {
    *(_QWORD *)&dword_60CAF2B0[2] = 0xFFE4CCCD001B3333LL;
    _cxa_guard_release(dword_60CAF2B0);
  }
  if ( ((unsigned int)&dword_60CAF2B0[1] & ~(1616413428 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAF2B0[1]) )
  {
    *(_QWORD *)&dword_60CAF2B0[4] = 0xFEF0000001100000LL;
    _cxa_guard_release(&dword_60CAF2B0[1]);
  }
  v3 = a1 + 1584;
  v4 = a1[1584];
  v5 = a1[1579] + dword_60CAF2B0[v4 + 2];
  v6 = v5;
  a1[1579] = v5;
  if ( v5 < 0 )
  {
    v6 = v5;
    if ( v5 != 0x80000000 )
      v6 = -v5;
  }
  v7 = dword_60CAF2B0[v4 + 4];
  v8 = v7;
  if ( v7 < 0 )
  {
    v8 = dword_60CAF2B0[v4 + 4];
    if ( v7 != 0x80000000 )
      v8 = -v7;
  }
  if ( v6 >= v8 )
  {
    a1[1579] = v7;
    v5 = v7;
  }
  v9 = a1[41] + v5;
  a1[41] = v9;
  if ( v4 )
  {
    if ( v9 <= -268435456 )
    {
      *v3 = 0;
      goto LABEL_23;
    }
  }
  else
  {
    if ( v9 < 0x10000000 )
    {
LABEL_23:
      v10 = 178913280;
      result = a1[40] + 12582912;
      if ( result < 178913280 )
        v10 = a1[40] + 12582912;
      goto LABEL_25;
    }
    *v3 = 1;
  }
  v10 = -178913280;
  result = a1[40] - 12582912;
  if ( result > -178913280 )
    v10 = a1[40] - 12582912;
LABEL_25:
  a1[40] = v10;
  return result;
}
