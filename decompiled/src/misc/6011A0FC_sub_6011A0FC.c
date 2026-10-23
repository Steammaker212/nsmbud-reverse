/* sub_6011A0FC
 * address: 0x6011A0FC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6011A0FC(int a1)
{
  int v2; // r0

  FIELD_U32(a1, 80) ^= 1u;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1) )
  {
    v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v2 + 1036))(v2, FIELD_U32(a1, 80));
  }
  FIELD_U32(a1, 9272) = 1061997773;
  FIELD_U32(a1, 9196) = 1;
  FIELD_U8(a1, 9242) = 0;
  return 9242;
}
