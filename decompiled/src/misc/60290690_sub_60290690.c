/* sub_60290690
 * address: 0x60290690   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60290690(_DWORD *a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r9
  int v5; // r10
  int v6; // r7
  _BYTE *result; // r0
  char v8; // r12
  _BYTE *v9; // r5
  ActorBuildInfo v10; // [sp+4h] [bp-6Ch] BYREF
  _DWORD v11[16]; // [sp+30h] [bp-40h] BYREF

  v11[0] = -536870912;
  v11[1] = -1610612736;
  v11[2] = 0x20000000;
  v11[3] = 1610612736;
  v11[4] = -238609294;
  v11[5] = -1908874354;
  v11[6] = 238609294;
  v11[7] = 1908874353;
  v2 = a1[1878];
  v3 = a1[20];
  v4 = a1[41];
  v5 = v11[2 * v2 + v3];
  v6 = a1[1667];
  memset(&v10.settings2, 0, 40);
  v10.settings1 = (v3 << 8) | (16 * v2) | v6;
  v10.profile = Profile__get(0x1DBu);
  v10.position = *(Vec3 *)((_BYTE *)a1 + 527);
  v10.field_1C = v4 + v5;
  v10.field_20 = 0;
  result = ActorMgr__create((void *)ActorMgr__instance, &v10, 0);
  v9 = result;
  if ( result )
  {
    if ( ((unsigned int)&dword_60C7B364 & ~(1613301676 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( (**(int (__fastcall ***)(_BYTE *, int *))v9)(v9, &StageActor_RTTI) == 1 )
      *((_DWORD *)v9 + 41) = a1[41];
    result = (_BYTE *)a1[2];
    *((_DWORD *)v9 + 1685) = result;
  }
  return result;
}
