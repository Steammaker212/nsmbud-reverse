/* sub_600E8678
 * address: 0x600E8678   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E8678(int a1)
{
  int v2; // r1
  int v3; // r9
  float v4; // s16
  float v5; // r11
  _BYTE *v6; // r5
  char v7; // r12
  float v9; // [sp+18h] [bp-68h]
  int v10; // [sp+1Ch] [bp-64h]
  int v11; // [sp+20h] [bp-60h]
  ActorBuildInfo buildInfo; // [sp+24h] [bp-5Ch] BYREF

  v2 = 3;
  v3 = 0;
  if ( FIELD_U8(a1, 8132) )
    v2 = 2;
  v4 = FIELD_F32(a1, 116) + 300.0;
  v11 = v2;
  v10 = FIELD_U32(a1, 7124) | 0x300;
  v9 = FIELD_F32(a1, 112);
  v5 = FIELD_F32(a1, 108);
  do
  {
    memset(&buildInfo.settings2, 0, 40);
    buildInfo.settings1 = v10;
    buildInfo.parentId = FIELD_U32(a1, 8);
    buildInfo.profile = Profile__get(0x2B7u);
    buildInfo.position.x = v5;
    buildInfo.position.y = v9;
    buildInfo.position.z = v4;
    v6 = ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
    if ( ((unsigned int)dword_60C81F18 & ~(1611564936 << v7) & 1) == 0 && _cxa_guard_acquire(dword_60C81F18) )
    {
      dword_60C81F14 = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C81F18);
    }
    if ( v6 && (**(int (__fastcall ***)(_BYTE *, int *))v6)(v6, &dword_60C81F14) == 1 )
      *((_DWORD *)v6 + 1613) = v3;
    ++v3;
  }
  while ( v3 < v11 );
  return 0;
}
