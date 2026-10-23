/* sub_607CE05C
 * address: 0x607CE05C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CE05C(_BYTE *a1)
{
  int v2; // r4
  bool v3; // zf
  int v5; // r0

  v2 = 1;
  if ( (a1[1238] & 0x10) != 0 || sub_60766708((int)a1) )
    return 1;
  v3 = (a1[1204] & 0x80) == 0;
  if ( (a1[1204] & 0x80) == 0 )
    v3 = (a1[1239] & 8) == 0;
  if ( !v3 )
    return 1;
  v5 = sub_607D6C28(a1);
  if ( !v5 || FIELD_U32(v5, 9572) )
    return 1;
  if ( !FIELD_U32(v5, 9576) )
    return 0;
  return v2;
}
