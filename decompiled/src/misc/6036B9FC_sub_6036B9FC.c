/* sub_6036B9FC
 * address: 0x6036B9FC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6036B9FC(int a1)
{
  sub_6036BA4C((CooliganSunglasses *)a1);
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 644) + 0x3C))(FIELD_U32(a1, 644), a1 + 652);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 644) + 0x38))(FIELD_U32(a1, 644));
  if ( FIELD_U8(a1, 0x288) )
    StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
