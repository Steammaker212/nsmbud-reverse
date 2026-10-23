/* sub_60386718
 * address: 0x60386718   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60386718(_DWORD *a1)
{
  char v1; // r12
  int v3; // r6
  int v4; // r5
  int v5; // r0
  int v7; // r0
  int v8; // r12
  int v9; // r2
  unsigned int v10; // r0
  int v11; // r2
  int *v12; // r3
  bool v13; // zf
  int v14; // r2
  int v15; // r0
  int v16; // r6

  v3 = *(_DWORD *)(a1[14] + 436);
  if ( ((unsigned int)&dword_60C96AA0 & ~(1614309176 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C96AA0) )
  {
    dword_60C96A9C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C96AA0);
  }
  v4 = 0;
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C96A9C) == 1 )
  {
    v5 = a1[8];
    v4 = 1;
    if ( v5 == 1 )
    {
      v7 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a1[14] + 8))(a1[14]);
      v8 = a1[14];
      v9 = 100663296;
      if ( !v7 )
        v9 = dword_60AF2784[FIELD_U32(v8, 112) & 3];
      v10 = a1[3] + v9;
      v11 = FIELD_U32(v8, 116);
      a1[3] = v10;
      v12 = dword_603868D4;
      v13 = v11 == 0;
      v14 = (v10 >> 20) & 0xFF0;
      v15 = v10 & 0xFFFFFF;
      if ( v13 )
        v12 = &dword_603868D4[1];
      FIELD_F32(v8, 72) = FIELD_F32(v3, 108)
                          + (float)(*(float *)v12
                                  * (float)(*(float *)((char *)sinLutTable + v14)
                                          + (float)((float)((float)(unsigned int)v15
                                                          * *(float *)((char *)&sinLutTable[1] + v14))
                                                  * 0.000000059605)));
      *(float *)(a1[14] + 76) = *(float *)(*(_DWORD *)(a1[14] + 436) + 112)
                              - (float)(FIELD_F32(v3, 6372)
                                      * (float)((float)((float)*(int *)(a1[14] + 116) * 16.0) + 4.0));
      v16 = a1[14];
      FIELD_U32(v16, 88) = sub_603864C4(a1);
    }
    else if ( !v5 )
    {
      a1[8] = 1;
      *a1 = 0;
      a1[1] = 0;
      a1[2] = 0;
      return 1;
    }
  }
  return v4;
}
