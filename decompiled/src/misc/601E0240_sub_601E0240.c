/* sub_601E0240
 * address: 0x601E0240   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E0240(_DWORD *a1, _DWORD *a2)
{
  _DWORD v3[3]; // [sp+0h] [bp-20h] BYREF
  _DWORD v4[5]; // [sp+Ch] [bp-14h] BYREF

  v4[0] = a1[21];
  v4[1] = a1[22];
  v4[2] = a1[24];
  v3[0] = a2[21];
  v3[1] = a2[22];
  v3[2] = a2[24];
  return sub_601E0070((int)v4, (int)v3);
}
