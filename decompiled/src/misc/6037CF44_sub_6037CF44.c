/* sub_6037CF44
 * address: 0x6037CF44   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037CF44(int a1)
{
  unsigned __int8 *v2; // r6
  char v3; // r12
  float v4; // s4
  float v5; // s0
  float v6; // s2
  float *v7; // r5
  float v8; // s6
  float *v9; // r7
  signed int v11; // [sp+4h] [bp-24h] BYREF
  signed int v12; // [sp+8h] [bp-20h] BYREF
  signed int v13; // [sp+Ch] [bp-1Ch] BYREF

  sub_60296E0C((_DWORD *)a1);
  FIELD_U8(a1, 7544) = FIELD_U8(a1, 28);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 792))(a1);
  v2 = (unsigned __int8 *)(a1 + 7544);
  if ( ((unsigned int)dword_60C968B4 & ~(1614270344 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C968B4) )
  {
    byte_60C968B0 = 0;
    byte_60C968B1 = 8;
    byte_60C968B2 = 8;
    _cxa_guard_release(dword_60C968B4);
  }
  EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), (EnemyFreezeMgr_Flags *)&byte_60C968B0);
  if ( sub_606D4384(&v11, *v2) )
  {
    if ( sub_606D4384(&v13, *v2) )
    {
      sub_606D45B8(a1 + 7548, a1 + 7528);
      v4 = FIELD_F32(a1, 7528);
      v5 = FIELD_F32(a1, 108);
      v6 = FIELD_F32(a1, 112);
      v7 = (float *)(a1 + 7540);
      v8 = FIELD_F32(a1, 7532);
      v9 = (float *)(a1 + 7536);
      FIELD_F32(a1, 7536) = v5 - v4;
      FIELD_F32(a1, 7540) = v6 - v8;
    }
    else
    {
      v5 = FIELD_F32(a1, 108);
      v6 = FIELD_F32(a1, 112);
      v7 = (float *)(a1 + 7540);
      v9 = (float *)(a1 + 7536);
      v8 = FIELD_F32(a1, 7532);
      v4 = FIELD_F32(a1, 7528);
    }
    FIELD_F32(a1, 7504) = sqrtf(
                              (float)((float)(v5 - v4) * (float)(v5 - v4))
                            + (float)((float)(v6 - v8) * (float)(v6 - v8)))
                          + -32.0;
    sub_606D4384(&v12, *v2);
    sub_606D465C(a1 + 7512, a1 + 7524);
    FIELD_U32(a1, 7552) = sub_6000F7B8(*v9, *v7);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C967F0);
  }
  else
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C967D0);
  }
  FIELD_U32(a1, 7508) = dword_60AF2764[FIELD_U32(a1, 80)];
  FIELD_U32(a1, 500) = 1148190720;
  FIELD_U32(a1, 504) = 1148190720;
  return 1;
}
