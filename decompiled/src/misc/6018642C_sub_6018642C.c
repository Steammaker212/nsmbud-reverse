/* sub_6018642C
 * address: 0x6018642C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6018642C(int a1, int a2, int a3, int a4)
{
  _DWORD v8[26]; // [sp+0h] [bp-68h] BYREF

  v8[0] = 0;
  memset(&v8[2], 0, 72);
  sub_601905DC(v8);
  v8[0] = a2;
  v8[1] = sub_601916C8(dword_60C8996C);
  v8[2] = a3;
  v8[3] = a4;
  return sub_60191160(dword_60C8996C, v8);
}
