/* sub_607E03C8
 * address: 0x607E03C8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607E03C8(int a1, _DWORD *a2)
{
  int v4; // r0
  unsigned int result; // r0
  __int16 v6; // [sp+0h] [bp-78h] BYREF

  v4 = sub_6090B350(&v6);
  v6 = 0;
  sub_6090B4B0(v4, a2[10]);
  result = FIELD_U32(a1, 4244);
  if ( result <= 4 )
    return sub_60516CC8(a1 + 568, a2);
  return result;
}
