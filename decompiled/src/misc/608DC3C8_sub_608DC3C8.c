/* sub_608DC3C8
 * address: 0x608DC3C8   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DC3C8(int a1, const char *a2)
{
  unsigned int v3; // r7
  unsigned int v4; // r6

  if ( FIELD_U8(a1, 1480) )
    FIELD_U8(a1, 793) = 1;
  sub_6099BCC8(a1 + 8, a2);
  v3 = sub_608B1550((_WORD *)(a1 + 664));
  FIELD_U32(a1, 1464) = operator_new_8DE2C8(v3, FIELD_U32(a1, 1460), 64);
  sub_6099BF58(a1 + 8);
  if ( FIELD_U8(a1, 1472) )
  {
    v4 = sub_608B1518((_WORD *)(a1 + 664));
    FIELD_U32(a1, 1468) = operator_new_8DE2C8(v4, FIELD_U32(a1, 1460), 64);
    sub_6099BFFC(a1 + 8);
  }
  return 1;
}
