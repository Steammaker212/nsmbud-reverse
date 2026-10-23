/* sub_603E801C
 * address: 0x603E801C   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603E801C(int a1, int a2)
{
  float v3; // s16
  float v4; // r6
  int v5; // r7
  int v6; // r6
  _BYTE *v7; // r5
  char v8; // r12
  ActorBuildInfo v9; // [sp+4h] [bp-4Ch] BYREF

  v3 = FIELD_F32(a2, 108);
  v4 = FIELD_F32(a2, 112);
  v5 = FIELD_U32(a1, 24);
  memset(&v9.settings2, 0, 40);
  v9.settings1 = v5 & 0x1F;
  v9.profile = Profile__get(0x1CEu);
  v9.position.x = v3 + 80.0;
  v9.position.y = v4;
  v6 = 0;
  v9.position.z = 1500.0;
  v7 = ActorMgr__create((void *)ActorMgr__instance, &v9, 0);
  if ( ((unsigned int)&dword_60C96560 & ~(1614708912 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C96560) )
  {
    dword_60C9655C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C96560);
  }
  if ( v7 )
  {
    v6 = (**(int (__fastcall ***)(_BYTE *, int *))v7)(v7, &dword_60C9655C);
    if ( v6 )
      v6 = (int)v7;
  }
  FIELD_U32(a1, 116) = v6;
}
