/* GiantWiggler_vf67
 * address: 0x60257160   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall GiantWiggler_vf67(float *a1, int a2, int a3)
{
  char v3; // r12
  unsigned __int8 *v7; // r5
  float v8; // s16
  unsigned int v9; // r0
  int v10; // r1
  int v11; // r6
  int v12; // r6
  int v13; // r6
  int v14; // r6
  unsigned int v15; // r0

  v7 = *(unsigned __int8 **)(a3 + 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613066632 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v7 && (**(int (__fastcall ***)(unsigned __int8 *, int *))v7)(v7, &dword_60C7B378) == 1 )
  {
    FIELD_U8(a3, 110) |= 2u;
    if ( (FIELD_U8(a2, 104) & 1) != 0
      || (*(_BYTE *)((*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v7 + 80))(v7) + 2224) & 1) != 0
      || (v8 = *((float *)v7 + 28), v8 < ActiveCollider_getBottom((ActiveCollider *)a2)) )
    {
      if ( (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v7 + 1204))(v7) == 1 )
      {
        (*(void (__fastcall **)(unsigned __int8 *, float *, int))(*(_DWORD *)v7 + 1172))(v7, a1, 4);
        v9 = v7[84];
        v10 = 0;
        if ( v9 < 4 )
          v10 = (char)v9;
        *((_WORD *)a1 + v10 + 3070) = 28;
      }
      else if ( !(*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v7 + 1156))(v7) )
      {
        (*(void (__fastcall **)(unsigned __int8 *, float *, _DWORD))(*(_DWORD *)v7 + 1172))(v7, a1, 0);
      }
    }
    else
    {
      sub_60258174(a1 + 1579);
      v11 = *((_DWORD *)a1 + 1625);
      sub_60258174(v11);
      v12 = FIELD_U32(v11, 184);
      sub_60258174(v12);
      v13 = FIELD_U32(v12, 184);
      sub_60258174(v13);
      sub_60258174(FIELD_U32(v13, 184));
      (*(void (__fastcall **)(float *, unsigned __int8 *))(*(_DWORD *)a1 + 380))(a1, v7);
      v14 = 0;
      sub_602A3520(a1, "SE_EMY_YOSHI_STEP", 0);
      v15 = v7[84];
      if ( v15 < 4 )
        v14 = (char)v15;
      *((_WORD *)a1 + v14 + 3070) = 10;
      sub_6040B3B0(dword_60C9A1F0, FIELD_U8(dword_60C9A1F0, 6557));
    }
  }
}
