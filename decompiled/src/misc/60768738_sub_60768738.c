/* sub_60768738
 * address: 0x60768738   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60768738(_DWORD *a1)
{
  int v2; // r0
  int result; // r0

  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 624))(a1, 4);
  v2 = a1[308];
  if ( (v2 & 0x4000000) != 0 )
    a1[308] = v2 & 0xFBFFFFFF;
  sub_6078667C(a1 + 172, 10);
  a1[308] = a1[308] & 0xFFADFFFF | 0x100000;
  a1[305] &= ~0x400000u;
  a1[303] |= 2u;
  a1[301] &= ~0x20u;
  (*(void (__fastcall **)(_DWORD *, _DWORD))(*a1 + 620))(a1, 0);
  result = a1[2424];
  a1[2427] = result;
  if ( result == 4 )
  {
    a1[2428] = 60;
    result = a1[309] | 0x10000;
    a1[309] = result;
  }
  return result;
}
