/* sub_603E814C
 * address: 0x603E814C   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603E814C(int a1, int a2)
{
  float v2; // s16
  float v3; // s18
  int v5; // r6
  _BYTE *v6; // r5
  char v7; // r12
  ActorBuildInfo v8[2]; // [sp+0h] [bp-58h] BYREF

  v2 = FIELD_F32(a2, 108);
  v3 = FIELD_F32(a2, 112);
  memset(v8, 0, 44);
  v8[0].profile = Profile__get(0x1CCu);
  v8[0].position.x = (float)(v2 + 32.0) + 8.0;
  v5 = 0;
  v8[0].position.y = v3 + 8.0;
  v8[0].position.z = 1500.0;
  v6 = ActorMgr__create((void *)ActorMgr__instance, v8, 0);
  if ( ((unsigned int)&dword_60C99880 & ~(1614709216 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C99880) )
  {
    dword_60C9987C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C99880);
  }
  if ( v6 )
  {
    v5 = (**(int (__fastcall ***)(_BYTE *, int *))v6)(v6, &dword_60C9987C);
    if ( v5 )
      v5 = (int)v6;
  }
  FIELD_U32(a1, 124) = v5;
}
