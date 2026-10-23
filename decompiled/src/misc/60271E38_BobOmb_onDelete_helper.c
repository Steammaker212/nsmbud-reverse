/* BobOmb_onDelete_helper
 * address: 0x60271E38   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BobOmb_onDelete_helper(int a1)
{
  unsigned int v2; // r0
  _BYTE *v3; // r5
  _DWORD *v4; // r0

  v3 = (_BYTE *)(a1 + 6340);
  v2 = FIELD_S8(a1, 6340);
  if ( v2 <= 3 )
  {
    v4 = *(_DWORD **)(PlayerMgr_instance + 4 * v2 + 32);
    if ( v4 )
      Player_ReleaseCarryableEnemy(v4, a1);
  }
  *v3 = -1;
  FIELD_U32(a1, 6344) = 0;
  return 6344;
}
