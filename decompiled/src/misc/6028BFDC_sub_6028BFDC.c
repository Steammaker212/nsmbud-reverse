/* sub_6028BFDC
 * address: 0x6028BFDC   size: 1248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6028BFDC(int a1)
{
  char v1; // r12
  _DWORD *v3; // r0
  int *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  int v7; // r1
  int *v8; // r6
  int v9; // r0
  int *v10; // r4
  int v11; // r2
  _DWORD *v12; // r8
  int v13; // r1
  int v14; // r0
  int v15; // r7
  unsigned int v22; // s8
  int v23; // r1
  float v26; // s2
  float v27; // s10
  float v28; // s0
  float v29; // s4
  float v30; // s0
  float v31; // s4
  int v32; // r1
  unsigned int v33; // r0
  int result; // r0
  float v35; // s0
  int v36; // [sp+0h] [bp-28h] BYREF
  int speed[9]; // [sp+4h] [bp-24h] BYREF

  if ( ((unsigned int)dword_60C8F4C4 & ~(1613283324 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C8F4C4) )
  {
    unk_60C8F4E8 = 0xEE39000011C70000LL;
    _cxa_guard_release(dword_60C8F4C4);
  }
  if ( ((unsigned int)&dword_60C8F4C4[1] & ~(1613283408 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F4C4[1]) )
  {
    unk_60C8F4F0 = 0xD8E30000271D0000LL;
    _cxa_guard_release(&dword_60C8F4C4[1]);
  }
  if ( ((unsigned int)&dword_60C8F4C4[2] & ~(1613283492 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F4C4[2]) )
  {
    unk_60C8F504 = 1069547520;
    unk_60C8F508 = 1071343616;
    unk_60C8F50C = 1073139712;
    unk_60C8F510 = 1074338816;
    dword_60C8F514 = 1075236864;
    unk_60C8F518 = 1076134912;
    unk_60C8F51C = 1077032960;
    unk_60C8F520 = 1077931008;
    _cxa_guard_release(&dword_60C8F4C4[2]);
  }
  if ( ((unsigned int)&dword_60C8F4C4[3] & ~(1613283636 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F4C4[3]) )
  {
    unk_60C8F530 = 256;
    unk_60C8F534 = 192;
    unk_60C8F538 = 160;
    unk_60C8F53C = 128;
    dword_60C8F540 = 96;
    unk_60C8F544 = 80;
    unk_60C8F548 = 72;
    unk_60C8F54C = 64;
    _cxa_guard_release(&dword_60C8F4C4[3]);
  }
  if ( ((unsigned int)&dword_60C8F4C4[4] & ~(1613283756 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F4C4[4]) )
  {
    unk_60C8F550 = 640;
    unk_60C8F554 = 544;
    unk_60C8F558 = 496;
    unk_60C8F55C = 456;
    dword_60C8F560 = 432;
    unk_60C8F564 = 416;
    unk_60C8F568 = 400;
    unk_60C8F56C = 386;
    _cxa_guard_release(&dword_60C8F4C4[4]);
  }
  v3 = *(_DWORD **)(a1 + 6300);
  v4 = (int *)v3[3];
  v5 = v3[2];
  v6 = v3[17];
  if ( v5 > v6 )
    v4 += v6;
  Animation_update(*v4);
  v8 = (int *)(a1 + 6332);
  v7 = FIELD_U32(a1, 6332);
  v9 = FIELD_U16(a1, 6340);
  if ( v7 < 0x10000 )
  {
    v7 += *((_DWORD *)&unk_60C8F530 + v9);
    *v8 = v7;
  }
  v10 = (int *)(a1 + 6336);
  v11 = FIELD_U32(a1, 6336) + *((_DWORD *)&unk_60C8F530 + v9 + 8);
  if ( v11 >= 0x8000 )
    v11 = 0x8000;
  *v10 = v11;
  v12 = (_DWORD *)(a1 + 80);
  if ( FIELD_U16(a1, 6276) )
  {
    FIELD_U32(a1, 164) -= 0x8000000;
  }
  else
  {
    v13 = FIELD_U32(a1, 80);
    speed[0] = 0x2000000;
    moveValueTo((int *)(a1 + 164), (int *)&unk_60C8F4C0 + v13 + 10, speed);
    v14 = FIELD_U32(a1, 80);
    speed[0] = 0x4000000;
    moveValueTo((int *)(a1 + 160), (int *)&unk_60C8F4C0 + v14 + 12, speed);
    v9 = FIELD_U16(a1, 6340);
    v11 = *v10;
    v7 = *v8;
  }
  v15 = ((unsigned int)v7 >> 4) & 0xFF0;
  _R1 = v7 << 16;
  __asm { UXTB16          R1, R1 }
  v22 = _R1;
  v23 = ((unsigned int)v11 >> 4) & 0xFF0;
  _R2 = v11 << 16;
  __asm { UXTB16          R2, R2 }
  v26 = FIELD_F32(a1, 88)
      * (float)(*(float *)((char *)&sinLutTable[2] + v15)
              + (float)((float)((float)v22 * *(float *)((char *)&sinLutTable[3] + v15)) * 0.000000059605));
  FIELD_F32(a1, 120) = v26;
  v27 = *((float *)&unk_60C8F4C0 + v9 + 17);
  v28 = *(float *)((char *)sinLutTable + v23)
      + (float)((float)((float)_R2 * *(float *)((char *)&sinLutTable[1] + v23)) * 0.000000059605);
  v29 = -(float)(v27 * v28);
  v30 = v27 * v28;
  FIELD_F32(a1, 124) = v29;
  v31 = FIELD_F32(a1, 108) + v26;
  FIELD_F32(a1, 108) = v31;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) - v30;
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  FIELD_F32(a1, 108) = v31 + (float)(FIELD_F32(dword_60CC6484, 112) - FIELD_F32(dword_60CC6484, 56));
  speed[0] = sub_6000F7B8(v30, v26 * (float)byte_60AFE3F4[FIELD_U32(a1, 80)]);
  v36 = 0x2000000;
  moveValueTo((int *)(a1 + 156), speed, &v36);
  v32 = 0;
  v33 = FIELD_U8(a1, 6348);
  if ( v33 < 4 )
    v32 = (char)v33;
  result = *(_DWORD *)(PlayerMgr_instance + 4 * v32 + 32);
  if ( result )
  {
    v35 = FIELD_F32(result, 108);
    if ( *v12 == 1 )
    {
      if ( FIELD_F32(a1, 108) >= (float)(v35 + -16.0) )
        return result;
    }
    else if ( *v12 || FIELD_F32(a1, 108) <= (float)(v35 + 16.0) )
    {
      return result;
    }
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C8F410);
  }
  return result;
}
