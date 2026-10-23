/* sub_605839E8
 * address: 0x605839E8   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605839E8(int a1, Vec3 *a2, int a3, int a4, char a5, int a6)
{
  int v7; // r9
  _BYTE *v8; // r10
  char v9; // r12
  int v10; // [sp+18h] [bp-58h]
  ActorBuildInfo buildInfo; // [sp+20h] [bp-50h] BYREF

  if ( a3 >= 1 )
  {
    v7 = 0;
    v10 = (a6 << 8) | (16 * (a4 == 3));
    do
    {
      memset(&buildInfo.settings2, 0, 40);
      buildInfo.settings1 = v10 | v7;
      buildInfo.profile = Profile__get(0x194u);
      buildInfo.position = *a2;
      buildInfo.field_20 = a5;
      buildInfo.eventId1 = 0;
      buildInfo.eventId2 = 0;
      buildInfo.field_28 = 0;
      v8 = ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
      if ( ((unsigned int)&dword_60C7B364 & ~(1616394996 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v8 )
        (**(void (__fastcall ***)(_BYTE *, int *))v8)(v8, &StageActor_RTTI);
      ++v7;
    }
    while ( a3 != v7 );
  }
}
