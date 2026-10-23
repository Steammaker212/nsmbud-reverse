/* sub_6008CF84
 * address: 0x6008CF84   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008CF84(int a1)
{
  int v2; // r5
  char v3; // r12
  int v4; // r0
  float v5; // s2
  int v6; // r0
  int v7; // r1
  int result; // r0

  v2 = *(_DWORD *)sub_60008598(ActorMgr__instance, 374, FIELD_U32(ActorMgr__instance, 27172));
  if ( ((unsigned int)&dword_60C81738 & ~(1611190212 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
  {
    dword_60C81734 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C81738);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C81734) == 1 )
    FIELD_U32(a1, 108) = FIELD_U32(v2, 108);
  v4 = dword_60CC6484;
  FIELD_F32(a1, 15296) = FIELD_F32(dword_60CC6484, 132) + 192.0;
  v5 = FIELD_F32(v4, 132);
  v6 = FIELD_U32(a1, 108);
  FIELD_F32(a1, 112) = v5 + -64.0;
  v7 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 584) = v6;
  FIELD_F32(a1, 588) = v5 + -64.0;
  FIELD_U32(a1, 592) = v7;
  FIELD_U32(a1, 608) = v6;
  FIELD_F32(a1, 612) = v5 + -64.0;
  FIELD_U32(a1, 616) = v7;
  result = dword_60C82340;
  FIELD_U32(a1, 9356) = dword_60C82340;
  return result;
}
