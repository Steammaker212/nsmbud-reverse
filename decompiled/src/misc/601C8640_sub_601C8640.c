/* sub_601C8640
 * address: 0x601C8640   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C8640(_DWORD *a1)
{
  unsigned int v3[7]; // [sp+4h] [bp-1Ch] BYREF

  memset(v3, 255, 12);
  sub_601E06F0(a1[302], v3);
  sub_60171B7C(dword_60C88BC8, a1 + 258, v3);
  if ( a1[303] == 8 )
    sub_601D9A30(a1);
  (*(void (__fastcall **)(_DWORD *, int, unsigned int *))(*a1 + 116))(a1, 5, v3);
  a1[250] = a1[45];
  a1[253] = 0;
  return 0;
}
