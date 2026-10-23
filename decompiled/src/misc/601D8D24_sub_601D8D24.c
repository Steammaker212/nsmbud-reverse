/* sub_601D8D24
 * address: 0x601D8D24   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D8D24(int a1)
{
  int v1; // r4
  _DWORD v3[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD *v4; // [sp+Ch] [bp-Ch] BYREF

  v1 = 0;
  v4 = 0;
  sub_601E14F8(a1 + 1080, FIELD_U32(a1, 1108), &v4);
  if ( v4 )
  {
    v3[0] = v4[21];
    v3[1] = v4[22];
    v3[2] = v4[24];
    return sub_601DA52C(v3);
  }
  return v1;
}
