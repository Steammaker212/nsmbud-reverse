/* sub_602BC26C
 * address: 0x602BC26C   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602BC26C(int a1)
{
  ++FIELD_U8(a1, 6307);
  sub_602BCB10(a1);
  if ( !FIELD_U8(a1, 6333) )
    FIELD_F32(a1, 108) = FIELD_F32(a1, 6328) + FIELD_F32(a1, 108);
  FIELD_U8(a1, 6333) = 0;
  FIELD_U32(a1, 6340) = dword_60AF1FF8[FIELD_U32(a1, 80)] * FIELD_U32(a1, 6344);
  FIELD_U8(a1, 7008) = 0;
  return 7008;
}
