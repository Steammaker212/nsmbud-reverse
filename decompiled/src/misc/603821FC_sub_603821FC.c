/* sub_603821FC
 * address: 0x603821FC   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_603821FC(int a1, int a2, unsigned int a3)
{
  float v5; // s16
  char v6; // r8
  unsigned int v7; // r2
  int v8; // r0
  float *v9; // r0
  float v10; // r7
  float v11; // r10
  float v12; // r9
  int v13; // r11
  int v14; // r6
  float v15; // s18
  int v16; // r0
  int v17; // r2
  _BYTE *v18; // r6
  char v19; // r12
  ActorBuildInfo buildInfo; // [sp+4h] [bp-64h] BYREF

  v5 = FIELD_F32(a2, 108);
  v6 = FIELD_U8(a2, 84);
  v7 = FIELD_U32(a1, 6300);
  v8 = FIELD_U32(a1, 6304);
  if ( v7 >= a3 )
    v7 = a3;
  v9 = *(float **)(v8 + 4 * v7);
  v10 = v9[18];
  v11 = v9[19];
  v12 = v9[20];
  v13 = FIELD_U32(a1, 6324);
  v14 = FIELD_U8(a1, 6389);
  v15 = FIELD_F32(a1, 6372);
  memset(&buildInfo.settings2, 0, 40);
  v16 = a3;
  if ( a3 )
    v16 = 1;
  v17 = v16 << 8;
  if ( v10 <= v5 )
    v17 = (v16 << 8) | 1;
  buildInfo.settings1 = v17 | (v14 << 9) | ((v15 > 0.0) << 20) | (v13 << 24) | (unsigned __int8)(16 * v6) | 0x1000;
  buildInfo.profile = Profile__get(0x1FAu);
  buildInfo.position.x = v10;
  buildInfo.position.y = v11;
  buildInfo.position.z = v12;
  v18 = ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  if ( v18 && !a3 )
  {
    FIELD_U8(a1, 6368) = 0;
    if ( ((unsigned int)&dword_60C96AA8 & ~(1614291752 << v19) & 1) == 0 && _cxa_guard_acquire(&dword_60C96AA8) )
    {
      dword_60C96AA4 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C96AA8);
    }
    if ( (**(int (__fastcall ***)(_BYTE *, int *))v18)(v18, &dword_60C96AA4) == 1 )
    {
      *((_DWORD *)v18 + 1580) = 0;
      *((_DWORD *)v18 + 1581) = 1111490560;
    }
  }
  return v18;
}
