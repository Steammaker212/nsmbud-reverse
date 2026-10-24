/* sub_605BE584
 * address: 0x605BE584   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BE584(ColliderBase *a1, int a2, float a3)
{
  int v3; // r2

  if ( LOBYTE(FIELD_U32(a1 + (1) * 340, 0x144)) )
  {
    v3 = ((int)(float)(*(float *)&FIELD_U32(a1 + (1) * 340, 0x140) - a3) + 192) / 48;
    if ( v3 <= 0 )
      v3 = 0;
    if ( v3 >= 7 )
      v3 = 7;
    *(_BYTE *)(a2 + 84 * v3 + 80) = 1;
    LOBYTE(FIELD_U32(a1 + (1) * 340, 0x144)) = 0;
  }
  return ShapedCollider_execute(a1);
}
