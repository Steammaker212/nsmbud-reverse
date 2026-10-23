/* sub_604F7F5C
 * address: 0x604F7F5C   size: 864   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F7F5C(int a1, int a2, _DWORD *a3)
{
  int v6; // r5
  void *v7; // r6
  int v8; // r7
  int v9; // r5
  char v10; // r12
  int (__fastcall *v11)(int, int, int); // r7
  int v12; // r0
  char v13; // r12
  int (__fastcall *v14)(int, int, int); // r7
  int v15; // r5
  char v16; // r12
  char v17; // r12
  int v18; // r6
  int *v19; // r0
  int v21; // [sp+4h] [bp-1Ch] BYREF

  *(_DWORD *)a1 = &off_60BFEE70;
  sub_6047611C((sead_IDisposer *)a1, a1 + 3520, 3);
  *(_DWORD *)a1 = &off_60BFEE70;
  FIELD_U32(a1, 3520) = 0;
  FIELD_U32(a1, 3524) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3528) = &byte_60B3BA34;
  FIELD_U32(a1, 3532) = 0;
  FIELD_U8(a1, 3536) = 0;
  FIELD_U32(a1, 3540) = 0;
  FIELD_U32(a1, 3544) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3548) = &byte_60B3BA34;
  FIELD_U32(a1, 3552) = 0;
  FIELD_U8(a1, 3556) = 0;
  FIELD_U32(a1, 3560) = 0;
  FIELD_U32(a1, 3564) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3568) = &byte_60B3BA34;
  FIELD_U32(a1, 3572) = 0;
  FIELD_U8(a1, 3576) = 0;
  FIELD_U8(a1, 3580) = 0;
  FIELD_U32(a1, 3584) = 0;
  FIELD_U32(a1, 3588) = 0;
  FIELD_U32(a1, 3592) = 10;
  FIELD_U16(a1, 3596) = 0;
  FIELD_U8(a1, 3598) = 0;
  sub_604734E4((_DWORD *)a1, 0);
  sub_60476388((_DWORD *)a1, a2, a3);
  v21 = 13;
  sub_60474848(a1, dword_60CA6ACC, &v21);
  sub_60473DE4((_DWORD *)a1, 2u, &dword_60CA6AC4, 1);
  v6 = sub_6047482C(a1, 2u);
  v7 = (void *)sead__GlobalRandom__sInstance;
  v8 = sub_608502E4(v6);
  FIELD_F32(v6, 16) = (float)(int)((sead__Random__getU32(v7) * (unsigned __int64)(unsigned int)v8) >> 32);
  v9 = sub_60473B4C(a1);
  if ( ((unsigned int)&dword_60CA6C60[9] & ~(1615823036 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6C60[9]) )
  {
    dword_60CA6CBC = (int)&sead__SafeStringBase__vtable;
    dword_60CA6CC0 = (int)"N_New_00";
    _cxa_guard_release(&dword_60CA6C60[9]);
  }
  v11 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v9 + 48);
  (*(void (__fastcall **)(int *))(dword_60CA6CBC + 12))(&dword_60CA6CBC);
  v12 = v11(v9, dword_60CA6CC0, 1);
  FIELD_U32(a1, 3584) = v12;
  FIELD_U8(v12, 64) &= ~1u;
  if ( ((unsigned int)&dword_60CA6C60[10] & ~(1615823184 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6C60[10]) )
  {
    dword_60CA6CC4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6CC8 = (int)"P_Empty_00";
    _cxa_guard_release(&dword_60CA6C60[10]);
  }
  v14 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v9 + 48);
  (*(void (__fastcall **)(int *))(dword_60CA6CC4 + 12))(&dword_60CA6CC4);
  v15 = v14(v9, dword_60CA6CC8, 1);
  if ( ((unsigned int)&dword_60C9D9CC & ~(1615823324 << v16) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9CC) )
  {
    if ( ((unsigned int)&dword_60C9D9D4 & ~(1615823364 << v17) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
    {
      dword_60C9D9D0 = 0;
      _cxa_guard_release(&dword_60C9D9D4);
    }
    dword_60C9D9C8 = (int)&dword_60C9D9D0;
    _cxa_guard_release(&dword_60C9D9CC);
  }
  v18 = 0;
  if ( v15 )
  {
    v19 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
    if ( v19 )
    {
      while ( v19 != &dword_60C9D9C8 )
      {
        v19 = (int *)*v19;
        if ( !v19 )
          goto LABEL_19;
      }
      v18 = v15;
    }
  }
LABEL_19:
  FIELD_U32(a1, 3588) = v18;
  FIELD_U8(v18, 64) |= 1u;
  return a1;
}
