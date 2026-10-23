/* sub_60807C28
 * address: 0x60807C28   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60807C28(int a1)
{
  int v2; // r0
  bool v3; // zf

  v2 = FIELD_U32(a1, 64);
  v3 = v2 == 0;
  if ( v2 )
    v3 = FIELD_U8(a1, 44) == 0;
  if ( v3 )
    return 0;
  else
    return sub_608AF468(v2) ^ 1;
}
