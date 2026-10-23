/* sub_602586D8
 * address: 0x602586D8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602586D8(int *a1)
{
  int *v2; // r5
  int result; // r0

  v2 = a1 + 1730;
  --a1[1730];
  Animation_update(**(_DWORD **)(a1[1575] + 20));
  result = *v2;
  if ( *v2 <= 0 )
    return (*(int (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60C8E080);
  return result;
}
