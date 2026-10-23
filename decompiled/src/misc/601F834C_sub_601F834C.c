/* sub_601F834C
 * address: 0x601F834C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F834C(int a1)
{
  int v2; // r3
  _BYTE v4[64]; // [sp+0h] [bp-40h] BYREF

  skl_root_ref_1F28F8(a1, (int)v4);
  return ((int (__fastcall *)(int, _BYTE *, int, int))sub_60237454)(a1 + 440, v4, 1, v2);
}
