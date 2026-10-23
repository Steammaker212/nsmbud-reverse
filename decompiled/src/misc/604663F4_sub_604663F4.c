/* sub_604663F4
 * address: 0x604663F4   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_604663F4(int a1, Vec3 *a2, int a3, int a4, char a5, int a6)
{
  char v6; // r12
  int v10; // r6
  ActorBuildInfo buildInfo; // [sp+4h] [bp-44h] BYREF

  if ( ((unsigned int)&unk_60C9D3F0 & ~(1615225880 << v6) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60C9D3F0) )
  {
    dword_60C9D3F4 = 591;
    dword_60C9D3F8 = 592;
    dword_60C9D3FC = 854;
    dword_60C9D400 = 593;
    dword_60C9D404 = 594;
    dword_60C9D408 = 595;
    dword_60C9D40C = 596;
    dword_60C9D410 = 597;
    dword_60C9D414 = 598;
    dword_60C9D418 = 599;
    dword_60C9D41C = 601;
    _cxa_guard_release((__guard *)&unk_60C9D3F0);
  }
  if ( a4 != -1 )
  {
    v10 = a4;
    if ( a4 > 10 )
      v10 = 0;
    if ( FIELD_U32(dword_60C99DD4, 764) == 1
      && dword_60C9A1E0
      && (unsigned int)a4 <= 0xA
      && ((1 << a4) & 0x512) != 0
      && FIELD_U32(dword_60C9A1E0, 532) == 4 )
    {
      v10 = 6;
    }
    memset(&buildInfo.settings2, 0, 40);
    buildInfo.settings1 = a3;
    if ( a6 )
      buildInfo.parentId = a6;
    buildInfo.profile = Profile__get(*((_DWORD *)&unk_60C9D3F0 + v10 + 1));
    buildInfo.position = *a2;
    buildInfo.field_20 = a5;
    buildInfo.eventId1 = 0;
    buildInfo.eventId2 = 0;
    buildInfo.field_28 = 0;
    ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  }
}
