/* sub_605FF28C
 * address: 0x605FF28C   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605FF28C(int a1)
{
  int v2; // r5
  float v3; // s0
  float v4; // s0
  ShapedColliderInfo v6; // [sp+0h] [bp-38h] BYREF

  v2 = sub_605FE180(FIELD_S8(a1, 6878));
  if ( v2 )
  {
    v3 = FIELD_F32(a1, 148);
    memset(&v6, 0, 16);
    v6.topLeft.x = -8.0;
    v6.topLeft.y = v3 * 16.0;
    v6.bottomRight.x = 8.0;
    v6.bottomRight.y = v3 * -16.0;
    v6.rotation = FIELD_U32(a1, 164);
    ShapedCollider_init((ShapedCollider *)(a1 + 6168), (StageActor *)a1, &v6);
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6168));
    FIELD_U32(a1, 6824) = FIELD_U32(v2, 8);
    FIELD_F32(a1, 6868) = fabsf(FIELD_F32(a1, 6832) - FIELD_F32(a1, 6836))
                          / (float)FIELD_U16(v2, 6116);
    v4 = FIELD_F32(v2, 6104);
    FIELD_F32(a1, 6872) = v4;
    FIELD_F32(a1, 6904) = v4 / (float)FIELD_U16(v2, 6116);
    sub_605FF3DC(a1);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB271C);
    ((void (__fastcall *)(int))loc_605FF658)(a1);
  }
  return v2;
}
