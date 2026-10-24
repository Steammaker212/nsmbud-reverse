/* sub_6046AB90
 * address: 0x6046AB90   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046AB90(Actor *a1)
{
  int v2; // r1
  int result; // r0
  int v4; // [sp+4h] [bp-Ch] BYREF

  v4 = 2;
  v2 = sub_60463998(a1, &v4, 9, 1);
  result = 0;
  if ( v2 == 1 )
    return SE_PLY_GET_ITEM_AGAIN_ref((int)a1, v4, FIELD_U32(a1 + (77) * 80, 0x30));
  return result;
}
