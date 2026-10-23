/* sub_6066C9F8
 * address: 0x6066C9F8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6066C9F8(int a1)
{
  unsigned __int8 *v2; // r5
  int v3; // r0
  int result; // r0
  signed int v5[3]; // [sp+4h] [bp-2Ch] BYREF
  _BYTE v6[12]; // [sp+10h] [bp-20h] BYREF
  signed int v7; // [sp+1Ch] [bp-14h] BYREF

  v2 = (unsigned __int8 *)(a1 + 6104);
  v3 = sub_606D4384(v5, FIELD_U8(a1, 6104));
  result = sub_606D4838(v3, v5[0]);
  if ( !result )
  {
    sub_606D4384(&v7, *v2);
    v5[1] = 0;
    v5[2] = 0;
    return sub_606D465C(v6, a1 + 6112);
  }
  return result;
}
