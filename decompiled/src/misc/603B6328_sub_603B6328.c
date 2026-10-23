/* sub_603B6328
 * address: 0x603B6328   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_603B6328(_DWORD *a1)
{
  int *result; // r0
  int v2; // t1

  a1[798] |= 0x40000000u;
  a1[800] |= 0x40000000u;
  a1[794] |= 0x40000000u;
  a1[796] |= 0x40000000u;
  a1[2254] |= 0x40000u;
  a1[2258] |= 0x200000u;
  a1[2256] |= 0x40000u;
  a1[4931] |= 0x1000u;
  a1[4933] |= 0x1000u;
  a1[4935] |= 0x1000u;
  a1[4937] |= 0x1000u;
  a1[4930] |= 0x400000u;
  a1[4932] |= 0x400000u;
  a1[4934] |= 0x400000u;
  a1[4936] |= 0x400000u;
  a1[3596] |= 0x40000000u;
  a1[3597] |= 0x1000u;
  a1[3598] |= 0x40000000u;
  a1[3599] |= 0x1000u;
  a1[3592] |= 0x40000000u;
  a1[3594] |= 0x40000000u;
  a1[3593] |= 0x1000u;
  v2 = a1[3595];
  result = a1 + 3595;
  *result = v2 | 0x1000;
  *((_BYTE *)result + 8185) = 1;
  return result;
}
