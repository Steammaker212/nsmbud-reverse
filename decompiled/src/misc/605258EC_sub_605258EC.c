/* sub_605258EC
 * address: 0x605258EC   size: 1120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605258EC(int a1)
{
  int v2; // r6
  int v3; // r0
  char v4; // r1
  char v5; // r12
  char v6; // r12
  int v7; // r0
  int v8; // r1
  _BYTE *v9; // r7
  int v10; // r0
  int v11; // r2
  bool v12; // cc
  int v13; // r0
  int v14; // r0
  int v15; // r1
  unsigned int v16; // r0
  unsigned int v17; // r7
  int v18; // r6
  int v19; // r7
  int v20; // r6
  float v21; // s2
  float v22; // s4
  int *v23; // r7
  int v25[20]; // [sp+0h] [bp-50h] BYREF

  v2 = dword_60C99DEC;
  v3 = FIELD_U8(dword_60C99DEC, 530);
  v4 = FIELD_U8(dword_60C99DEC, 530);
  FIELD_U8(a1, 4672) = v4 != 0;
  FIELD_U8(a1, 4673) = FIELD_U8(v2, 522);
  if ( v3 )
    FIELD_U8(a1, 4674) = FIELD_U8(v2, 532) == FIELD_U8(v2, 531);
  sub_60525DBC(a1);
  sub_60525FB0(a1);
  sub_605265D4(a1);
  if ( ((unsigned int)dword_60CAA2F4 & ~(1616009592 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60CAA2F4) )
  {
    dword_60CAA354 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA358 = (int)"P_ScoreIcon_00";
    dword_60CAA35C = (int)&sead__SafeStringBase__vtable;
    dword_60CAA360 = (int)"P_ScoreIconA_00";
    dword_60CAA364 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA368 = (int)"P_ScoreIconB_00";
    sub_60000288();
    _cxa_guard_release(dword_60CAA2F4);
  }
  v25[0] = 3;
  __Player__applyPowerUpTransform(a1 + 44, a1 + 4116, (int)&dword_60CAA354, v25);
  if ( ((unsigned int)&dword_60CAA2F4[1] & ~(1616009776 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CAA2F4[1]) )
  {
    dword_60CAA3D0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA3D4 = (int)"W_Base_00";
    dword_60CAA3D8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA3DC = (int)"W_Base_01";
    dword_60CAA3E0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA3E4 = (int)"W_TeamABase_02";
    dword_60CAA3E8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA3EC = (int)"W_TeamAFrame_01";
    dword_60CAA3F0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA3F4 = (int)"W_TeamBBase_03";
    dword_60CAA3F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA3FC = (int)"W_TeamBFrame_01";
    sub_60000288();
    _cxa_guard_release(&dword_60CAA2F4[1]);
  }
  sub_604754E4(a1 + 44, (int *)(a1 + 4128), &dword_60CAA3D0, 6);
  v7 = sub_603FD0B4((_BYTE *)(dword_60C99DEC + 16));
  FIELD_U32(a1, 4620) = v7;
  if ( FIELD_U8(v2, 36) )
    v8 = FIELD_U32(v2, 56) == 0;
  else
    v8 = 0;
  if ( FIELD_U8(v2, 108) && !FIELD_U32(v2, 128) )
    ++v8;
  if ( FIELD_U8(v2, 180) && !FIELD_U32(v2, 200) )
    ++v8;
  v9 = (_BYTE *)(a1 + 4673);
  if ( FIELD_U8(v2, 252) && !FIELD_U32(v2, 272) )
    ++v8;
  FIELD_U32(a1, 4624) = v8;
  if ( *v9 )
  {
    v10 = v7 - v8;
    v11 = v10 - 1;
    if ( v10 - 1 > 2 )
      v11 = 0;
    v12 = v10 < 1;
    v13 = v8 - 1;
    if ( v12 )
      v11 = 0;
    if ( v13 > 2 )
      v13 = 0;
    if ( v8 < 1 )
      v13 = 0;
    FIELD_U32(a1, 4684) = dword_60B038B8[3 * v13 + v11];
    *(_BYTE *)(FIELD_U32(a1, 3808) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3832) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3856) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3884) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3912) + 64) &= ~1u;
    v14 = *(_DWORD *)(a1 + 4 * dword_60B038DC[FIELD_U32(a1, 4684)] + 3772);
    FIELD_U8(v14, 64) |= 1u;
  }
  v25[0] = 0;
  sub_60526910(a1, v25, 0);
  FIELD_U32(a1, 4680) = v25[0];
  sub_60526910(a1, v25, 1);
  if ( *v9 )
  {
    sub_60529288(a1);
  }
  else
  {
    v15 = FIELD_U32(a1, 4620);
    if ( v15 >= 1 )
    {
      v16 = 0;
      do
      {
        v17 = 0;
        if ( v16 < 4 )
          v17 = v16;
        ++v16;
        v18 = a1 + 4 * v17;
        v19 = 3 * v17;
        v20 = *(_DWORD *)(FIELD_U32(v18, 4152) + 8);
        v21 = FIELD_F32(v20, 28);
        v22 = FIELD_F32(v20, 60);
        v25[v19] = FIELD_U32(v20, 24);
        v23 = &v25[v19];
        *((float *)v23 + 1) = v21 + (float)(v22 * -0.5);
        v23[2] = 1120403456;
      }
      while ( v15 != v16 );
    }
    sub_60530D3C(dword_60CAAAC0);
  }
  return sub_6045BF58(a1 + 4216, 0);
}
