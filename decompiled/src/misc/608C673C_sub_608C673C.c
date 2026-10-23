/* sub_608C673C
 * address: 0x608C673C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

size_t __fastcall sub_608C673C(_DWORD *a1, void *a2, unsigned int a3)
{
  size_t v4; // r4
  int v5; // r0
  int v6; // r3

  v4 = a3;
  v5 = a1[1];
  v6 = a1[3];
  if ( a1[2] - v6 < a3 )
    v4 = a1[2] - v6;
  qmemcpy(a2, (const void *)(v5 + v6), v4);
  a1[3] += v4;
  return v4;
}
