/* sub_601D1400
 * address: 0x601D1400   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D1400(int a1, int a2)
{
  int v4; // r6
  int v5; // r0
  int v6; // r0
  _DWORD v8[24]; // [sp+0h] [bp-60h] BYREF

  v4 = FIELD_U32(a1, 1032);
  v5 = sub_6018691C(a2);
  v6 = sub_6021FF4C(v4, v5);
  sub_601D99F8(a1, FIELD_U32(a1, 1032), v6);
  v8[0] = 0;
  memset(&v8[2], 0, 72);
  sub_601905DC(v8);
  v8[0] = 44;
  v8[1] = sub_601916C8(dword_60C8996C, 44);
  v8[2] = FIELD_U32(a2, 8);
  return sub_60191160((_DWORD *)dword_60C8996C, v8);
}
