/* sub_603E56C0
 * address: 0x603E56C0   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E56C0(int a1)
{
  unsigned int v2; // r0
  int result; // r0

  sub_60024240(FIELD_U32(a1, 24));
  v2 = FIELD_U32(a1, 24);
  if ( v2 >= 4 )
    v2 = 0;
  result = *(_DWORD *)(PlayerMgr_instance + 4 * v2 + 32);
  if ( result )
    return sub_607A2F40();
  return result;
}
