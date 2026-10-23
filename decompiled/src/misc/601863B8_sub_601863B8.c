/* sub_601863B8
 * address: 0x601863B8   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601863B8(int a1, int a2, int a3)
{
  _DWORD v7[26]; // [sp+0h] [bp-68h] BYREF

  v7[0] = 0;
  memset(&v7[2], 0, 72);
  sub_601905DC(v7);
  v7[0] = a2;
  v7[1] = sub_601916C8(dword_60C8996C);
  v7[2] = FIELD_U32(a1, 8);
  v7[3] = a3;
  return sub_60191160(dword_60C8996C, v7);
}
