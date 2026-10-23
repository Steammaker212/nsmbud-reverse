/* sub_6083359C
 * address: 0x6083359C   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083359C(int a1)
{
  return (unsigned __int8)(a1 ^ BYTE1(a1) ^ BYTE2(a1)) ^ HIBYTE(a1);
}
