/* sub_6076FDD8
 * address: 0x6076FDD8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076FDD8(int a1)
{
  _DWORD *v2; // r5

  v2 = (_DWORD *)(a1 + 10016);
  if ( FIELD_U32(a1, 10016) == 1 && !sub_6076EA78(a1) )
    *v2 = 0;
  return sub_607503C0((int **)(a1 + 10636));
}
