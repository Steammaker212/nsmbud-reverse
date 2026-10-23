/* sub_607B8C68
 * address: 0x607B8C68   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B8C68(_DWORD *a1)
{
  unsigned int v1; // r1

  v1 = a1[304] & 0xFDDFFFFF;
  a1[308] &= ~0x20000000u;
  a1[309] &= 0xFFFCFFFF;
  a1[307] &= ~0x100u;
  a1[304] = v1;
  a1[2488] = 0;
  return sub_607957D4((int)a1, 0);
}
