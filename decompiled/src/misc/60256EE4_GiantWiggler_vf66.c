/* GiantWiggler_vf66
 * address: 0x60256EE4   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall GiantWiggler_vf66(float *a1, int a2, int a3)
{
  char v3; // r12
  int *v7; // r5
  float v8; // r0
  float *v9; // r1
  int v10; // r2
  float v11; // s16
  float Bottom; // s0
  unsigned int v13; // r0
  int v14; // r1
  int v15; // r6
  int v16; // r6
  int v17; // r6
  int v18; // r6
  unsigned int v19; // r0

  v7 = *(int **)(a3 + 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613065996 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( !v7 || (*(int (__fastcall **)(int *, int *))*v7)(v7, &dword_60C7B378) != 1 )
    return;
  FIELD_U8(a3, 110) |= 2u;
  if ( FIELD_U32(a3, 140) == 10 )
    goto LABEL_7;
  if ( (FIELD_U8(a2, 104) & 1) == 0 )
  {
    if ( (*((_BYTE *)v7 + 1213) & 0x20) != 0 )
    {
      v11 = *((float *)v7 + 28);
      Bottom = ActiveCollider_getCenterY((ActiveCollider *)a2) + 16.0;
LABEL_13:
      if ( v11 >= Bottom )
      {
        sub_60258174(a1 + 1579);
        v15 = *((_DWORD *)a1 + 1625);
        sub_60258174(v15);
        v16 = FIELD_U32(v15, 184);
        sub_60258174(v16);
        v17 = FIELD_U32(v16, 184);
        sub_60258174(v17);
        sub_60258174(FIELD_U32(v17, 184));
        (*(void (__fastcall **)(float *, int *))(*(_DWORD *)a1 + 372))(a1, v7);
        v18 = 0;
        sub_602A3520(a1, "SE_EMY_CMN_STEP", 0);
        v19 = *((unsigned __int8 *)v7 + 84);
        if ( v19 < 4 )
          v18 = (char)v19;
        *((_WORD *)a1 + v18 + 3070) = 10;
        sub_6040B3B0(dword_60C9A1F0, FIELD_U8(dword_60C9A1F0, 6557));
        return;
      }
      goto LABEL_14;
    }
    if ( (*(_BYTE *)((*(int (__fastcall **)(int *))(*v7 + 80))(v7) + 2224) & 1) == 0 )
    {
      v11 = *((float *)v7 + 28);
      Bottom = ActiveCollider_getBottom((ActiveCollider *)a2);
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( sub_6075EDF8(v7) == 1 )
  {
    v8 = *(float *)v7;
    v9 = a1;
    v10 = 2;
    goto LABEL_16;
  }
  if ( (*(int (__fastcall **)(int *))(*v7 + 1204))(v7) == 1 )
  {
LABEL_7:
    v8 = *(float *)v7;
    v9 = a1;
    v10 = 4;
LABEL_16:
    (*(void (__fastcall **)(int *, float *, int))(LODWORD(v8) + 0x494))(v7, v9, v10);
    v13 = *((unsigned __int8 *)v7 + 84);
    v14 = 0;
    if ( v13 < 4 )
      v14 = (char)v13;
    *((_WORD *)a1 + v14 + 3070) = 28;
    return;
  }
  if ( !(*(int (__fastcall **)(int *))(*v7 + 1156))(v7) )
    (*(void (__fastcall **)(int *, float *, _DWORD))(*v7 + 1172))(v7, a1, 0);
}
