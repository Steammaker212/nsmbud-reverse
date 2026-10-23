/* sub_6042AA40
 * address: 0x6042AA40   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042AA40(_DWORD *a1, int a2, unsigned int a3, unsigned int a4)
{
  int v7; // r5
  __int64 v8; // r6
  int v9; // r0
  unsigned int v10; // r6
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int *v14; // r1
  int v15; // r6
  unsigned int v16; // r0
  _DWORD *v17; // r8
  int v18; // r11
  int v19; // r1
  _BYTE *v20; // r1
  int v21; // r0
  unsigned int v23; // [sp+4h] [bp-34h]
  char v24; // [sp+8h] [bp-30h]
  int v25; // [sp+Ch] [bp-2Ch]

  v7 = (int)(a1 + 270);
  sead__CriticalSection__lock((int)(a1 + 270));
  v8 = qword_60CCFB50 / 500;
  v9 = a1[279];
  v25 = a2;
  if ( (v9 & 1) != 0 )
  {
    while ( 1 )
    {
      if ( (v9 & 2) == 0 )
      {
        v11 = 2;
        v10 = 1;
        goto LABEL_9;
      }
      if ( (v9 & 4) == 0 )
        break;
      sead__CriticalSection__unlock(v7);
      sub_609085CC(v8, HIDWORD(v8), v12, v13);
      sead__CriticalSection__lock(v7);
      v9 = a1[279];
      if ( (v9 & 1) == 0 )
      {
        v11 = 1;
        v10 = 0;
        goto LABEL_9;
      }
    }
    v11 = 4;
    v10 = 2;
  }
  else
  {
    v10 = 0;
    v11 = 1;
  }
LABEL_9:
  v24 = v10;
  a1[279] = v11 | v9;
  sead__CriticalSection__unlock(v7);
  v14 = (int *)a1[267];
  if ( a1[266] > v10 )
    v14 += v10;
  v15 = *v14;
  v16 = a3;
  if ( a3 >= 6 )
    v16 = 0;
  v17 = &a1[14 * v16];
  v23 = v17[183];
  v18 = v17[184];
  sead__CriticalSection__lock((int)(v17 + 187));
  v19 = v17[184];
  if ( v17[183] > a4 )
    v19 += 72 * a4;
  FIELD_U8(v19, 1) = 0;
  v20 = (_BYTE *)v17[184];
  if ( v17[183] > a4 )
    v20 += 72 * a4;
  *v20 = 1;
  sead__CriticalSection__unlock((int)(v17 + 187));
  if ( v23 > a4 )
    v18 += 72 * a4;
  v21 = operator_new_8DE25C(0xDCu, *(void **)(v18 + 8), 4);
  FIELD_U32(v18, 4) = sub_60420030(v21, v25, *(void **)(v18 + 12), 1, v15);
  (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 44))(v15);
  sead__CriticalSection__lock(v7);
  a1[279] &= ~(1 << v24);
  sead__CriticalSection__unlock(v7);
  return FIELD_U32(v18, 4);
}
