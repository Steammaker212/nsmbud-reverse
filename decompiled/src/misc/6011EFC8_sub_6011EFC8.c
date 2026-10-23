/* sub_6011EFC8
 * address: 0x6011EFC8   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6011EFC8(float *a1, float *a2)
{
  int *v4; // r6
  int v5; // r7
  char v6; // r12
  float v7; // s16
  int v8; // r4
  int v9; // r0
  int v10; // r0
  bool v11; // zf
  int v12; // r0
  int v13; // r0
  bool v14; // zf
  float v15; // r4
  float v16; // r7
  float v17; // r9
  float v18; // s18
  char v19; // r12

  v4 = (int *)sub_60008598(ActorMgr__instance, 823, *(_DWORD *)(ActorMgr__instance + 27172));
  v5 = *v4;
  if ( ((unsigned int)dword_60C86DB8 & ~(1611788316 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60C86DB8) )
  {
    dword_60C86DB4 = (int)&off_60BC00BC;
    _cxa_guard_release(dword_60C86DB8);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C86DB4) == 1 )
  {
    v7 = 10000000.0;
    do
    {
      v8 = FIELD_U8(v5, 652);
      v9 = (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 628))(a1);
      v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 724))(v9);
      v11 = v8 == 0;
      if ( !v8 )
        v11 = (v10 ^ 1) == 1;
      if ( v11 )
        goto LABEL_14;
      v12 = (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 628))(a1);
      v13 = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 724))(v12);
      v14 = v8 == 1;
      if ( v8 == 1 )
        v14 = v13 == 1;
      if ( v14 )
      {
LABEL_14:
        v15 = FIELD_F32(v5, 108);
        v16 = FIELD_F32(v5, 112);
        v17 = a1[29];
        v18 = (float)((float)((float)(v16 - a1[28]) * (float)(v16 - a1[28]))
                    + (float)((float)(v15 - a1[27]) * (float)(v15 - a1[27])))
            + (float)((float)(v17 - v17) * (float)(v17 - v17));
        if ( v7 > sqrtf(v18) )
        {
          v7 = sqrtf(v18);
          *a2 = v15;
          a2[1] = v16;
          a2[2] = v17;
        }
      }
      v4 = (int *)sub_60008598(ActorMgr__instance, 823, (int)(v4 + 1));
      v5 = *v4;
      if ( ((unsigned int)dword_60C86DB8 & ~(1611788772 << v19) & 1) == 0 && _cxa_guard_acquire(dword_60C86DB8) )
      {
        dword_60C86DB4 = (int)&off_60BC00BC;
        _cxa_guard_release(dword_60C86DB8);
      }
    }
    while ( v5 && ((**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C86DB4) ^ 1) != 1 );
  }
  else
  {
    *a2 = a1[2256];
    a2[1] = a1[2257];
    a2[2] = a1[2258];
  }
}
