/* sub_60898C50
 * address: 0x60898C50   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60898C50(int a1, int a2)
{
  int v3; // r6
  size_t v4; // r5
  void *v5; // r0
  void *v6; // r0

  if ( !*(_BYTE *)(FIELD_U32(a2, 136) + 1874) )
  {
    v3 = FIELD_U32(a2, 156);
    v4 = 16 * FIELD_U32(a2, 40);
    qmemcpy(*(void **)v3, *(const void **)(a2 + 292), v4);
    qmemcpy(*(void **)(v3 + 4), *(const void **)(a2 + 296), v4);
    qmemcpy(*(void **)(v3 + 8), *(const void **)(a2 + 300), v4);
    qmemcpy(*(void **)(v3 + 16), *(const void **)(a2 + 308), v4);
    qmemcpy(*(void **)(v3 + 12), *(const void **)(a2 + 304), v4);
    qmemcpy(*(void **)(v3 + 20), *(const void **)(a2 + 312), v4);
    v5 = *(void **)(v3 + 24);
    if ( v5 )
    {
      qmemcpy(v5, *(const void **)(a2 + 316), v4);
      qmemcpy(*(void **)(v3 + 28), *(const void **)(a2 + 320), v4);
    }
    v6 = *(void **)(v3 + 32);
    if ( v6 )
    {
      qmemcpy(v6, *(const void **)(a2 + 324), v4);
      qmemcpy(*(void **)(v3 + 36), *(const void **)(a2 + 328), v4);
      qmemcpy(*(void **)(v3 + 40), *(const void **)(a2 + 332), v4);
    }
  }
}
