/* sub_603E4B28
 * address: 0x603E4B28   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603E4B28(int a1)
{
  unsigned int v1; // r0
  int v2; // r0

  v1 = FIELD_U32(a1, 24);
  if ( v1 >= 4 )
    v1 = 0;
  v2 = *(_DWORD *)(PlayerMgr_instance + 4 * v1 + 32);
  return v2 && FIELD_U8(v2, 12012) != 0;
}
