/* sub_608F7394
 * address: 0x608F7394   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608F7394(int a1, unsigned int a2)
{
  unsigned int v3; // r5
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r1
  unsigned int v8; // r6
  int v9; // r1
  int v10; // r2
  unsigned int v11; // r0
  unsigned int *v12; // r6
  int v13; // r1
  int v14; // r0
  int v15; // r0
  int *v16; // r7
  int v17; // r1
  int v18; // r0
  int v19; // r2
  int v20; // r0
  int *v21; // r1
  int v22; // t1
  int v23; // r0
  int v25; // r2
  unsigned int v26; // r5
  _DWORD *v27; // r8
  unsigned int v28; // [sp+0h] [bp-28h] BYREF
  unsigned int v29; // [sp+4h] [bp-24h] BYREF

  v3 = a2;
  v4 = FIELD_U8(a1, 125);
  if ( v4 == 1 )
    goto LABEL_13;
  if ( v4 == 2 )
  {
    if ( FIELD_S32(a1, 136) <= 1 )
      goto LABEL_13;
LABEL_6:
    v5 = FIELD_U32(a1, 32);
    if ( FIELD_U32(a1, 80) != 1 )
      v5 -= 160;
    do
    {
      a2 += FIELD_U16(a2, 10) + FIELD_U32(a2, 12) + 16;
      if ( a2 >= v5 + FIELD_U32(a1, 28) )
      {
        v28 = a2;
        goto LABEL_25;
      }
    }
    while ( FIELD_U16(a2, 8) != 0xFFFF );
    v28 = a2;
    v6 = FIELD_U32(a1, 140);
    v7 = *(_DWORD *)(v6 + a2);
    v8 = v7 - v6;
    if ( v7 == a1 + 128 )
      v8 = 0;
    v29 = v8;
    goto LABEL_21;
  }
  if ( 3 * FIELD_U32(a1, 136) > FIELD_U32(a1, 152) + 3 )
    goto LABEL_6;
LABEL_13:
  v29 = 0;
  v9 = FIELD_U32(a1, 132);
  if ( v9 == a1 + 128 )
  {
LABEL_25:
    v16 = (int *)(a1 + 136);
    v15 = FIELD_U32(a1, 136);
    if ( !v15 )
      goto LABEL_30;
    v17 = 0;
    if ( v15 >= 1 )
    {
      v18 = FIELD_U32(a1, 128);
      if ( v18 )
        v17 = v18 - FIELD_U32(a1, 140);
    }
    v19 = v17 + FIELD_U16(v17, 10);
    v22 = FIELD_U32(v17, 12);
    v21 = (int *)(v17 + 12);
    v20 = v22;
    if ( v19 + v22 + 16 == v3 )
    {
      v16 = v21;
      v23 = v20 + FIELD_U16(v3, 10) + FIELD_U32(v3, 12) + 16;
    }
    else
    {
LABEL_30:
      FIELD_U16(v3, 8) = -1;
      sead__ListNode__insertFront((sead_ListNode *)(a1 + 128), (sead_ListNode *)(FIELD_U32(a1, 140) + v3));
      v23 = FIELD_U32(a1, 136) + 1;
    }
    v8 = v3;
    goto LABEL_34;
  }
  v10 = FIELD_U32(a1, 140);
  v11 = v9 - v10;
  while ( 1 )
  {
    v12 = &v29;
    if ( v11 > v3 )
      v12 = &v28;
    *v12 = v11;
    if ( v11 > v3 )
      break;
    v9 = FIELD_U32(v9, 4);
    v11 = v9 - v10;
    if ( v9 - v10 == a1 + 128 - v10 )
      goto LABEL_25;
  }
  v8 = v29;
LABEL_21:
  v13 = 0;
  if ( v8 )
  {
    v14 = FIELD_U32(v8, 12);
    if ( v8 + FIELD_U16(v8, 10) + v14 + 16 == v3 )
    {
      v13 = 1;
      FIELD_U32(v8, 12) = v14 + FIELD_U16(v3, 10) + FIELD_U32(v3, 12) + 16;
    }
    else
    {
      v8 = v3;
    }
  }
  else
  {
    v8 = v3;
  }
  v25 = FIELD_U32(v8, 12);
  v26 = v28;
  if ( v8 + FIELD_U16(v8, 10) + v25 + 16 == v28 )
  {
    if ( v13 == 1 )
    {
      v16 = (int *)(a1 + 136);
      v27 = (_DWORD *)(a1 + 140);
    }
    else
    {
      FIELD_U16(v8, 8) = -1;
      v27 = (_DWORD *)(a1 + 140);
      sead__ListNode__insertFront(
        (sead_ListNode *)(FIELD_U32(a1, 140) + v26),
        (sead_ListNode *)(FIELD_U32(a1, 140) + v8));
      v16 = (int *)(a1 + 136);
      ++FIELD_U32(a1, 136);
      v25 = FIELD_U32(v8, 12);
    }
    FIELD_U32(v8, 12) = v25 + FIELD_U16(v26, 10) + FIELD_U32(v26, 12) + 16;
    sead__ListNode__erase((_DWORD *)(*v27 + v26));
    v23 = *v16 - 1;
  }
  else
  {
    if ( v13 )
      return v8;
    FIELD_U16(v8, 8) = -1;
    sead__ListNode__insertFront(
      (sead_ListNode *)(FIELD_U32(a1, 140) + v26),
      (sead_ListNode *)(FIELD_U32(a1, 140) + v8));
    v16 = (int *)(a1 + 136);
    v23 = FIELD_U32(a1, 136) + 1;
  }
LABEL_34:
  *v16 = v23;
  return v8;
}
