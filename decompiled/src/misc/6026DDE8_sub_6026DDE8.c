/* sub_6026DDE8
 * address: 0x6026DDE8   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6026DDE8(_DWORD *a1)
{
  unsigned int v2; // r1
  int v3; // r0

  v2 = a1[5];
  a1[2369] = dword_60AF4AD0[v2 & 7];
  v3 = (v2 >> 4) & 1;
  a1[2367] = v3;
  a1[20] = (v2 >> 8) & 1;
  a1[2348] = 1065353216;
  a1[2349] = 1065353216;
  a1[2350] = 1065353216;
  a1[2351] = 1065353216;
  a1[2352] = 1065353216;
  a1[2353] = 1065353216;
  a1[2354] = 1065353216;
  a1[2355] = 1065353216;
  a1[2356] = 1065353216;
  a1[2357] = 1065353216;
  a1[41] = dword_60AF5A54[v3];
  (*(void (__fastcall **)(_DWORD *))(*a1 + 212))(a1);
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 204))(a1);
}
