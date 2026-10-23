/* sub_60865468
 * address: 0x60865468   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60865468(int a1, int a2, int a3)
{
  if ( sub_6085406C(a2, FIELD_U32(a3, 24), FIELD_U8(a3, 51)) == 1 )
    sub_6086A1FC(a3, a1);
  sub_60854050(a2);
  sub_60869BB8(a3, a1, a2);
  return sub_60835624(a1, 3, 1, (_DWORD *)(FIELD_U32(a2, 184) + 520), 6, 0);
}
