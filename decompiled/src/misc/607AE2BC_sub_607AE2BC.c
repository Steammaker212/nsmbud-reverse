/* sub_607AE2BC
 * address: 0x607AE2BC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AE2BC(int a1)
{
  int v2; // r0
  bool v3; // zf
  int v4; // r4

  v2 = sub_60766708(a1);
  v3 = v2 == 0;
  v4 = 0;
  if ( !v2 )
    v3 = (FIELD_U8(a1, 1230) & 0x40) == 0;
  if ( v3 && sub_6078A700() )
    return (FIELD_U8(a1, 1215) >> 4) & 1;
  return v4;
}
