/* sub_608A92A8
 * address: 0x608A92A8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A92A8(int a1, int a2)
{
  int v2; // r1
  int result; // r0
  _DWORD v4[11]; // [sp+4h] [bp-2Ch] BYREF

  v2 = sub_608A9E10(a2, v4);
  result = 0;
  if ( v2 == 1 )
    return (v4[2] + v4[0] + v4[5]) << 6;
  return result;
}
