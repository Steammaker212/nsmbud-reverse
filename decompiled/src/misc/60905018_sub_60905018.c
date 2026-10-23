/* sub_60905018
 * address: 0x60905018   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

size_t __fastcall sub_60905018(_DWORD *a1, void *a2, size_t a3)
{
  int v5; // r3
  unsigned int v6; // r2

  v5 = a1[3];
  v6 = a1[2];
  if ( v5 + a3 > v6 )
    a3 = v6 - v5;
  qmemcpy(a2, (const void *)(a1[1] + v5), a3);
  a1[3] += a3;
  return a3;
}
