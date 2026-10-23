/* sub_6059EA0C
 * address: 0x6059EA0C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059EA0C(int a1)
{
  _DWORD *v1; // r4
  int v2; // r5
  int result; // r0

  v1 = (_DWORD *)(a1 + 6100);
  v2 = FIELD_U32(a1, 6100);
  result = sub_605C6B58();
  if ( !v2 )
  {
    if ( *v1 )
      return 2;
  }
  return result;
}
