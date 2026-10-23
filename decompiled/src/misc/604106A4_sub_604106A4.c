/* sub_604106A4
 * address: 0x604106A4   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604106A4(_DWORD *a1, int a2, int a3, int a4, int *a5, int *a6, int *a7)
{
  int v11; // r4
  char v12; // r12
  int *v13; // r0
  int v14; // r7
  int v15; // r5
  int v16; // r7
  _DWORD *v17; // r0
  int *v18; // r2
  int *v19; // r5
  int v20; // lr
  int v21; // r9
  int *v22; // r7
  int *v23; // r7
  int *v24; // r7
  int *v25; // r7
  int v26; // r7
  int v27; // r12
  int v28; // r7
  int v29; // r8
  _DWORD *v30; // r2
  _DWORD *v31; // r3
  int v33; // [sp+4h] [bp-3Ch]
  int v34; // [sp+8h] [bp-38h]
  int v35; // [sp+Ch] [bp-34h]
  int v36; // [sp+10h] [bp-30h]
  int v37; // [sp+18h] [bp-28h]

  v11 = (int)(a1 + 3325);
  sead__CriticalSection__lock((int)(a1 + 3325));
  v13 = *(int **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 1u )
    ++v13;
  v14 = *v13;
  if ( ((unsigned int)&dword_60C81740 & ~(1614874364 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  v15 = v14 + 420;
  if ( !(*(int (__fastcall **)(int, int *))(*(_DWORD *)v14 + 8))(v14, &dword_60C8173C) )
    v15 = 420;
  v16 = 0;
  if ( !sub_60444DB8(*(_DWORD *)v15) )
  {
    v17 = a1 + 2479;
    if ( a1[2479] < a1[2480] )
    {
      v18 = a6;
      v37 = a4;
      v19 = a5;
      v20 = 0;
      v21 = 0;
      v22 = a6 + 1;
      if ( !a6 )
        v22 = &dword_60B3B990;
      v36 = *v22;
      v23 = a6 + 2;
      if ( !a6 )
        v23 = &dword_60B3B994;
      v35 = *v23;
      v24 = a5 + 1;
      if ( !a5 )
        v24 = &dword_60B3B960;
      v34 = *v24;
      v25 = a5 + 2;
      if ( !a5 )
        v25 = &dword_60B3B964;
      v26 = *v25;
      if ( !a6 )
        v18 = &dword_60B3B98C;
      v27 = 0;
      if ( !a5 )
        v19 = &dword_60B3B95C;
      v33 = v26;
      v28 = *v18;
      v29 = *v19;
      v30 = 0;
      if ( a7 )
      {
        v27 = *a7;
        v20 = a7[1];
        v21 = a7[2];
      }
      v31 = (_DWORD *)a1[2482];
      if ( v31 )
      {
        a1[2482] = *v31;
        v30 = v31;
      }
      *v30 = a2;
      v30[1] = v29;
      v30[2] = v34;
      v30[3] = v33;
      v30[4] = v28;
      v16 = 1;
      v30[5] = v36;
      v30[6] = v35;
      v30[7] = v27;
      v30[8] = v20;
      v30[9] = v21;
      v30[10] = a3;
      v30[11] = v37;
      if ( *v17 < a1[2480] )
        *(_DWORD *)(a1[2481] + 4 * (*v17)++) = v30;
    }
  }
  sead__CriticalSection__unlock(v11);
  return v16;
}
