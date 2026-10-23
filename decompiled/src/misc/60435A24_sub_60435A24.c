/* sub_60435A24
 * address: 0x60435A24   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60435A24(int a1, int a2, int a3, int a4, unsigned int *a5)
{
  int v8; // r0
  int v9; // r3
  int v10; // r2
  int v11; // r1
  int v12; // r5
  unsigned int v13; // r2
  unsigned int v14; // r0
  bool v15; // zf
  int v16; // r2
  int v17; // r7
  unsigned int result; // r0
  bool v19; // zf
  int v20; // r2
  int v21; // r7

  v8 = FIELD_U32(a2, 44);
  v9 = FIELD_U32(a3, 56);
  v15 = (FIELD_U8(a3, 4) & 1) == 0;
  v10 = 0;
  v11 = *(_DWORD *)(FIELD_U32(a2, 16) + 16);
  if ( !v15 )
    v10 = FIELD_U32(a3, 40);
  sub_609187FC(v8, v11, v10, v9, 0);
  v12 = FIELD_U32(a4, 24);
  sub_60959828(v12, FIELD_U32(a2, 44), a3);
  v14 = *a5;
  v15 = *a5 == -1;
  if ( *a5 != -1 )
  {
    v13 = a5[2];
    v15 = v13 == -1;
  }
  if ( !v15 )
  {
    v16 = v12 + 16 * v13 + 4;
    v17 = FIELD_U32(dword_60C9BBD4, 7300);
    if ( FIELD_U32(dword_60C9BBD4, 7296) > v14 )
      v17 += 2088 * v14;
    sub_60920FDC(v17 + 224, FIELD_U32(a2, 44), v16, -1, 0);
  }
  result = a5[1];
  v19 = result == -1;
  if ( result != -1 )
  {
    v13 = a5[3];
    v19 = v13 == -1;
  }
  if ( !v19 )
  {
    v20 = v12 + 16 * v13 + 4;
    v21 = FIELD_U32(dword_60C9BBD4, 7300);
    if ( FIELD_U32(dword_60C9BBD4, 7296) > result )
      v21 += 2088 * result;
    return sub_60920FDC(v21 + 224, FIELD_U32(a2, 44), v20, -1, 0);
  }
  return result;
}
