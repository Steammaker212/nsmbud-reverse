/* sub_6076B644
 * address: 0x6076B644   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076B644(_DWORD *a1)
{
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 624))(a1, 3);
  a1[22] = 0;
  a1[23] = 0;
  a1[39] = 0;
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  (*(void (__fastcall **)(_DWORD *, float))(*a1 + 1084))(a1, -1800.0);
  a1[307] |= 0x1000000u;
  if ( (a1[305] & 4) == 0 )
    sub_60766B08(a1, (int)(a1 + 2459));
  a1[1751] = 0;
  return 7004;
}
