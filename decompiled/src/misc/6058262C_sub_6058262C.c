/* sub_6058262C
 * address: 0x6058262C   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058262C(int a1, float *a2, int a3, int a4, int a5)
{
  float v7; // r7
  float v8; // r4
  _BYTE *v9; // r5
  char v10; // r12
  int v11; // r0
  ActorBuildInfo v12; // [sp+4h] [bp-44h] BYREF

  if ( !a3 )
  {
    TileMgr_setTile(
      TileMgr_instance,
      (unsigned int)*a2,
      (unsigned int)(float)-a2[1],
      **(unsigned __int8 **)(a5 + 2212),
      0);
    v7 = *a2;
    v8 = a2[1];
    memset(&v12.settings2, 0, 40);
    v12.settings1 = 128;
    v12.profile = Profile__get(0x19Bu);
    v12.position.x = v7;
    v12.position.y = v8;
    v12.position.z = 0.0;
    v12.field_20 = **(_BYTE **)(a5 + 2212);
    v12.eventId1 = 0;
    v12.eventId2 = 0;
    v12.field_28 = 0;
    v9 = ActorMgr__create((void *)ActorMgr__instance, &v12, 1);
    if ( v9 )
    {
      if ( ((unsigned int)&dword_60C88A58 & ~(1616389912 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A58) )
      {
        dword_60C88A54 = (int)&off_60BD48EC;
        _cxa_guard_release(&dword_60C88A58);
      }
      if ( (**(int (__fastcall ***)(_BYTE *, int *))v9)(v9, &dword_60C88A54) == 1 )
      {
        v11 = FIELD_U32(a5, 2196);
        if ( v11 )
          sub_60589E88(v9, FIELD_U32(v11, 8), a5);
      }
    }
  }
  return 0;
}
