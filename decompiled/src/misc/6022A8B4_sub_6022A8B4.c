/* sub_6022A8B4
 * address: 0x6022A8B4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022A8B4(int a1)
{
  size_t v2; // r0
  bool v3; // zf
  int result; // r0
  int v5; // r0
  bool v6; // zf
  int v7; // r1
  bool v8; // zf

  v2 = strlen((const char *)a1);
  v3 = v2 == 9;
  if ( v2 == 9 )
    v3 = *(_BYTE *)a1 == 82;
  if ( !v3 )
    return 0;
  v5 = FIELD_U8(a1, 1);
  v6 = v5 == 87;
  if ( v5 != 87 )
    v6 = v5 == 70;
  if ( !v6 )
    return 0;
  v7 = FIELD_U8(a1, 5);
  result = 1;
  v8 = v7 == 70;
  if ( v7 != 70 )
    v8 = v7 == 87;
  if ( !v8 )
    return 0;
  return result;
}
