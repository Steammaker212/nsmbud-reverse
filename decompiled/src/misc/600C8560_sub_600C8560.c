/* sub_600C8560
 * address: 0x600C8560   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_600C8560()
{
  int v0; // r2

  if ( dword_60C99DD4 )
    FIELD_U32(dword_60C99DD4, 1376) &= ~2u;
  if ( dword_60C99DE4 )
  {
    v0 = FIELD_U32(dword_60C99DE4, 16);
    if ( v0 )
      FIELD_U32(dword_60C99DE4, 16) = v0 - 1;
  }
  return sub_60027284();
}
