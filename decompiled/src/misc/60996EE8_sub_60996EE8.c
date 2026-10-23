/* sub_60996EE8
 * address: 0x60996EE8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60996EE8(int a1, int a2)
{
  int result; // r0

  if ( FIELD_U32(a1, 36) == a2 )
  {
    FIELD_U32(a1, 36) = 0;
    if ( a2 )
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a2 + 12) + 156))(FIELD_U32(a2, 12));
  }
  result = FIELD_U32(a1, 40);
  if ( result == a2 )
  {
    FIELD_U32(a1, 40) = 0;
    return 0;
  }
  return result;
}
