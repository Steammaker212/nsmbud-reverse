/* nn__init__InitializeAllocator
 * address: 0x608350C4   size: 60   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall nn__init__InitializeAllocator(void *a1, unsigned int a2)
{
  nn__mem__StandardAllocator *v4; // r0

  v4 = (nn__mem__StandardAllocator *)nn__mem__StandardAllocator__ctor((nn__mem__StandardAllocator *)&unk_60CC7278);
  nn__mem__StandardAllocator__Initialize(v4, a1, a2);
  dword_60CC729C = (int)a1;
  dword_60CC72A0 = a2;
  return &dword_60CC729C;
}
