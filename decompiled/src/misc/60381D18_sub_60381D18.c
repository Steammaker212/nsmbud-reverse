/* sub_60381D18
 * address: 0x60381D18   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60381D18(int a1, int a2, unsigned int a3)
{
  unsigned int v5; // r7
  float *v6; // r0
  float v7; // r11
  int v8; // r10
  float v9; // s18
  char v10; // r8
  int v11; // r6
  float v12; // s16
  int v13; // r0
  int v14; // r9
  int v15; // r2
  _BYTE *v16; // r6
  char v17; // r12
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  int v20; // r1
  int v21; // r2
  int v23; // [sp+0h] [bp-70h]
  float v24; // [sp+4h] [bp-6Ch]
  float v25; // [sp+8h] [bp-68h]
  ActorBuildInfo buildInfo; // [sp+Ch] [bp-64h] BYREF

  v5 = FIELD_U32(a1, 6300);
  v23 = FIELD_U32(a1, 6304);
  if ( v5 >= a3 )
    v5 = a3;
  v6 = *(float **)(FIELD_U32(a1, 6304) + 4 * v5);
  v7 = v6[18];
  v25 = v6[19];
  v24 = v6[20];
  v8 = FIELD_U32(a1, 6324);
  v9 = FIELD_F32(a2, 108);
  v10 = FIELD_U8(a2, 84);
  v11 = FIELD_U8(a1, 6389);
  v12 = FIELD_F32(a1, 6372);
  memset(&buildInfo.settings2, 0, 40);
  v13 = a3;
  v14 = 0;
  if ( a3 )
    v13 = 1;
  v15 = v13 << 8;
  if ( v7 <= v9 )
    v15 = (v13 << 8) | 1;
  buildInfo.settings1 = v15 | (v11 << 9) | ((v12 > 0.0) << 20) | (v8 << 24) | (unsigned __int8)(16 * v10);
  buildInfo.profile = Profile__get(0x1FAu);
  buildInfo.position.x = v7;
  buildInfo.position.y = v25;
  buildInfo.position.z = v24;
  v16 = ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  if ( v16 )
  {
    v18 = *(_DWORD **)(v23 + 4 * v5);
    *((_DWORD *)v16 + 39) = v18[21];
    *((_DWORD *)v16 + 40) = v18[22];
    *((_DWORD *)v16 + 41) = v18[23];
    v19 = *(_DWORD **)(v23 + 4 * v5);
    v20 = v19[24];
    v21 = v19[25];
    *((_DWORD *)v16 + 38) = v19[26];
    *((_DWORD *)v16 + 37) = v21;
    *((_DWORD *)v16 + 36) = v20;
    if ( !a3 )
    {
      FIELD_U8(a1, 6368) = 0;
      if ( ((unsigned int)&dword_60C96AA8 & ~(1614290584 << v17) & 1) == 0 && _cxa_guard_acquire(&dword_60C96AA8) )
      {
        dword_60C96AA4 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60C96AA8);
      }
      if ( (**(int (__fastcall ***)(_BYTE *, int *))v16)(v16, &dword_60C96AA4) == 1 )
      {
        *((_DWORD *)v16 + 1580) = 0;
        *((_DWORD *)v16 + 1581) = 1111490560;
      }
    }
    return *((_DWORD *)v16 + 2);
  }
  return v14;
}
