/* BlockBase__ctor
 * address: 0x60563544   size: 100   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BlockBase__ctor(int a1, int a2)
{
  MovementBlockCoinBase__ctor(a1, a2);
  *(_DWORD *)a1 = &off_60C012F4;
  FIELD_U32(a1, 7380) = 0;
  memset((void *)(a1 + 7348), 0, 31);
  FIELD_U8(a1, 7384) = 1;
  FIELD_U8(a1, 7385) = 0;
  FIELD_U32(a1, 7296) = 48;
  return a1;
}
