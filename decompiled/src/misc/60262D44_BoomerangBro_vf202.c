/* BoomerangBro_vf202
 * address: 0x60262D44   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall BoomerangBro_vf202(int a1)
{
  unsigned int v1; // r1
  int v2; // r4
  char v3; // r12

  v1 = FIELD_U32(a1, 6608);
  if ( v1 )
  {
    v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v1);
    if ( ((unsigned int)&dword_60C87668 & ~(1613114756 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C87668) )
    {
      dword_60C87664 = (int)&off_60BD20C4;
      _cxa_guard_release(&dword_60C87668);
    }
    if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C87664) == 1 && !FIELD_U8(v2, 6476) )
      FIELD_U8(v2, 19) = 1;
  }
}
