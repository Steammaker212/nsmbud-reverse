/* sub_603823D4
 * address: 0x603823D4   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603823D4(int a1, int a2)
{
  int v2; // r4
  float v3; // s0
  _DWORD *v4; // r8
  int v5; // r2
  int v6; // r1
  int v7; // r7
  int v8; // r7
  float v9; // s16
  float v10; // r11
  float v11; // r6
  int v12; // r9
  int v13; // r5
  int v14; // r10
  _BYTE *v15; // r7
  char v16; // r12
  int v17; // r0
  int v18; // r2
  int v19; // r0
  _BYTE *v21; // [sp+1Ch] [bp-7Ch]
  unsigned __int8 *v22; // [sp+2Ch] [bp-6Ch]
  float *v23; // [sp+30h] [bp-68h]
  int v24; // [sp+34h] [bp-64h]
  float v25; // [sp+38h] [bp-60h]
  ActorBuildInfo buildInfo; // [sp+3Ch] [bp-5Ch] BYREF

  v2 = FIELD_U32(a1, 6300);
  if ( v2 )
  {
    v3 = FIELD_F32(a2, 108);
    v4 = *(_DWORD **)(a1 + 6304);
    v5 = FIELD_U32(a1, 6324);
    v6 = (unsigned __int8)(16 * FIELD_U8(a2, 84));
    v7 = v5 << 24;
    if ( FIELD_F32(a1, 108) <= v3 )
      v7 = (v5 << 24) | 1;
    v24 = v7 | v6;
    v21 = (_BYTE *)(a1 + 6368);
    v23 = (float *)(a1 + 6372);
    v22 = (unsigned __int8 *)(a1 + 6389);
    do
    {
      if ( *(_BYTE *)(*v4 + 128) )
      {
        v8 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v4 + 8))(*v4);
        v9 = *v23;
        v10 = *(float *)(*v4 + 76);
        v25 = *(float *)(*v4 + 80);
        v11 = *(float *)(*v4 + 72);
        v12 = *(_DWORD *)(*v4 + 116);
        v13 = *v22;
        memset(&buildInfo.settings2, 0, 40);
        v14 = v8 ^ 1;
        buildInfo.settings1 = v24 | ((v8 ^ 1) << 8) | (v13 << 9) | (v12 << 16) | ((v9 > 0.0) << 20) | 0x2000;
        buildInfo.profile = Profile__get(0x1FAu);
        buildInfo.position.x = v11;
        buildInfo.position.y = v10;
        buildInfo.position.z = v25;
        v15 = ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
        v17 = *v4;
        *((_DWORD *)v15 + 39) = *(_DWORD *)(*v4 + 84);
        *((_DWORD *)v15 + 40) = FIELD_U32(v17, 88);
        *((_DWORD *)v15 + 41) = FIELD_U32(v17, 92);
        v18 = *(_DWORD *)(*v4 + 100);
        v19 = *(_DWORD *)(*v4 + 104);
        *((_DWORD *)v15 + 36) = *(_DWORD *)(*v4 + 96);
        *((_DWORD *)v15 + 37) = v18;
        *((_DWORD *)v15 + 38) = v19;
        if ( !v14 )
        {
          *v21 = 0;
          if ( ((unsigned int)&dword_60C96AA8 & ~(1614292440 << v16) & 1) == 0 && _cxa_guard_acquire(&dword_60C96AA8) )
          {
            dword_60C96AA4 = (int)&off_60BC04AC;
            _cxa_guard_release(&dword_60C96AA8);
          }
          if ( v15 && (**(int (__fastcall ***)(_BYTE *, int *))v15)(v15, &dword_60C96AA4) == 1 )
          {
            *((_DWORD *)v15 + 1580) = 0;
            *((_DWORD *)v15 + 1581) = 1111490560;
          }
        }
      }
      --v2;
      ++v4;
    }
    while ( v2 );
  }
  return 1;
}
