/* sub_600864FC
 * address: 0x600864FC   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600864FC(int a1)
{
  unsigned int v2; // r0
  _DWORD *v3; // r5
  _DWORD *v4; // r0
  _BYTE *v5; // r4
  int result; // r0

  v3 = (_DWORD *)(a1 + 7692);
  v2 = FIELD_U32(a1, 7692);
  if ( v2 <= 3 )
  {
    v4 = *(_DWORD **)(PlayerMgr_instance + 4 * v2 + 32);
    if ( v4 )
      Player_ReleaseCarryableEnemy(v4, a1);
  }
  *v3 = -1;
  FIELD_U32(a1, 116) = -1018691584;
  FIELD_U32(a1, 328) = 0;
  FIELD_U8(a1, 2872) = 0;
  v5 = (_BYTE *)(a1 + 2872);
  v5[4] = 0;
  v5 += 4;
  v5[3] = 0;
  v5[2] = 0;
  v5[1] = 0;
  *(v5 - 1) = 0;
  *(v5 - 2) = 0;
  *(v5 - 3) = 0;
  result = *(v5 - 2338) & 0xF8;
  *(v5 - 2338) = result;
  return result;
}
