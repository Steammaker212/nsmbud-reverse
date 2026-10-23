/* sub_60088094
 * address: 0x60088094   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60088094(int a1)
{
  int v2; // r5
  char v3; // r12
  float v4; // s2
  signed int v5; // r2
  int v6; // r1

  v2 = *(_DWORD *)sub_60008598(ActorMgr__instance, 374, *(_DWORD *)(ActorMgr__instance + 27172));
  if ( ((unsigned int)&dword_60C81738 & ~(1611170008 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
  {
    dword_60C81734 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C81738);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C81734) == 1 )
  {
    v4 = FIELD_F32(v2, 7384) - FIELD_F32(a1, 7132);
    v5 = sub_6000F7B8(FIELD_F32(v2, 7388) - FIELD_F32(a1, 7136), sqrtf((float)(v4 * v4) + 0.0))
       - FIELD_U32(a1, 164);
    v6 = -536870912;
    FIELD_U32(a1, 7128) = v5;
    if ( v5 < -536870912 || (v6 = 357913941, v5 > 357913941) )
      FIELD_U32(a1, 7128) = v6;
    sub_600CE584(a1);
    CollisionMgr_process((_BYTE *)(a1 + 648));
  }
}
