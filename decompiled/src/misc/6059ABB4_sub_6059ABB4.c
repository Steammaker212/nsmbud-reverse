/* sub_6059ABB4
 * address: 0x6059ABB4   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6059ABB4(int a1)
{
  int v1; // r0

  if ( (FIELD_U8(a1, 6262) & 2) != 0 )
  {
    v1 = sub_605DBDDC(a1);
    if ( v1 )
      sub_6079B3B8(FIELD_F32(v1, 88), FIELD_F32(v1, 124) + -0.3);
  }
  JUMPOUT(0x605DEC04);
}
