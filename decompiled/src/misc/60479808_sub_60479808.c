/* sub_60479808
 * address: 0x60479808   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60479808(int a1, unsigned int a2, _DWORD *a3, _DWORD *a4, void *heap)
{
  _DWORD *v7; // r6
  int v8; // r7
  _DWORD *v9; // r4
  int v10; // r1
  int v11; // r2
  int v12; // r1
  int v13; // r2
  int result; // r0
  int v15; // [sp+18h] [bp-30h] BYREF
  int v16; // [sp+1Ch] [bp-2Ch]
  int v17; // [sp+20h] [bp-28h]

  v7 = *(_DWORD **)(a1 + 8);
  if ( FIELD_U32(a1, 4) > a2 )
    v7 += 208 * a2;
  sub_6091FDB0(v7, 1, 29, *a3, a3[1], 1, 1, 0, 0, 1);
  v8 = v7[10];
  v9 = (_DWORD *)operator_new_8DE25C(0x1Cu, heap, 4);
  sub_60913BB4(v9);
  *v9 = off_60BF9C1C;
  sub_60913D88((int)v9, v8, (int)heap, 0x2000, 0);
  sub_60913A6C(&v15, v9, 0);
  v10 = v16;
  v11 = v17;
  v7[68] = v15;
  v7[69] = v10;
  v7[70] = v11;
  sub_60913B04(v7 + 68, v7[10]);
  v12 = v7[69];
  v13 = v7[70];
  v15 = v7[68];
  v16 = v12;
  v17 = v13;
  sub_609208DC(v7, &v15, 0);
  v7[186] = *a4;
  result = a4[1];
  v7[187] = result;
  FIELD_U8(a1, 3561) = 0;
  return result;
}
