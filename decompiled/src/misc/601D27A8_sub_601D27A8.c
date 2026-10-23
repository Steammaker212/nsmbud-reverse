/* sub_601D27A8
 * address: 0x601D27A8   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D27A8(int a1, int a2)
{
  _DWORD v4[24]; // [sp+0h] [bp-60h] BYREF

  v4[0] = 0;
  memset(&v4[2], 0, 72);
  sub_601905DC(v4);
  v4[0] = 99;
  v4[1] = sub_601916C8(dword_60C8996C, 99);
  v4[2] = FIELD_U32(a2, 8);
  return sub_60191160((_DWORD *)dword_60C8996C, v4);
}
