/* sub_602FE478
 * address: 0x602FE478   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FE478(int a1)
{
  int v1; // r8
  unsigned __int8 *v2; // r7
  int result; // r0

  v1 = FIELD_U32(a1, 13984);
  v2 = (unsigned __int8 *)&unk_60AFEFFC + 12 * v1;
  sub_6071689C(TileMgr_instance, 1, *v2, 0);
  result = sub_6071689C(TileMgr_instance, 2, v2[4], 0);
  if ( v1 )
    return sub_6071689C(TileMgr_instance, 3, (unsigned __int8)*((_DWORD *)v2 + 2), 0);
  return result;
}
