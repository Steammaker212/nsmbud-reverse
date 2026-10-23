/* sub_60479600
 * address: 0x60479600   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60479600(int a1, unsigned int a2, _DWORD *a3, _DWORD *a4, float a5, _DWORD *a6, void *heap)
{
  signed int v9; // r7
  int v11; // r6
  int v12; // r4
  _DWORD *v13; // r5
  int v14; // r1
  int v15; // r2
  int v16; // r1
  int v17; // r2
  void *v18; // r5
  const void *v19; // r10
  int v20; // r0
  bool v21; // cc
  signed int v22; // r0
  int v24; // [sp+18h] [bp-40h] BYREF
  int v25; // [sp+1Ch] [bp-3Ch]
  int v26; // [sp+20h] [bp-38h]

  v9 = 0;
  v11 = FIELD_U32(a1, 8);
  if ( FIELD_U32(a1, 4) > a2 )
    v11 += 832 * a2;
  sub_6091FDB0(v11, 1, 29, *a3, a3[1], 1, 1, 0, 0, 1);
  v12 = FIELD_U32(v11, 40);
  v13 = (_DWORD *)operator_new_8DE25C(0x1Cu, heap, 4);
  sub_60913BB4(v13);
  *v13 = off_60BF9C1C;
  sub_60913D88((int)v13, v12, (int)heap, 0x2000, 0);
  sub_60913A6C(&v24, v13, 0);
  v14 = v25;
  v15 = v26;
  FIELD_U32(v11, 272) = v24;
  FIELD_U32(v11, 276) = v14;
  FIELD_U32(v11, 280) = v15;
  sub_60913B04(v11 + 272, FIELD_U32(v11, 40));
  v16 = FIELD_U32(v11, 276);
  v17 = FIELD_U32(v11, 280);
  v24 = FIELD_U32(v11, 272);
  v25 = v16;
  v26 = v17;
  sub_609208DC(v11, &v24, 0);
  sub_60473624(a1 + 12, a6);
  v18 = *(void **)(v11 + 756);
  (*(void (__fastcall **)(_DWORD *))(*a6 + 12))(a6);
  v19 = (const void *)a6[1];
  if ( v18 != v19 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a6 + 12))(a6);
    v20 = a6[1];
    while ( *(_BYTE *)(v20 + v9) )
    {
      if ( !*(_BYTE *)(v20 + v9 + 1) )
      {
        ++v9;
        break;
      }
      if ( !*(_BYTE *)(v20 + v9 + 2) )
      {
        v9 += 2;
        break;
      }
      v21 = v9 + 2 < 0x80000;
      v9 += 3;
      if ( !v21 )
      {
        v9 = 0;
        break;
      }
    }
    v22 = FIELD_U32(v11, 760);
    if ( v9 >= v22 )
      v9 = v22 - 1;
    qmemcpy(v18, v19, v9);
    *((_BYTE *)v18 + v9) = 0;
  }
  FIELD_F32(v11, 828) = a5;
  FIELD_U32(v11, 744) = *a4;
  FIELD_U32(v11, 748) = a4[1];
  FIELD_U8(a1, 3561) = 1;
  return (*(int (__fastcall **)(_DWORD, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(**(_DWORD **)(a1 + 3532)
                                                                                             + 12))(
           FIELD_U32(a1, 3532),
           sub_609909D8,
           0);
}
