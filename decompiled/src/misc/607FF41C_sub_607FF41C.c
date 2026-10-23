/* sub_607FF41C
 * address: 0x607FF41C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FF41C(int a1, int a2)
{
  int v3; // r0
  bool v4; // zf

  v3 = FIELD_U8(a1, 1);
  v4 = v3 == 0;
  if ( v3 )
    v4 = *(_BYTE *)a1 == 0;
  if ( !v4 )
  {
    if ( sub_60802808(FIELD_U32(a1, 36), FIELD_U32(a1, 40)) == 1 )
      return a1 + 28;
    return a1 + 20;
  }
  return a2;
}
