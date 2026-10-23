/* realloc
 * address: 0x608351F4   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall realloc(void *a1, unsigned int a2)
{
  int result; // r0

  result = 0;
  if ( dword_60CC72A0 )
  {
    result = nn__mem__StandardAllocator__Reallocate((nn__mem__StandardAllocator *)&unk_60CC7278, a1, a2);
    if ( !result )
    {
      *_errno_location() = 12;
      return 0;
    }
  }
  return result;
}
