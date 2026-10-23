/* sub_608335E8
 * address: 0x608335E8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608335E8(_DWORD *a1)
{
  int v1; // r0

  v1 = a1[1] ^ *a1 ^ a1[2];
  return (unsigned __int8)(v1 ^ BYTE1(v1) ^ BYTE2(v1)) ^ HIBYTE(v1);
}
