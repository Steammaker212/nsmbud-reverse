/* sub_603864C4
 * address: 0x603864C4   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603864C4(_DWORD *a1)
{
  char v1; // r12
  int v3; // r5
  int v4; // r6
  _DWORD *v5; // r0
  int v6; // r7
  int v7; // r5
  int v8; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r0
  int v13; // [sp+0h] [bp-20h] BYREF
  int target; // [sp+4h] [bp-1Ch] BYREF

  v3 = *(_DWORD *)(a1[14] + 436);
  if ( ((unsigned int)&dword_60C96AA0 & ~(1614308584 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C96AA0) )
  {
    dword_60C96A9C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C96AA0);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C96A9C) == 1 )
  {
    v4 = FIELD_U32(v3, 6308);
    v5 = (_DWORD *)a1[14];
    v6 = v5[28];
    v7 = v5[29];
    v8 = (*(int (__fastcall **)(_DWORD *))(*v5 + 8))(v5);
    v9 = 0x10000000;
    if ( !v8 )
      v9 = dword_60AF2354[((_BYTE)v6 + 3) & 3];
    target = byte_60AFE3F4[v4] * v9;
    v13 = 0x1000000;
    moveValueTo(a1 + 5, &target, &v13);
    v10 = a1[4];
    if ( (v7 & 1) != 0 )
      v11 = v10 + 0x8000000;
    else
      v11 = v10 - 0x8000000;
    a1[4] = v11;
  }
  return (int)(float)((float)(*(float *)((char *)sinLutTable + ((a1[4] >> 20) & 0xFF0))
                            + (float)((float)((float)(a1[4] & 0xFFFFFF)
                                            * *(float *)((char *)&sinLutTable[1] + ((a1[4] >> 20) & 0xFF0)))
                                    * 0.000000059605))
                    * 100660000.0)
       + a1[5];
}
