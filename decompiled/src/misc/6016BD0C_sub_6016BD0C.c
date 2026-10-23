/* sub_6016BD0C
 * address: 0x6016BD0C   size: 1416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6016BD0C(int a1)
{
  int v2; // r0
  char v3; // r12
  signed int v4; // r5
  int v5; // r8
  void *v6; // r11
  const void *v7; // r9
  bool v8; // cc
  unsigned int v9; // r0
  char v10; // r12
  signed int v11; // r5
  int v12; // r8
  void *v13; // r11
  const void *v14; // r9
  unsigned int v15; // r0
  int v16; // r2
  int v17; // r0
  float v18; // r5
  int v19; // r1
  int v20; // r4
  int v21; // t1
  int *v22; // r0
  float v23; // s8
  int (**v25)(); // [sp+8h] [bp-68h] BYREF
  _BYTE *v26; // [sp+Ch] [bp-64h]
  int v27; // [sp+10h] [bp-60h]
  _BYTE v28[32]; // [sp+14h] [bp-5Ch] BYREF
  _BYTE v29[4]; // [sp+34h] [bp-3Ch] BYREF
  float v30; // [sp+38h] [bp-38h]
  _DWORD v31[12]; // [sp+40h] [bp-30h] BYREF

  sub_6016C320();
  FIELD_U32(a1, 316) = FIELD_U32(a1, 712);
  FIELD_U32(a1, 320) = FIELD_U32(a1, 716);
  FIELD_U32(a1, 324) = FIELD_U32(a1, 720);
  FIELD_U32(a1, 328) = FIELD_U32(a1, 724);
  FIELD_U32(a1, 332) = FIELD_U32(a1, 728);
  FIELD_U32(a1, 336) = FIELD_U32(a1, 732);
  sub_6090C42C(a1 + 352);
  (*(void (__fastcall **)(int, int))(FIELD_U32(a1, 264) + 16))(a1 + 264, a1 + 268);
  FIELD_U32(a1, 880) = 0;
  FIELD_U32(a1, 900) = dword_60C88B08;
  FIELD_U32(a1, 904) = dword_60C88B0C;
  FIELD_U32(a1, 908) = dword_60C88B10;
  FIELD_U32(a1, 884) = 0;
  FIELD_U32(a1, 888) = 0;
  FIELD_U32(a1, 892) = 0;
  FIELD_U32(a1, 896) = 5;
  FIELD_U32(a1, 844) = 0;
  FIELD_U32(a1, 848) = 0;
  if ( !FIELD_U32(a1, 536) )
    FIELD_U32(a1, 536) = operator_new_8DE25C(0xF0u, *(void **)(a1 + 4), 16);
  sub_60411260(a1 + 536, a1 + 264, a1 + 352);
  FIELD_U32(a1, 948) = -1;
  v2 = sub_601CF9C0(dword_60C8AEF0);
  memset(v31, 255, 12);
  sub_6019EC34(v31, v2 + 1032);
  if ( ((unsigned int)dword_60C88AF0 & ~(1612103228 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C88AF0) )
  {
    dword_60C88AF8 = (int)&sead__SafeStringBase__vtable;
    dword_60C88AFC = (int)"W1M0";
    _cxa_guard_release(dword_60C88AF0);
  }
  v4 = 0;
  sub_601A02B0(dword_60C89E00, v29, 0, 0, &dword_60C88AF8);
  v5 = sub_601A443C(dword_60C89E18, 0, 0);
  v26 = v28;
  v25 = &BufferedSafeStringBase_char_vtable_probably;
  v27 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v25);
  v25 = &off_60BD4C38;
  v6 = v26;
  (*(void (__fastcall **)(int *))(dword_60C88AF8 + 12))(&dword_60C88AF8);
  v7 = (const void *)dword_60C88AFC;
  if ( v6 != (void *)dword_60C88AFC )
  {
    (*(void (__fastcall **)(int *))(dword_60C88AF8 + 12))(&dword_60C88AF8);
    while ( *(_BYTE *)(dword_60C88AFC + v4) )
    {
      if ( !*(_BYTE *)(dword_60C88AFC + v4 + 1) )
      {
        ++v4;
        break;
      }
      if ( !*(_BYTE *)(dword_60C88AFC + v4 + 2) )
      {
        v4 += 2;
        break;
      }
      v8 = v4 + 2 <= 0x7FFFF;
      v4 += 3;
      if ( !v8 )
      {
        v4 = 0;
        break;
      }
    }
    if ( v4 >= v27 )
      v4 = v27 - 1;
    qmemcpy(v6, v7, v4);
    *((_BYTE *)v6 + v4) = 0;
  }
  v25 = &off_60BD4C20;
  v9 = sub_60181AB4(v5, &v25);
  if ( v9 >= 0x80 )
    v9 = 0;
  FIELD_F32(a1, 1144) = *(float *)(dword_60CC6D78 + 36 * v9 + 15564) + v30;
  if ( ((unsigned int)&dword_60C88AF0[1] & ~(1612103740 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AF0[1]) )
  {
    dword_60C88B00 = (int)&sead__SafeStringBase__vtable;
    dword_60C88B04 = (int)"W7M0";
    _cxa_guard_release(&dword_60C88AF0[1]);
  }
  v11 = 0;
  sub_601A02B0(dword_60C89E00, a1 + 1148, 6, 0, &dword_60C88B00);
  v12 = sub_601A443C(dword_60C89E18, 6, 0);
  v26 = v28;
  v25 = &BufferedSafeStringBase_char_vtable_probably;
  v27 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v25);
  v25 = &off_60BD4C38;
  v13 = v26;
  (*(void (__fastcall **)(int *))(dword_60C88B00 + 12))(&dword_60C88B00);
  v14 = (const void *)dword_60C88B04;
  if ( v13 != (void *)dword_60C88B04 )
  {
    (*(void (__fastcall **)(int *))(dword_60C88B00 + 12))(&dword_60C88B00);
    while ( *(_BYTE *)(dword_60C88B04 + v11) )
    {
      if ( !*(_BYTE *)(dword_60C88B04 + v11 + 1) )
      {
        ++v11;
        break;
      }
      if ( !*(_BYTE *)(dword_60C88B04 + v11 + 2) )
      {
        v11 += 2;
        break;
      }
      v8 = v11 + 2 <= 0x7FFFF;
      v11 += 3;
      if ( !v8 )
      {
        v11 = 0;
        break;
      }
    }
    if ( v11 >= v27 )
      v11 = v27 - 1;
    qmemcpy(v13, v14, v11);
    *((_BYTE *)v13 + v11) = 0;
  }
  v25 = &off_60BD4C20;
  v15 = sub_60181AB4(v12, &v25);
  LOWORD(v16) = 5324;
  if ( v15 >= 0x80 )
    v15 = 0;
  HIWORD(v16) = 1;
  v17 = dword_60CC6D78 + 36 * v15;
  v18 = *(float *)(v17 + v16);
  v19 = FIELD_U32(v17, 70864);
  FIELD_U32(a1, 1160) = FIELD_U32(v17, 70856);
  FIELD_F32(a1, 1164) = v18;
  FIELD_U32(a1, 1168) = v19;
  FIELD_U32(a1, 1132) = FIELD_U32(a1, 1148);
  v21 = FIELD_U32(a1, 1152);
  v20 = a1 + 1152;
  *(_DWORD *)(v20 - 16) = v21;
  *(_DWORD *)(v20 - 12) = FIELD_U32(v20, 4);
  v22 = dword_6016C30C;
  if ( v31[0] == 8 )
    v22 = &dword_6016C30C[1];
  v23 = *(float *)v20 + (float)((float)((float)(v18 + 2540.0) + 500.0) * sinf(*(float *)v22));
  FIELD_F32(v20, 20) = v23;
  FIELD_F32(v20, 24) = v23 + 4500.0;
  return v23 + 4500.0;
}
