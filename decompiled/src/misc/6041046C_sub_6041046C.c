/* sub_6041046C
 * address: 0x6041046C   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041046C(_DWORD *a1, int a2, int a3, int *a4, int *a5, int *a6)
{
  int v10; // r4
  char v11; // r12
  int *v12; // r0
  int v13; // r7
  int v14; // r5
  int v15; // r7
  _DWORD *v16; // r0
  int *v17; // r3
  int v18; // r8
  int *v19; // r7
  int v20; // r2
  int *v21; // r7
  int v22; // r2
  int *v23; // r7
  int *v24; // r7
  int v25; // r11
  int v26; // r7
  int v27; // r3
  int v28; // r12
  int v29; // lr
  _DWORD *v30; // r6
  _DWORD *v31; // r2
  int v33; // [sp+4h] [bp-34h]
  int v34; // [sp+8h] [bp-30h]
  int v35; // [sp+Ch] [bp-2Ch]
  int v36; // [sp+10h] [bp-28h]

  v10 = (int)(a1 + 3325);
  sead__CriticalSection__lock((int)(a1 + 3325));
  v12 = *(int **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 1u )
    ++v12;
  v13 = *v12;
  if ( ((unsigned int)&dword_60C81740 & ~(1614873796 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  v14 = v13 + 420;
  if ( !(*(int (__fastcall **)(int, int *))(*(_DWORD *)v13 + 8))(v13, &dword_60C8173C) )
    v14 = 420;
  v15 = 0;
  if ( !sub_60444DB8(*(_DWORD *)v14) )
  {
    v16 = a1 + 1826;
    if ( a1[1826] < a1[1827] )
    {
      v17 = a5;
      v36 = a3;
      v18 = 0;
      v19 = a5 + 1;
      if ( !a5 )
        v19 = &dword_60B3B990;
      v20 = *v19;
      v21 = a5 + 2;
      if ( !a5 )
        v21 = &dword_60B3B994;
      v35 = v20;
      v22 = *v21;
      v23 = a4 + 1;
      v34 = v22;
      if ( !a4 )
        v23 = &dword_60B3B960;
      v33 = *v23;
      v24 = a4 + 2;
      if ( !a4 )
        v24 = &dword_60B3B964;
      if ( !a5 )
        v17 = &dword_60B3B98C;
      v25 = *v24;
      if ( !a4 )
        a4 = &dword_60B3B95C;
      v26 = *v17;
      v27 = 0;
      v28 = 0;
      v29 = *a4;
      v30 = 0;
      if ( a6 )
      {
        v27 = *a6;
        v28 = a6[1];
        v18 = a6[2];
      }
      v31 = (_DWORD *)a1[1829];
      if ( v31 )
      {
        a1[1829] = *v31;
        v30 = v31;
      }
      *v30 = a2;
      v30[1] = v29;
      v30[2] = v33;
      v30[3] = v25;
      v30[4] = v26;
      v15 = 1;
      v30[5] = v35;
      v30[6] = v34;
      v30[7] = v27;
      v30[8] = v28;
      v30[9] = v18;
      v30[10] = v36;
      if ( *v16 < a1[1827] )
        *(_DWORD *)(a1[1828] + 4 * (*v16)++) = v30;
    }
  }
  sead__CriticalSection__unlock(v10);
  return v15;
}
