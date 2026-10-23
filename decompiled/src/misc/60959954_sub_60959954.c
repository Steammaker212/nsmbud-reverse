/* sub_60959954
 * address: 0x60959954   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60959954(int *a1, int a2)
{
  int v4; // r9
  int v5; // r8
  int v6; // r7
  int v7; // r4
  unsigned int v8; // r6
  __int16 v9; // r0
  int v10; // r2
  int v11; // r0
  int *v12; // r1
  int v13; // r5
  const void *v14; // r6
  int v15; // r2
  int v16; // r1
  int v18[11]; // [sp+1Ch] [bp-2Ch] BYREF

  v4 = FIELD_U16(a2, 22);
  v5 = FIELD_U32(a2, 36);
  v6 = FIELD_U32(a2, 40);
  v7 = FIELD_U32(a2, 44);
  v8 = FIELD_U32(a2, 48);
  v9 = sub_60971380(FIELD_U32(a2, 28));
  switch ( FIELD_U8(a2, 92) )
  {
    case 0:
      sub_6091FDB0((int)a1, 0, v9, v5, 1, 1, v4, 0, 0, 1);
      break;
    case 1:
      sub_6091FDB0((int)a1, 1, v9, v5, v6, 1, v4, 0, 0, 1);
      break;
    case 2:
      sub_6091FDB0((int)a1, 2, v9, v5, v6, v7, v4, 0, 0, 1);
      break;
    case 3:
      sub_6091FDB0((int)a1, 8, v9, v5, v6, 6, v4, 0, 0, 1);
      break;
    case 4:
      sub_6091FDB0((int)a1, 3, v9, v5, v8, 1, v4, 0, 0, 1);
      break;
    case 5:
      sub_6091FDB0((int)a1, 4, v9, v5, v6, v8, v4, 0, 0, 1);
      break;
    case 8:
      sub_60920CE4((int)a1, v9, v5, v6, v8 / 6, v4);
      break;
    default:
      break;
  }
  v10 = FIELD_U32(a2, 136);
  v11 = FIELD_U32(a2, 104);
  v12 = *(int **)(a2 + 112);
  v13 = FIELD_U32(a2, 144);
  v14 = *(const void **)(v10 + 8);
  v15 = FIELD_U32(v11, 16);
  v16 = *v12;
  v18[0] = **(_DWORD **)(v11 + 40);
  v18[1] = v16 - (v15 + 16);
  v18[2] = 0;
  sub_609208DC(a1, v18, 1);
  return sub_60917974((int)(a1 + 16), v14, v13);
}
