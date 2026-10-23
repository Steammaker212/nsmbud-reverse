/* sub_605E8AB0
 * address: 0x605E8AB0   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_605E8AB0(int a1, Vec3 *a2, int a3, char a4, int a5, int a6)
{
  char v6; // r12
  ActorBuildInfo v18; // [sp+4h] [bp-4Ch] BYREF

  if ( ((unsigned int)&unk_60CB1C88 & ~(1616808672 << v6) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60CB1C88) )
  {
    dword_60CB1C8C = 447;
    dword_60CB1C90 = 448;
    dword_60CB1C94 = 449;
    _cxa_guard_release((__guard *)&unk_60CB1C88);
  }
  memset(&v18.settings2, 0, 40);
  v18.profile = Profile__get(*((_DWORD *)&unk_60CB1C88 + a1 + 1));
  _R1 = a3 << 20;
  __asm { UXTB16          R1, R1 }
  v18.position = *a2;
  v18.settings1 = _R1 & 0xFFF0FFFF | ((a4 & 0xF) << 16) | (a5 << 24) & 0xF000000 | (a6 << 28);
  return ActorMgr__create((void *)ActorMgr__instance, &v18, 0);
}
