/* sub_603E9B9C
 * address: 0x603E9B9C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E9B9C(int a1)
{
  unsigned int v2; // r0

  v2 = FIELD_U32(a1, 36);
  if ( v2 >= 4 )
    v2 = 0;
  sub_60768F98(*(_DWORD *)(PlayerMgr_instance + 4 * v2 + 32), 2);
  FIELD_U32(a1, 32) = 80;
  return 80;
}
