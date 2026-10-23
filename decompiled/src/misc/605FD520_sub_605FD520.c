/* sub_605FD520
 * address: 0x605FD520   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605FD520(int a1)
{
  _BYTE *v2; // r5
  int v3; // r0
  _DWORD *v5; // r5
  unsigned int v6; // r2

  v2 = (_BYTE *)(a1 + 6870);
  if ( FIELD_U8(a1, 6870) || (StageActor__cullCheck((StageActor *)a1, 0), !v3) )
  {
    StateMgr__execute((StateMgr *)(a1 + 6084));
    if ( FIELD_U8(a1, 6868) )
    {
      FIELD_U8(a1, 19) = 1;
      return 1;
    }
    ((void (__fastcall *)(int))loc_605FD28C)(a1);
    if ( !*v2 || FIELD_U32(a1, 6164) )
    {
      if ( FIELD_U32(a1, 164) )
      {
        v5 = (_DWORD *)(a1 + 6872);
      }
      else
      {
        v5 = (_DWORD *)(a1 + 6872);
        v6 = FIELD_U32(a1, 6304) & 0xFFFFFFFC;
        if ( FIELD_F32(a1, 144) >= FIELD_F32(a1, 6872) )
          v6 = FIELD_U32(a1, 6304) | 3;
        FIELD_U32(a1, 6304) = v6;
      }
      sub_605FD1C0(a1);
      ShapedCollider_execute((ColliderBase *)(a1 + 6168));
      *v5 = FIELD_U32(a1, 144);
    }
  }
  return 1;
}
