/* sub_607206D0
 * address: 0x607206D0   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607206D0(int a1, int a2, int a3)
{
  int v6; // r0
  float *v7; // r7
  float *v8; // r4
  char v9; // r12
  float v10; // s16
  float v11; // s0
  _BYTE v13[172]; // [sp+4h] [bp-13Ch] BYREF
  _BYTE v14[4]; // [sp+B0h] [bp-90h] BYREF
  unsigned int v15; // [sp+B4h] [bp-8Ch]
  int v16; // [sp+C8h] [bp-78h]
  int v17; // [sp+CCh] [bp-74h]
  char v18; // [sp+10Ah] [bp-36h]

  v6 = sub_6090B350(v14);
  v7 = 0;
  v15 = v15 & 0xFFFFFFFC | 1;
  v14[0] = 1;
  v14[1] = 0;
  v17 = 255;
  v14[2] = 1;
  v18 = 7;
  v16 = 1031798784;
  sub_6090B4B0(v6, FIELD_U32(a3, 40));
  v8 = *(float **)(a3 + 28);
  if ( ((unsigned int)&dword_60C8D9F4 & ~(1618085700 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D9F4) )
  {
    dword_60C8D9F0 = (int)&off_60BD9634;
    _cxa_guard_release(&dword_60C8D9F4);
  }
  if ( v8 )
  {
    v7 = (float *)(**(int (__fastcall ***)(float *, int *))v8)(v8, &dword_60C8D9F0);
    if ( v7 )
      v7 = v8;
  }
  v10 = (*(float (__fastcall **)(float *))(*(_DWORD *)v7 + 16))(v7);
  v11 = (*(float (__fastcall **)(float *, float))(*(_DWORD *)v7 + 20))(v7, v10);
  sub_6090C77C(v13, v10, v11, -v7[39], -v7[40], v7[41], v7[42]);
  sub_60720844(a1, FIELD_U32(a3, 40), a2, 0, v13);
  return nullsub_113(v13);
}
