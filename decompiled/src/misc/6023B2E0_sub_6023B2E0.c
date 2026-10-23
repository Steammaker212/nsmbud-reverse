/* sub_6023B2E0
 * address: 0x6023B2E0   size: 804   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6023B2E0(int a1)
{
  _BYTE *v2; // r5
  int v3; // r0
  signed int v4; // r1
  _DWORD *v5; // r0
  int v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r0
  unsigned int v9; // r0
  char v10; // r12
  float *v11; // r5
  float v12; // s0
  float v13; // s2
  float v14; // s0
  float v15; // s2
  _DWORD *v16; // r0
  int *v17; // r1
  unsigned int v18; // r2
  unsigned int v19; // r0
  _DWORD *result; // r0
  int v21; // r1
  int v22; // r1
  Vec2 out; // [sp+4h] [bp-1Ch] BYREF
  signed int v24; // [sp+Ch] [bp-14h] BYREF

  ((void (*)(void))loc_6023EF4C)();
  v2 = (_BYTE *)(a1 + 12105);
  if ( !FIELD_U8(a1, 12105) )
    goto LABEL_33;
  v3 = FIELD_U32(a1, 80);
  v4 = -67108864;
  if ( !v3 )
    v4 = 0x4000000;
  v24 = v4;
  if ( sub_6083246C((int *)(a1 + 160), (int *)&unk_60C8DB10 + v3 + 1, &v24) == 1 )
  {
    *v2 = 0;
  }
  else if ( *v2 )
  {
    goto LABEL_26;
  }
  sub_6023D424(4.0);
  v5 = *(_DWORD **)(a1 + 6604);
  v6 = v5[3];
  v7 = v5[2];
  v8 = v5[17];
  if ( v7 > v8 )
    v6 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v6 + 24) = 1056964608;
  if ( !*v2 )
  {
LABEL_33:
    v9 = StageActor__distanceToPlayer((StateActor *)a1, &out);
    if ( v9 != -1 )
    {
      if ( v9 >= 4 )
        v9 = 0;
      v11 = *(float **)(PlayerMgr_instance + 4 * v9 + 48);
      if ( v11 )
      {
        v12 = FIELD_F32(a1, 108);
        v13 = v11[27];
        if ( FIELD_U32(a1, 12088) == 1 )
        {
          if ( (float)(v13 + -64.0) < v12 )
            goto LABEL_26;
          FIELD_U8(a1, 12106) = 0;
          if ( (FIELD_U8(a1, 23) & 0x10) == 0 )
            goto LABEL_17;
LABEL_25:
          FIELD_U32(a1, 12064) = 0;
          (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C8DA58);
          goto LABEL_26;
        }
        v14 = fabsf((float)(v13 - v12) + FIELD_F32(a1, 572));
        v15 = fabsf((float)(v11[28] - FIELD_F32(a1, 112)) + FIELD_F32(a1, 576));
        if ( (float)((float)(v15 * v15) + (float)(v14 * v14)) <= 14400.0 )
        {
          if ( ((unsigned int)&dword_60C7B37C & ~(1612952692 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( (**(int (__fastcall ***)(float *, int *))v11)(v11, &dword_60C7B378) == 1
            && !(*(int (__fastcall **)(float *))(*(_DWORD *)v11 + 1204))(v11) )
          {
            FIELD_U8(a1, 12106) = 0;
            if ( (FIELD_U8(a1, 23) & 0x10) == 0 )
            {
LABEL_17:
              (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C8DA38);
              goto LABEL_26;
            }
            goto LABEL_25;
          }
        }
      }
    }
  }
LABEL_26:
  sub_6023ECEC(a1);
  nullsub_7();
  v16 = *(_DWORD **)(a1 + 6604);
  v17 = (int *)v16[3];
  v18 = v16[2];
  v19 = v16[17];
  if ( v18 > v19 )
    v17 += v19;
  Animation_update(*v17);
  result = (_DWORD *)(a1 + 12068);
  v21 = FIELD_U32(a1, 12068);
  if ( !v21 || (v22 = v21 - 1, (*result = v22) == 0) )
  {
    *result = 24;
    return (_DWORD *)sub_6071689C(TileMgr_instance, 10, 3, 0);
  }
  return result;
}
