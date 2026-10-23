/* sub_60305CFC
 * address: 0x60305CFC   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60305CFC(_DWORD *a1)
{
  char v2; // r12
  int v3; // r0
  int v4; // r1

  a1[39] += sub_602A7BAC((int)a1, 72089600);
  if ( ((unsigned int)dword_60C92F28 & ~(1613782316 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C92F28) )
  {
    dword_60C92F28[1] = 0x1000000;
    dword_60C92F28[2] = -16777216;
    _cxa_guard_release(dword_60C92F28);
  }
  v3 = a1[1571];
  v4 = dword_60C92F28[v3 + 1];
  if ( a1[20] == v3 )
    v4 = -v4;
  a1[40] += sub_602A7BAC((int)a1, v4);
  JUMPOUT(0x6000100C);
}
