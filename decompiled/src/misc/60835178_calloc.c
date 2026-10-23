/* calloc
 * address: 0x60835178   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall calloc(int a1, int a2)
{
  size_t v2; // r4
  void *v3; // r0
  void *v4; // r5

  if ( dword_60CC72A0 )
  {
    v2 = a2 * a1;
    v3 = (void *)nn__mem__StandardAllocator__Allocate((nn__mem__StandardAllocator *)&unk_60CC7278, a2 * a1);
    v4 = v3;
    if ( v3 )
    {
      memset(v3, 0, v2);
      return v4;
    }
    *_errno_location() = 12;
  }
  *_errno_location() = 12;
  return 0;
}
