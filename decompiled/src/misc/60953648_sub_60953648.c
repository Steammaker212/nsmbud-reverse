/* sub_60953648
 * address: 0x60953648   size: 724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60953648(int a1, _DWORD *a2, int *a3, _DWORD *a4, int a5)
{
  unsigned int v9; // r7
  unsigned int v10; // r1
  int result; // r0
  int *v12; // r0
  _DWORD *v13; // r1
  unsigned int v14; // r0
  int v15; // r3
  unsigned int v16; // r2
  int v17; // r3
  int v18; // r6
  int v19; // r6
  int v20; // r11
  _DWORD *v21; // r4
  int v22; // r0
  int v23; // r4
  int v24; // r2
  int *v25; // r1
  int v26; // r3
  int v27; // r1
  int v28; // r6
  int v29; // r1
  int v30; // r2
  int v31; // r1
  int v32; // r2
  bool v33; // zf
  int v34; // r1
  int v35; // r2
  int v36; // r1
  int v37; // [sp+8h] [bp-30h] BYREF
  int v38; // [sp+Ch] [bp-2Ch]
  int v39; // [sp+10h] [bp-28h]

  v9 = (a3[1] + 0xFFFF) & 0xFFFF0000;
  v10 = a2[3];
  if ( (FIELD_U8(a1, 88) & 1) == 0 )
    v9 = a3[1];
  result = 0;
  if ( v10 >= v9 )
  {
    if ( v9 < v10 )
    {
      v12 = sub_608DE574((int **)(a1 + 64));
      if ( v12 )
        v13 = (int *)((char *)v12 - FIELD_U32(a1, 76));
      else
        v13 = 0;
      v14 = a2[3] - v9;
      v13[3] = v14;
      if ( a5 == 1 )
      {
        v15 = a2[2];
        v16 = a2[1] + v9;
        *v13 = *a2;
        v13[1] = v16;
        v13[2] = v15;
        sub_608DE510((int)a2 + FIELD_U32(a1, 60), (_DWORD *)((char *)v13 + FIELD_U32(a1, 60)));
      }
      else
      {
        v17 = a2[1];
        v18 = a2[2];
        *v13 = *a2;
        v13[1] = v17;
        v13[2] = v18;
        a2[1] += v14;
        sead__ListNode__insertFront(
          (sead_ListNode *)((char *)a2 + FIELD_U32(a1, 60)),
          (sead_ListNode *)((char *)v13 + FIELD_U32(a1, 60)));
      }
      ++FIELD_U32(a1, 56);
    }
    a2[3] = v9;
    v19 = FIELD_U32(a1, 80);
    if ( v19 )
    {
      v20 = a3[4];
      v21 = (_DWORD *)operator_new_8DE25C(0x1Cu, *(void **)(a1 + 80), 4);
      sub_60913BB4((int)v21);
      *v21 = off_60BF9C1C;
      if ( !a5 )
        v20 = -v20;
      sub_60913D88((int)v21, v9, v19, v20, 4);
      sub_60913A6C(&v37, (int)v21, 0);
      v22 = v37;
      v23 = v38;
      v24 = v39;
      a2[10] = v37;
      a2[11] = v23;
      a2[12] = v24;
      goto LABEL_23;
    }
    sub_60913AD4(a2 + 10);
    v25 = *(int **)(a1 + 84);
    v22 = *a2;
    v23 = a2[1];
    v24 = a2[2];
    if ( v25 )
    {
      v26 = *v25;
      if ( *v25 )
      {
        v27 = v25[1];
        v28 = *a3;
        while ( FIELD_U32(v27, 28) != v28 )
        {
          --v26;
          v27 += 32;
          if ( !v26 )
            goto LABEL_21;
        }
        if ( FIELD_U32(v27, 8) )
        {
          sub_60913A6C(&v37, v27, 0);
          v22 = v37;
          v36 = v38;
          v24 = v39;
          a2[15] = v28;
          v23 += v36;
          goto LABEL_23;
        }
      }
      else
      {
LABEL_21:
        v28 = -1;
      }
      a2[15] = v28;
    }
LABEL_23:
    v37 = v22;
    v38 = v23;
    v39 = v24;
    sub_60913AE8((int)&v37, a3[4]);
    v29 = v38;
    v30 = v39;
    a2[4] = v37;
    a2[5] = v29;
    a2[6] = v30;
    v38 += a3[2];
    if ( a3[3] )
    {
      sub_60913AE8((int)&v37, a3[4]);
      v31 = v38;
      v32 = v39;
      a2[7] = v37;
      a2[8] = v31;
      a2[9] = v32;
    }
    else
    {
      sub_60913AD4(a2 + 7);
    }
    v33 = a4 == 0;
    if ( a4 )
      v33 = a3[5] == 0;
    if ( !v33 )
    {
      sub_60913AE8((int)&v37, a3[6]);
      v34 = v38;
      v35 = v39;
      *a4 = v37;
      a4[1] = v34;
      a4[2] = v35;
      v38 += a3[5];
    }
    sead__ListNode__erase((_DWORD *)((char *)a2 + FIELD_U32(a1, 60)));
    --FIELD_U32(a1, 56);
    sead__ListNode__insertFront((sead_ListNode *)(a1 + 32), (sead_ListNode *)((char *)a2 + FIELD_U32(a1, 44)));
    ++FIELD_U32(a1, 40);
    FIELD_U32(a1, 20) += a2[3];
    return 1;
  }
  return result;
}
