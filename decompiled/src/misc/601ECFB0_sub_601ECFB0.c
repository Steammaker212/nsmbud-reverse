/* sub_601ECFB0
 * address: 0x601ECFB0   size: 1068   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601ECFB0(int a1)
{
  char v1; // r12
  int *v3; // r6
  char v4; // r12
  int *v5; // r11
  int v6; // r5
  float v7; // r6
  const void *v8; // r9
  signed int v9; // r5
  bool v10; // cc
  int v11; // r0
  int v12; // r0
  float v13; // s0
  int v14; // s2
  int v16; // [sp+18h] [bp-60h]
  float v17; // [sp+1Ch] [bp-5Ch] BYREF
  float v18; // [sp+20h] [bp-58h]
  int v19; // [sp+24h] [bp-54h]
  int v20; // [sp+28h] [bp-50h] BYREF
  _DWORD v21[12]; // [sp+48h] [bp-30h] BYREF

  v16 = FIELD_U32(dword_60CC6D78, 412);
  if ( v16 == 1 )
  {
    v3 = (int *)sub_601693A0(862);
    v5 = *(int **)(ActorMgr__instance + 27180);
    while ( 1 )
    {
      v6 = *v3;
      if ( ((unsigned int)&dword_60C89B08 & ~(1612632144 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C89B08) )
      {
        dword_60C89B04 = (int)&off_60BD5A64;
        _cxa_guard_release(&dword_60C89B08);
      }
      if ( !v6 || (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C89B04) != 1 )
        break;
      if ( FIELD_U32(v6, 240) == 1 )
      {
        FIELD_U32(a1, 80) = FIELD_U32(v6, 80);
        FIELD_U32(a1, 84) = FIELD_U32(v6, 84);
        FIELD_U32(a1, 88) = FIELD_U32(v6, 88);
        break;
      }
      if ( v3 != v5 )
      {
        v3 = (int *)sub_601693C0(862, (int)(v3 + 1));
        if ( v3 != v5 )
          continue;
      }
      break;
    }
  }
  else
  {
    if ( ((unsigned int)dword_60C8B540 & ~(1612632284 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C8B540) )
    {
      dword_60C8B54C = (int)&sead__SafeStringBase__vtable;
      dword_60C8B550 = (int)"W1T0";
      _cxa_guard_release(dword_60C8B540);
    }
    sub_601A02B0(dword_60C89E00, (_DWORD *)(a1 + 80), 0, 0, (int)&dword_60C8B54C);
  }
  FIELD_U32(a1, 240) = v16;
  FIELD_U32(a1, 244) = 0;
  if ( ((unsigned int)&dword_60C8B540[1] & ~(1612632428 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C8B540[1]) )
  {
    dword_60C8B554 = (int)&sead__SafeStringBase__vtable;
    dword_60C8B558 = (int)"W2K1";
    _cxa_guard_release(&dword_60C8B540[1]);
  }
  v18 = COERCE_FLOAT(&v20);
  v17 = COERCE_FLOAT(&BufferedSafeStringBase_char_vtable_probably);
  v19 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v17);
  v17 = COERCE_FLOAT(&off_60BD4C38);
  v7 = v18;
  (*(void (__fastcall **)(int *))(dword_60C8B554 + 12))(&dword_60C8B554);
  v8 = (const void *)dword_60C8B558;
  if ( LODWORD(v7) != dword_60C8B558 )
  {
    (*(void (__fastcall **)(int *))(dword_60C8B554 + 12))(&dword_60C8B554);
    v9 = 0;
    while ( *(_BYTE *)(dword_60C8B558 + v9) )
    {
      if ( !*(_BYTE *)(dword_60C8B558 + v9 + 1) )
      {
        ++v9;
        break;
      }
      if ( !*(_BYTE *)(dword_60C8B558 + v9 + 2) )
      {
        v9 += 2;
        break;
      }
      v10 = v9 + 2 < 0x80000;
      v9 += 3;
      if ( !v10 )
      {
        v9 = 0;
        break;
      }
    }
    if ( v9 >= v19 )
      v9 = v19 - 1;
    qmemcpy((void *)LODWORD(v7), v8, v9);
    *(_BYTE *)(LODWORD(v7) + v9) = 0;
  }
  v17 = COERCE_FLOAT(&off_60BD4C20);
  sub_601A02B0(dword_60C89E00, (_DWORD *)(a1 + 328), 1, 0, (int)&v17);
  v21[0] = 1;
  v21[1] = 0;
  v11 = sub_601A443C(dword_60C89E18, 1, 0);
  v21[2] = sub_60181AB4(v11, &v17);
  sub_6019EC34((_DWORD *)(a1 + 388), v21);
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  v12 = sub_608332B0(a1 + 80, a1 + 328);
  FIELD_U32(a1, 412) = v12;
  FIELD_U32(a1, 180) = v12;
  FIELD_U32(a1, 376) = 2;
  v13 = FIELD_F32(a1, 332) - FIELD_F32(a1, 84);
  *(float *)&v14 = FIELD_F32(a1, 336) - FIELD_F32(a1, 88);
  v17 = FIELD_F32(a1, 328) - FIELD_F32(a1, 80);
  v18 = v13;
  v19 = v14;
  ((void (__fastcall *)(int, int, _DWORD, int, float, float, float, int, float *))loc_60185F9C)(
    a1,
    a1 + 328,
    0,
    20,
    15.0,
    0.1,
    2.3,
    20,
    &v17);
  return sub_601ECD14(a1, 3);
}
