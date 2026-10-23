/* sub_6085B320
 * address: 0x6085B320   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6085B320(int a1, int a2)
{
  int v4; // r6
  __int64 v5; // r8
  int v6; // r1
  char v7; // lr
  int v8; // r0
  int v9; // r2
  int v10; // r6
  int v11; // r1
  void *v12; // r6
  const void *v13; // r7
  int v14; // r1
  char v15; // lr
  int v16; // r0
  int v17; // r2
  int v18; // r1
  void *v19; // r5
  const void *v20; // r6

  v4 = FIELD_U32(a2, 192);
  v5 = *(_QWORD *)(FIELD_U32(a2, 184) + 56);
  v6 = (v5 + sub_608A7E38(*(_DWORD *)(FIELD_U32(a1, 196) + 12)) - 1) & -(int)v5;
  if ( (*(_BYTE *)v4 & 1) != 0 )
  {
    v9 = FIELD_U32(v4, 40);
    do
      v8 = v9 | (1619374972 << v7);
    while ( v9 | ((v8 - v6) << v7) );
  }
  else
  {
    v8 = FIELD_U32(v4, 40) - v6;
    FIELD_U32(v4, 40) = v8;
  }
  *(_DWORD *)(FIELD_U32(a1, 196) + 4) = v8;
  v10 = FIELD_U32(a2, 192);
  v11 = FIELD_U32(v10, 32);
  if ( v11 )
  {
    v12 = (void *)(v11 + v8);
    v13 = (const void *)sub_608A7E0C(*(_DWORD *)(FIELD_U32(a1, 196) + 12));
    qmemcpy(v12, v13, sub_608A7E38(*(_DWORD *)(FIELD_U32(a1, 196) + 12)));
    v10 = FIELD_U32(a2, 192);
  }
  v14 = (HIDWORD(v5) + sub_608A7E40(*(_DWORD *)(FIELD_U32(a1, 196) + 12)) - 1) & -HIDWORD(v5);
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    v17 = FIELD_U32(v10, 40);
    do
      v16 = v17 | (1619375128 << v15);
    while ( v17 | ((v16 - v14) << v15) );
  }
  else
  {
    v16 = FIELD_U32(v10, 40) - v14;
    FIELD_U32(v10, 40) = v16;
  }
  *(_DWORD *)(FIELD_U32(a1, 196) + 8) = v16;
  v18 = *(_DWORD *)(FIELD_U32(a2, 192) + 32);
  if ( v18 )
  {
    v19 = (void *)(v18 + v16);
    v20 = (const void *)sub_608A7E04(*(_DWORD *)(FIELD_U32(a1, 196) + 12));
    qmemcpy(v19, v20, sub_608A7E40(*(_DWORD *)(FIELD_U32(a1, 196) + 12)));
  }
}
