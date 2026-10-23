/* sub_60915628
 * address: 0x60915628   size: 856   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60915628(int a1, _DWORD *a2, _DWORD *a3, int a4, int a5, char a6)
{
  int v7; // r0
  _DWORD *v8; // r12
  int v11; // r4
  int v12; // r1
  int v13; // r6
  unsigned int v14; // r9
  int v15; // r12
  int v16; // r1
  signed int v17; // r6
  unsigned int v18; // r0
  sead_IDisposer *v19; // r4
  signed __int64 v20; // kr00_8
  int v21; // r1
  int v23; // r5
  _DWORD *v24; // r8
  int v25; // r0
  int v26; // r4
  int v27; // r10
  unsigned int v28; // r5
  unsigned int v29; // [sp+20h] [bp-78h]
  int v30; // [sp+24h] [bp-74h]
  _DWORD *v31; // [sp+28h] [bp-70h]
  int v32; // [sp+2Ch] [bp-6Ch] BYREF
  _DWORD v33[26]; // [sp+30h] [bp-68h] BYREF

  v7 = 20;
  v8 = a2;
  if ( (a6 & 0x91) == 0 )
    v7 = 36;
  if ( (a6 & 0x33) != 0 )
    v7 = v7 & 0x30 | 2;
  v33[0] = v7;
  if ( (a6 & 4) != 0 )
  {
    v11 = a4;
    sub_60917168(dword_60CCFC8C, v33);
    a4 = v11;
    v8 = a2;
  }
  if ( (a6 & 8) != 0 )
    v33[0] = v33[0] & 0xFFFFFFF8 | 4;
  v12 = (a5 >> 31) | 1;
  if ( (a6 & 0x40) != 0 )
  {
    v13 = 265;
    v33[0] = 265;
  }
  else
  {
    v13 = v33[0];
  }
  if ( (a6 & 4) != 0 )
    v13 |= 0x80u;
  v14 = (a4 + 4095) & 0xFFFFF000;
  if ( (a6 & 4) != 0 )
    v33[0] = v13;
  v32 = v13;
  if ( (FIELD_U8(a1, 72) & 1) != 0 )
  {
    v23 = a4;
    v24 = v8;
    v25 = (*(int (__fastcall **)(_DWORD *, unsigned int, unsigned int))(*a3 + 24))(
            a3,
            v14 | 0x108,
            (((a5 ^ (a5 >> 31)) + ((unsigned int)a5 >> 31) + 4095) & 0xFFFFF000) * v12);
    v26 = v25;
    if ( v25 )
    {
      v27 = v23;
      v28 = v25 + v14;
      *(_DWORD *)(v25 + v14 + 256) = 0;
      dword_60CC73C4(v33);
      dword_60CC73C0(v33, FIELD_U32(dword_60CCF464, 24));
      dword_60CC73CC(v33, v13 & 0xFFFFFFF);
      dword_60CC73C8(v33, v26, v14);
      sub_6091718C(dword_60CCFC8C, v26 + v14, v33);
      FIELD_U32(v28, 256) = v13 | 0x80000000;
      sub_60913F8C(v24, v26, v27, v26 + v14);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v29 = (((a5 ^ (a5 >> 31)) + ((unsigned int)a5 >> 31) + 4095) & 0xFFFFF000) * v12;
    v30 = a4;
    v31 = v8;
    sead__CriticalSection__lock(a1 + 20);
    v15 = FIELD_U32(a1, 56);
    if ( v15 < 1 )
      goto LABEL_24;
    v16 = v15 - 1;
    v17 = 0;
    while ( 1 )
    {
      v18 = (v17 + v16) / 2;
      v19 = *(sead_IDisposer **)(FIELD_U32(a1, 64) + 4 * v18);
      v20 = (unsigned int)FIELD_U32(v19, 0x8) - (unsigned __int64)(unsigned int)a3;
      if ( !v20 )
        break;
      if ( v20 < 0 )
        v17 = v18 + 1;
      else
        v16 = v18 - 1;
      if ( v17 > v16 )
        goto LABEL_24;
    }
    if ( !v19 || v15 <= v18 )
    {
LABEL_24:
      v19 = (sead_IDisposer *)operator_new_8DE25C(0x44u, a3, 4);
      FIELD_U32(v19, 0x0) = (int)&off_60C5D53C;
      sead__IDisposer__ctor(&FIELD_U32(v19, 0x4), a3, 0);
      FIELD_U32(v19, 0x0) = (int)off_60C5D4F4;
      FIELD_U32(v19, 0x4) = (int)off_60C5D508;
      v19[1].containingHeap = 1;
      v19[1].field_8 = 0;
      v19[1].field_C = 0;
      sead__CriticalSection__ctor(v19 + 2);
      v21 = FIELD_U32(a1, 56);
      if ( v21 < FIELD_U32(a1, 60) )
      {
        *(_DWORD *)(FIELD_U32(a1, 64) + 4 * v21) = v19;
        ++FIELD_U32(a1, 56);
      }
      sub_608DECA0(a1 + 56, (int (__fastcall *)(_DWORD, _DWORD))sub_609159DC);
    }
    sead__CriticalSection__unlock(a1 + 20);
    return ((int (__fastcall *)(sead_IDisposer *, _DWORD *, unsigned int, unsigned int, int, int, unsigned int, int, int *, int, int))loc_60915174)(
             v19,
             v31,
             v14,
             v29,
             v30,
             a5,
             (FIELD_U32(a1, 68) + 4095) & 0xFFFFF000,
             128,
             &v32,
             (FIELD_U8(a1, 72) >> 1) & 1,
             (FIELD_U8(a1, 72) >> 2) & 1);
  }
}
