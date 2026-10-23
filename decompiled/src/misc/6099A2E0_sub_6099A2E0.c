/* sub_6099A2E0
 * address: 0x6099A2E0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099A2E0(int a1)
{
  int v2; // r0

  v2 = sub_6099A310();
  if ( v2 == 0xFFFF )
    return 0;
  *(_WORD *)(FIELD_U32(a1, 16) + 6) = v2;
  return 1;
}
