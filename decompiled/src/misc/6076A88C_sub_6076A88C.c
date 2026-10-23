/* sub_6076A88C
 * address: 0x6076A88C   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076A88C(_DWORD *a1, int a2)
{
  int v4; // r1

  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 624))(a1, 3);
  a1[2455] = a2;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 1216))(a1);
  a1[307] |= 0x1000000u;
  a1[22] = 0;
  a1[31] = 0;
  (*(void (__fastcall **)(_DWORD *, float))(*a1 + 1084))(a1, -1800.0);
  v4 = 35;
  if ( a1[2424] == 1 )
    v4 = 0;
  a1[2393] = v4;
  a1[2426] = 0;
  sub_607780C4(dword_60CBFA90, 1);
  sub_60766B08(a1, (int)(a1 + 2459));
  a1[1751] = 0;
  return 7004;
}
