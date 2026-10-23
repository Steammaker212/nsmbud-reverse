/* sub_609A9B80
 * address: 0x609A9B80   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A9B80(_DWORD *a1, int a2, int a3)
{
  unsigned int v3; // r3
  int *v4; // r1
  unsigned int v5; // r5
  int v6; // lr
  int v7; // r12
  unsigned int v8; // r3
  int v9; // r1
  unsigned int v10; // r4
  int v11; // r3
  unsigned int v12; // r4
  unsigned int *v13; // r0
  unsigned int v14; // r1

  v3 = a1[40];
  v4 = (int *)(a3 + 8);
  v5 = a1[44];
  LOBYTE(v6) = 2;
  if ( v3 < 5 )
    v4 = (int *)((char *)&unk_60B75470 + 4 * v3);
  v7 = *v4;
  if ( v5 <= 5 )
    v6 = dword_60B75450[v5];
  v8 = a1[48];
  LOBYTE(v9) = 3;
  if ( v8 <= 5 )
    v9 = dword_60B75450[v8];
  v10 = a1[52];
  LOBYTE(v11) = 4;
  if ( v10 <= 5 )
    v11 = dword_60B75450[v10];
  v12 = a1[56];
  LOBYTE(a1) = 5;
  if ( v12 <= 5 )
    a1 = (_DWORD *)dword_60B75450[v12];
  FIELD_U32(a3, 8) = v7;
  FIELD_U8(a3, 340) = v6;
  FIELD_U8(a3, 341) = v9;
  FIELD_U8(a3, 342) = v11;
  FIELD_U8(a3, 343) = (_BYTE)a1;
  FIELD_U8(a3, 348) |= 2u;
  v13 = (unsigned int *)(a3 + 344);
  do
    v14 = __ldrex(v13);
  while ( __strex(v14 | 1, v13) );
  FIELD_U8(a3, 772) = 1;
  return 1;
}
