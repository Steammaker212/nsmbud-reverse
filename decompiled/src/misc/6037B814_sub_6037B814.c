/* sub_6037B814
 * address: 0x6037B814   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6037B814(_DWORD *a1)
{
  char v2; // r12
  unsigned int v3; // r1
  unsigned __int8 *v4; // r6
  float v5; // s4
  float v6; // s0
  float v7; // s2
  float *v8; // r5
  float v9; // s6
  float *v10; // r7
  signed int v12; // [sp+4h] [bp-24h] BYREF
  signed int v13; // [sp+8h] [bp-20h] BYREF
  signed int v14; // [sp+Ch] [bp-1Ch] BYREF

  sub_60296E0C(a1);
  *((_BYTE *)a1 + 7648) = *((_BYTE *)a1 + 28);
  v3 = a1[5];
  if ( !(v3 >> 30) )
    a1[20] = dword_60AF2774[v3 >> 28];
  v4 = (unsigned __int8 *)(a1 + 1912);
  if ( ((unsigned int)dword_60C96798 & ~(1614264428 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C96798) )
  {
    byte_60C96790 = 0;
    byte_60C96791 = 8;
    byte_60C96792 = 8;
    _cxa_guard_release(dword_60C96798);
  }
  EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 1538), (EnemyFreezeMgr_Flags *)&byte_60C96790);
  if ( sub_606D4384(&v12, *v4) )
  {
    if ( sub_606D4384(&v14, *v4) )
    {
      sub_606D45B8(a1 + 1913, a1 + 1908);
      v5 = *((float *)a1 + 1908);
      v6 = *((float *)a1 + 27);
      v7 = *((float *)a1 + 28);
      v8 = (float *)(a1 + 1911);
      v9 = *((float *)a1 + 1909);
      v10 = (float *)(a1 + 1910);
      *((float *)a1 + 1910) = v6 - v5;
      *((float *)a1 + 1911) = v7 - v9;
    }
    else
    {
      v6 = *((float *)a1 + 27);
      v7 = *((float *)a1 + 28);
      v8 = (float *)(a1 + 1911);
      v10 = (float *)(a1 + 1910);
      v9 = *((float *)a1 + 1909);
      v5 = *((float *)a1 + 1908);
    }
    *((float *)a1 + 1903) = sqrtf(
                              (float)((float)(v6 - v5) * (float)(v6 - v5))
                            + (float)((float)(v7 - v9) * (float)(v7 - v9)))
                          + -32.0;
    sub_606D4384(&v13, *v4);
    sub_606D465C(a1 + 1904, a1 + 1907);
    a1[1915] = sub_6000F7B8(*v10, *v8);
    (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C966EC);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C966CC);
  }
  a1[1914] = dword_60AF2764[a1[20]];
  a1[125] = 1148190720;
  a1[126] = 1148190720;
  return 1;
}
