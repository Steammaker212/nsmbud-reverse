/* sub_601C7F14
 * address: 0x601C7F14   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C7F14(_DWORD *a1)
{
  unsigned int v3[7]; // [sp+4h] [bp-1Ch] BYREF

  FIELD_U8(dword_60CC6D78, 512) = a1[302] == 9;
  a1[280] &= ~0x10000000u;
  memset(v3, 255, 12);
  sub_601E06F0(a1[302], v3);
  sub_60171B7C(dword_60C88BC8, a1 + 258, v3);
  (*(void (__fastcall **)(_DWORD *, int, unsigned int *))(*a1 + 116))(a1, 4, v3);
  a1[250] = a1[45];
  a1[253] = 0;
  return sub_60816B60(dword_60CC6B68);
}
