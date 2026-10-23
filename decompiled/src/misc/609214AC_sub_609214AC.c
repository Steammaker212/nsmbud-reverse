/* sub_609214AC
 * address: 0x609214AC   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609214AC(int a1, unsigned int a2, void *a3)
{
  __int64 v6; // r0
  int result; // r0

  FIELD_U32(a1, 4) = operator_new_8DE25C(8u, a3, 4);
  v6 = 12LL * a2;
  if ( !is_mul_ok(0xCu, a2) )
    HIDWORD(v6) = 1;
  if ( HIDWORD(v6) )
    LODWORD(v6) = -1;
  **(_DWORD **)(a1 + 4) = operator_new_8DE2C8(v6, (int)a3, 4);
  *(_WORD *)(FIELD_U32(a1, 4) + 4) = a2;
  *(_WORD *)(FIELD_U32(a1, 4) + 6) = 0;
  result = FIELD_U8(a1, 38) | 1;
  FIELD_U8(a1, 38) = result;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 16) = 0;
  return result;
}
