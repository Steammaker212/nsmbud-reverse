/* sub_607E4720
 * address: 0x607E4720   size: 900   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E4720(float *a1)
{
  int v2; // r8
  float v3; // s0
  float v4; // s0
  _DWORD *v5; // r4
  int v6; // t1
  char v7; // r12
  int *v8; // r1
  int v9; // r7
  int v10; // r5
  int *v11; // r1
  int v12; // r4
  int v13; // r0
  char v14; // r12
  int *v15; // r1
  int v16; // r4
  int v17; // r0
  _DWORD v19[8]; // [sp+0h] [bp-20h] BYREF

  FIELD_U8(dword_60C9BB38, 628) = 0;
  v2 = dword_60CD0B40;
  v19[0] = &sead__SafeStringBase__vtable;
  v19[1] = "DarkCloudDemoScene";
  *((_DWORD *)a1 + 58) = a1;
  *((_DWORD *)a1 + 59) = sub_607E4B1C;
  a1[60] = 0.0;
  *((_DWORD *)a1 + 57) = off_60C26B4C;
  sead__SafeStringBase__operator_assign((int)(a1 + 52), (int)v19);
  *((_DWORD *)a1 + 54) = 1;
  sub_609553AC(**(_DWORD **)(v2 + 36), a1 + 48);
  a1[655] = 0.0;
  a1[584] = 0.0;
  a1[585] = 1280.0;
  a1[586] = 806.0;
  a1[587] = 0.0;
  a1[588] = 620.0;
  a1[589] = -320.0;
  a1[590] = 0.0;
  a1[591] = 1.0;
  a1[592] = 0.0;
  v3 = sqrtf((float)((float)(1.0 * 1.0) + (float)(0.0 * 0.0)) + (float)(0.0 * 0.0));
  if ( v3 > 0.0 )
  {
    v4 = 1.0 / v3;
    a1[590] = v4 * a1[590];
    a1[591] = v4 * a1[591];
    a1[592] = v4 * a1[592];
  }
  v6 = *((_DWORD *)a1 + 571);
  v5 = a1 + 571;
  (*(void (__fastcall **)(_DWORD *, _DWORD *))(v6 + 16))(v5, v5 + 1);
  sub_6090C42C(v5 + 22);
  v8 = *(int **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 6u )
    v8 += 6;
  v9 = *v8;
  if ( ((unsigned int)&dword_60C81740 & ~(1618888916 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  if ( v9 )
  {
    v10 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v9 + 8))(v9, &dword_60C8173C);
    if ( v10 )
      v10 = v9;
  }
  else
  {
    v10 = 0;
  }
  FIELD_U32(v10, 72) = v5;
  FIELD_U32(v10, 76) = v5 + 22;
  v11 = *(int **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v11 += 5;
  v12 = *v11;
  if ( ((unsigned int)&dword_60C8C214 & ~(1618889072 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C214) )
  {
    dword_60C8C210 = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C8C214);
  }
  if ( v12 )
  {
    v13 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v12 + 8))(v12, &dword_60C8C210);
    if ( v13 )
      v13 = v12;
  }
  else
  {
    v13 = 0;
  }
  sub_60446A98(v13, v10);
  v15 = *(int **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 3u )
    v15 += 3;
  v16 = *v15;
  if ( ((unsigned int)&dword_60C8C21C & ~(1618889224 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C21C) )
  {
    dword_60C8C218 = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C8C21C);
  }
  if ( v16 )
  {
    v17 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v16 + 8))(v16, &dword_60C8C218);
    if ( v17 )
      v17 = v16;
  }
  else
  {
    v17 = 0;
  }
  sub_60442864(v17, v10);
  return sub_60807EF0(SoundSystem_instance, "SE_OBJ_CS_DARK_CLOUD_DISAPPEAR", 0, 1);
}
