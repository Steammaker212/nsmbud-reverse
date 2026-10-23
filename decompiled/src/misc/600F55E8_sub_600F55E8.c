/* sub_600F55E8
 * address: 0x600F55E8   size: 620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F55E8(int a1)
{
  float v2; // s6
  _BYTE *v3; // r5
  char v4; // r12
  int v5; // r11
  int v6; // r9
  int v7; // r6
  _DWORD *v8; // r4
  int settings1; // r0
  _BYTE *v10; // r5
  char v11; // r12
  int v12; // r0
  ActorBuildInfo buildInfo; // [sp+18h] [bp-68h] BYREF

  memset(&buildInfo, 0, sizeof(buildInfo));
  buildInfo.profile = Profile__get(0x2BBu);
  buildInfo.position.x = FIELD_F32(a1, 108);
  v2 = FIELD_F32(a1, 116);
  buildInfo.position.y = (float)(FIELD_F32(dword_60CC6484, 124) - FIELD_F32(dword_60CC6484, 108)) + -28.0;
  buildInfo.position.z = v2 + 128.0;
  v3 = ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  if ( ((unsigned int)&dword_60C856D0 & ~(1611617928 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C856D0) )
  {
    dword_60C856CC = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C856D0);
  }
  if ( v3 && (**(int (__fastcall ***)(_BYTE *, int *))v3)(v3, &dword_60C856CC) )
  {
    v5 = 0;
    v6 = 3;
    v7 = 0;
    FIELD_U32(a1, 6300) = v3;
    v8 = (_DWORD *)(a1 + 6300);
    *((_DWORD *)v3 + 1578) = 4;
    settings1 = 1;
    buildInfo.settings1 = 1;
    while ( 1 )
    {
      buildInfo.settings1 = settings1 + 16;
      buildInfo.position.y = buildInfo.position.y + -28.0;
      buildInfo.position.z = buildInfo.position.z + -32.0;
      v10 = ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
      if ( ((unsigned int)&dword_60C856D0 & ~(1611618232 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C856D0) )
      {
        dword_60C856CC = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60C856D0);
      }
      v12 = 0;
      if ( v10 )
      {
        v12 = (**(int (__fastcall ***)(_BYTE *, int *))v10)(v10, &dword_60C856CC);
        if ( v12 )
          v12 = (int)v10;
      }
      v8[v5 + 1] = v12;
      if ( !*v8 )
        break;
      FIELD_U32(v12, 6312) = v6;
      if ( v5 + 2 > 4 )
        return 1;
      settings1 = buildInfo.settings1;
      --v6;
      ++v5;
    }
  }
  else
  {
    v7 = 0;
    FIELD_U32(a1, 6300) = 0;
  }
  return v7;
}
