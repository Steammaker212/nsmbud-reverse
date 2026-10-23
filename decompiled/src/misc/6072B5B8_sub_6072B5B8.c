/* sub_6072B5B8
 * address: 0x6072B5B8   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6072B5B8(int a1, int a2, int a3)
{
  int v6; // r4
  int v7; // r0
  int v8; // s0
  int v9; // r5
  float v10; // r0
  float v11; // s2
  _BYTE *v12; // r4
  char v13; // r12
  ActorBuildInfo v15; // [sp+4h] [bp-44h] BYREF

  v6 = FIELD_U32(a1, 80);
  memset(&v15.settings2, 0, 40);
  v7 = (v6 << 8) | 1;
  if ( a2 )
    v7 = v6 << 8;
  v15.settings1 = v7;
  v15.profile = Profile__get(0x33Eu);
  v8 = a3;
  v9 = 0;
  v10 = FIELD_F32(a1, 6316);
  v11 = FIELD_F32(a1, 6320);
  v15.position.x = FIELD_F32(a1, 6312);
  v15.position.y = v10;
  v15.position.z = v11 + (float)((float)v8 * -16.0);
  v12 = ActorMgr__create((void *)ActorMgr__instance, &v15, 0);
  if ( ((unsigned int)&dword_60CBD948 & ~(1618130544 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD948) )
  {
    dword_60CBD944 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CBD948);
  }
  if ( v12 )
  {
    v9 = (**(int (__fastcall ***)(_BYTE *, int *))v12)(v12, &dword_60CBD944);
    if ( v9 )
      return v12;
  }
  return (_BYTE *)v9;
}
