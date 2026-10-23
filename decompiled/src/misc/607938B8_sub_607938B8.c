/* sub_607938B8
 * address: 0x607938B8   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607938B8(int a1, int a2, int a3, int a4)
{
  int v5; // r1
  int v6; // r4
  void *v7; // r9
  int *v8; // r7
  int *v9; // r5
  const void *v10; // r8
  signed int v11; // r7
  int v12; // r0
  bool v13; // cc
  int *v14; // r5
  int *v15; // r7
  int *v16; // r5
  const void *v17; // t1
  int v18; // r0
  int *v19; // r5
  int *v20; // r7
  int *v21; // r5
  const void *v22; // t1
  int v23; // r0
  signed int v24; // r0

  if ( (*(_BYTE *)(a1 + 4 * a4 + 197) & 4) == 0 )
  {
    v5 = FIELD_U32(a1, 212);
    v6 = 0;
    FIELD_U32(a1, 212) = 0;
    FIELD_U32(a1, 216) = v5;
    return v6;
  }
  v6 = 1;
  switch ( a3 )
  {
    case 9:
      v7 = *(void **)(a2 + 4);
      v14 = &dword_60CC4900[2 * FIELD_U32(a1, 212)];
      v15 = v14 + 12;
      (*(void (__fastcall **)(int *))(v14[12] + 12))(v14 + 12);
      v17 = (const void *)v14[13];
      v16 = v14 + 13;
      v10 = v17;
      if ( v7 == v17 )
        return v6;
      (*(void (__fastcall **)(int *))(*v15 + 12))(v15);
      v11 = 0;
      v18 = *v16;
      while ( *(_BYTE *)(v18 + v11) )
      {
        if ( !*(_BYTE *)(v18 + v11 + 1) )
        {
LABEL_27:
          ++v11;
          goto LABEL_29;
        }
        if ( !*(_BYTE *)(v18 + v11 + 2) )
        {
LABEL_28:
          v11 += 2;
          goto LABEL_29;
        }
        v13 = v11 + 2 <= 0x7FFFF;
        v11 += 3;
        if ( !v13 )
        {
          v11 = 0;
          goto LABEL_29;
        }
      }
      break;
    case 8:
      v7 = *(void **)(a2 + 4);
      v19 = &dword_60CC4900[2 * FIELD_U32(a1, 212)];
      v20 = v19 + 6;
      (*(void (__fastcall **)(int *))(v19[6] + 12))(v19 + 6);
      v22 = (const void *)v19[7];
      v21 = v19 + 7;
      v10 = v22;
      if ( v7 == v22 )
        return v6;
      (*(void (__fastcall **)(int *))(*v20 + 12))(v20);
      v11 = 0;
      v23 = *v21;
      while ( *(_BYTE *)(v23 + v11) )
      {
        if ( !*(_BYTE *)(v23 + v11 + 1) )
          goto LABEL_27;
        if ( !*(_BYTE *)(v23 + v11 + 2) )
          goto LABEL_28;
        v13 = v11 + 2 <= 0x7FFFF;
        v11 += 3;
        if ( !v13 )
        {
          v11 = 0;
          goto LABEL_29;
        }
      }
      break;
    case 5:
      v7 = *(void **)(a2 + 4);
      v8 = &dword_60CC4900[2 * FIELD_U32(a1, 212)];
      (*(void (__fastcall **)(int *))(*v8 + 12))(v8);
      v9 = v8 + 1;
      v10 = (const void *)v8[1];
      if ( v7 == v10 )
        return v6;
      (*(void (__fastcall **)(int *))(*v8 + 12))(v8);
      v11 = 0;
      v12 = *v9;
      while ( *(_BYTE *)(v12 + v11) )
      {
        if ( !*(_BYTE *)(v12 + v11 + 1) )
          goto LABEL_27;
        if ( !*(_BYTE *)(v12 + v11 + 2) )
          goto LABEL_28;
        v13 = v11 + 2 <= 0x7FFFF;
        v11 += 3;
        if ( !v13 )
        {
          v11 = 0;
          goto LABEL_29;
        }
      }
      break;
    default:
      return v6;
  }
LABEL_29:
  v24 = FIELD_U32(a2, 8);
  if ( v11 >= v24 )
    v11 = v24 - 1;
  qmemcpy(v7, v10, v11);
  *((_BYTE *)v7 + v11) = 0;
  return v6;
}
