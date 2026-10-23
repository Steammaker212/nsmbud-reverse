/* sub_605D0140
 * address: 0x605D0140   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D0140(_DWORD *a1)
{
  int result; // r0
  int v3; // r1

  if ( a1[1822] == 1 )
    return sub_605BA078(dword_60CB061C, (int)(a1 + 1745), 2, FIELD_U8(LevelInfo_instance, 18));
  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 336))(a1);
  v3 = a1[1827];
  if ( v3 )
    return sub_6058568C(dword_60CAF15C, v3, a1[1829]);
  return result;
}
