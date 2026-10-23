/* sub_60915B3C
 * address: 0x60915B3C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60915B3C(int a1)
{
  int v2; // r0
  _BYTE v4[440]; // [sp+0h] [bp-1B8h] BYREF

  v2 = sub_60913508((int)v4);
  sub_60913814(v2);
  (*(void (__fastcall **)(int, _BYTE *))(*(_DWORD *)a1 + 16))(a1, v4);
  return sub_60913598((int)v4);
}
