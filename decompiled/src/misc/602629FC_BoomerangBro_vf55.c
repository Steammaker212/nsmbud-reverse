/* BoomerangBro_vf55
 * address: 0x602629FC   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BoomerangBro_vf55(int *a1)
{
  int result; // r0

  (*(void (__fastcall **)(int *, StateVirtual *))(*a1 + 192))(a1, &BroBase_StateID_Move);
  a1[1637] >>= 1;
  result = a1[1636] >> 1;
  a1[1636] = result;
  return result;
}
