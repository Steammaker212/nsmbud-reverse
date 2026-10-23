/* sub_60112064
 * address: 0x60112064   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60112064(int a1)
{
  float v2; // s16
  int v3; // r6
  int v4; // r1
  int *v5; // r6
  char v6; // r12
  int *result; // r0
  int v8; // r7
  unsigned int v9; // r0
  int v10; // r1
  float v11; // s20
  int v12; // [sp+Ch] [bp-84h]
  int v13; // [sp+1Ch] [bp-74h]
  _DWORD v14[11]; // [sp+20h] [bp-70h] BYREF
  int v15; // [sp+4Ch] [bp-44h] BYREF

  v2 = FIELD_F32(a1, 668);
  v13 = FIELD_U32(a1, 20);
  v3 = FIELD_U32(a1, 664);
  memset(&v14[1], 0, 40);
  v12 = v3;
  v14[0] = (v3 << 24) | 1;
  v14[3] = Profile__get(0x2CEu);
  v14[2] = FIELD_U32(a1, 8);
  v4 = FIELD_U32(a1, 80);
  v15 = 0;
  sub_600CC2A8(&v14[7], v4, &v15);
  FIELD_U32(a1, 672) = 2139095039;
  v5 = (int *)sub_60008598(ActorMgr__instance, 717, *(_DWORD *)(ActorMgr__instance + 27172));
  for ( result = *(int **)(ActorMgr__instance + 27180); v5 != result; result = *(int **)(ActorMgr__instance + 27180) )
  {
    v8 = *v5;
    if ( ((unsigned int)&dword_60C8693C & ~(1611735440 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C8693C) )
    {
      dword_60C86938 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C8693C);
    }
    if ( v8 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C86938) == 1 )
      {
        v9 = FIELD_U32(v8, 20);
        if ( ((v9 ^ v13) & 0xF) == 0 && (HIBYTE(v9) & 0xF) == v12 )
        {
          v10 = FIELD_U32(v8, 112);
          v11 = v2 + (float)((float)((unsigned __int8)v9 >> 4) * 48.0);
          *(float *)&v14[4] = v11;
          v14[5] = v10;
          v14[6] = 1153138688;
          sub_600080BC((_DWORD *)ActorMgr__instance, v14);
          if ( v11 < FIELD_F32(a1, 672) )
            FIELD_F32(a1, 672) = v11;
        }
      }
    }
    v5 = (int *)sub_60008598(ActorMgr__instance, 717, (int)(v5 + 1));
  }
  return result;
}
