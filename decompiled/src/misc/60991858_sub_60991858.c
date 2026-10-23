/* sub_60991858
 * address: 0x60991858   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60991858(int result, int a2)
{
  unsigned __int8 *v2; // r5
  unsigned __int8 v3; // r4
  int v4; // r2

  v2 = (unsigned __int8 *)result;
  v3 = a2;
  v4 = FIELD_U8(result, 28);
  if ( v4 != a2 )
  {
    if ( (a2 | 2) == 2 && (FIELD_U16(result, 30) & 0x800) != 0 )
      FIELD_U16(result, 30) = FIELD_U16(result, 30) & 0xF7BF | 0x40;
    result = *(_DWORD *)(FIELD_U32(result, 16) + 72);
    if ( result )
      result = sub_6098C368(result, v2, v4, a2);
    v2[28] = v3;
  }
  return result;
}
