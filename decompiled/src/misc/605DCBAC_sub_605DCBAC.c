/* sub_605DCBAC
 * address: 0x605DCBAC   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DCBAC(int a1)
{
  unsigned int v2; // r0
  _BYTE *v3; // r4
  _DWORD *v4; // r0

  FIELD_U32(a1, 6340) = 0;
  FIELD_U32(a1, 6240) &= ~1u;
  FIELD_U8(a1, 538) &= 0xF8u;
  FIELD_U32(a1, 6264) &= ~1u;
  FIELD_U32(a1, 6268) &= ~1u;
  FIELD_U32(a1, 6260) &= ~0x400u;
  v3 = (_BYTE *)(a1 + 6336);
  v2 = FIELD_S8(a1, 6336);
  if ( v2 <= 3 )
  {
    v4 = *(_DWORD **)(PlayerMgr_instance + 4 * v2 + 32);
    if ( v4 )
    {
      Player_ReleaseCarryableEnemy(v4, a1);
      *v3 = -1;
    }
  }
  return sub_605E9D54(dword_60CB1BE4);
}
