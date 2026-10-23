/* sub_603F5BC4
 * address: 0x603F5BC4   size: 1124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F5BC4(int a1, float *a2, float *a3, float *a4, float *a5)
{
  int *v8; // r7
  int v9; // r6
  char v10; // r12
  int v11; // r5
  float *v12; // r2
  float v13; // s2
  float v14; // r0
  float v15; // r1
  float v16; // s4
  float v17; // s4
  float v18; // s4
  float v19; // s0
  char v20; // r12
  int v21; // r0
  float v22; // s2
  float v23; // r0
  float v24; // r1
  float v25; // s4
  float v26; // s4
  float v27; // s0
  char v28; // r12
  int v29; // r0

  v8 = (int *)sub_60008598(ActorMgr__instance, 440, FIELD_U32(ActorMgr__instance, 27172));
  v9 = *v8;
  if ( ((unsigned int)&dword_60C99D90 & ~(1614765076 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C99D90) )
  {
    dword_60C99D8C = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C99D90);
  }
  v11 = 0;
  if ( v9 && (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C99D8C) == 1 )
  {
    v12 = a5;
    if ( a3 )
    {
      while ( 1 )
      {
        v13 = FIELD_F32(v9, 644);
        v14 = FIELD_F32(v9, 656);
        v15 = FIELD_F32(v9, 648);
        if ( v13 <= *a2 )
        {
          v16 = a2[1];
          if ( v15 <= v16 && v16 <= v14 )
            break;
        }
        if ( v13 <= *a3 )
        {
          v17 = a3[1];
          if ( v15 <= v17 && v17 <= v14 )
            break;
        }
        if ( a4 )
        {
          if ( v13 <= *a4 )
          {
            v18 = a4[1];
            if ( v15 <= v18 && v18 <= v14 )
              break;
          }
        }
        if ( v12 )
        {
          if ( v13 <= *v12 )
          {
            v19 = v12[1];
            if ( v15 <= v19 && v19 <= v14 )
              break;
          }
        }
        v8 = (int *)sub_60008598(ActorMgr__instance, 440, (int)(v8 + 1));
        v9 = *v8;
        if ( ((unsigned int)&dword_60C99D90 & ~(1614765596 << v20) & 1) == 0 && _cxa_guard_acquire(&dword_60C99D90) )
        {
          dword_60C99D8C = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C99D90);
        }
        if ( v9 )
        {
          v21 = (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C99D8C);
          v12 = a5;
          if ( (v21 ^ 1) != 1 )
            continue;
        }
        return 0;
      }
    }
    else
    {
      while ( 1 )
      {
        v22 = FIELD_F32(v9, 644);
        v23 = FIELD_F32(v9, 656);
        v24 = FIELD_F32(v9, 648);
        if ( v22 <= *a2 )
        {
          v25 = a2[1];
          if ( v24 <= v25 && v25 <= v23 )
            break;
        }
        if ( a4 )
        {
          if ( v22 <= *a4 )
          {
            v26 = a4[1];
            if ( v24 <= v26 && v26 <= v23 )
              break;
          }
        }
        if ( v12 )
        {
          if ( v22 <= *v12 )
          {
            v27 = v12[1];
            if ( v24 <= v27 && v27 <= v23 )
              break;
          }
        }
        v8 = (int *)sub_60008598(ActorMgr__instance, 440, (int)(v8 + 1));
        v9 = *v8;
        if ( ((unsigned int)&dword_60C99D90 & ~(1614766008 << v28) & 1) == 0 && _cxa_guard_acquire(&dword_60C99D90) )
        {
          dword_60C99D8C = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C99D90);
        }
        if ( v9 )
        {
          v29 = (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C99D8C);
          v12 = a5;
          if ( v29 == 1 )
            continue;
        }
        return 0;
      }
    }
    return 1;
  }
  return v11;
}
