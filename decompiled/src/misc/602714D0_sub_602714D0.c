/* sub_602714D0
 * address: 0x602714D0   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602714D0(int a1)
{
  float v2; // s0

  StateMgr__execute((StateMgr *)(a1 + 6084));
  houdai_slope_gun_ref(a1);
  if ( !FIELD_U32(a1, 7476) && (FIELD_U8(a1, 20) & 0x20) != 0 )
  {
    CollisionActor__handleGravity((CollisionActor *)a1);
    v2 = FIELD_F32(a1, 124) + FIELD_F32(a1, 112);
    FIELD_F32(a1, 112) = v2;
    CollisionMgr_process((_BYTE *)(a1 + 648), v2);
    if ( FIELD_U8(dword_60CC6D8C, 17) )
    {
      if ( !FIELD_U8(a1, 7504) )
      {
        if ( (FIELD_U32(a1, 2872) & 0x10401) == 0x401 )
          FIELD_U8(a1, 19) = 1;
        if ( (float)(FIELD_F32(dword_60CC6484, 132) + -32.0) >= FIELD_F32(a1, 112) )
          FIELD_U8(a1, 19) = 1;
      }
    }
  }
  ShapedCollider_execute((ColliderBase *)(a1 + 6112));
  FIELD_U32(a1, 7012) = FIELD_U32(a1, 7496);
  ShapedCollider_execute((ColliderBase *)(a1 + 6768));
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
