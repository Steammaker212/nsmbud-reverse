/* sub_6076D194
 * address: 0x6076D194   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076D194(_DWORD *a1)
{
  a1[307] |= 0x4000000u;
  a1[301] |= 0x10u;
  if ( !a1[2424] )
  {
    (*(void (__fastcall **)(_DWORD *))(*a1 + 676))(a1);
    a1[308] |= 0x20000000u;
  }
  (*(void (__fastcall **)(_DWORD *))(*a1 + 188))(a1);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 1208))(a1);
  a1[2426] = 0;
  a1[2427] = 0;
  PlayerBase_dispatchVirtual3(a1[162], 86);
  a1[39] = 0;
  (*(void (__fastcall **)(_DWORD *, float))(*a1 + 1088))(a1, 2900.0);
  a1[30] = 0;
  a1[22] = 0;
  a1[31] = 0;
  a1[25] = 0;
  a1[24] = -1065353216;
  return -1065353216;
}
