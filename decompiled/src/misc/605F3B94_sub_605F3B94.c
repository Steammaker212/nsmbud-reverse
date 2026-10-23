/* sub_605F3B94
 * address: 0x605F3B94   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F3B94(int a1)
{
  int result; // r0

  if ( FIELD_U8(a1, 6164) != 255 )
  {
    SE_OBJ_GET_DRAGON_COIN_ref(a1);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 200))(a1);
  result = FIELD_U32(dword_60CBD894, 32);
  FIELD_U32(a1, 160) = result;
  return result;
}
