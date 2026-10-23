/* sub_600B9564
 * address: 0x600B9564   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600B9564(int a1)
{
  float v2; // s4
  float v3; // s4
  Vec3 a2; // [sp+14h] [bp-14h] BYREF

  v2 = FIELD_F32(a1, 108);
  if ( v2 < (float)(FIELD_F32(dword_60CC6484, 112) + -86.0)
    || (float)(FIELD_F32(dword_60CC6484, 120) + 86.0) < v2
    || (v3 = FIELD_F32(a1, 112), v3 < (float)(FIELD_F32(dword_60CC6484, 132) + -86.0))
    || (float)((float)(FIELD_F32(dword_60CC6484, 124) + 86.0) + -10.0) < v3 )
  {
    FIELD_U8(a1, 19) = 1;
  }
  else
  {
    StateMgr__execute((StateMgr *)(a1 + 6084));
    CollisionMgr_process((_BYTE *)(a1 + 648));
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 256))(a1);
    a2.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    a2.y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    a2.z = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
    LightSource_update2((LightSource *)(a1 + 6112), &a2, 0, 0, 0, 0, 0, 0);
  }
  return 1;
}
