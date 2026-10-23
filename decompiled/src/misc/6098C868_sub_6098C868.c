/* sub_6098C868
 * address: 0x6098C868   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6098C868(_DWORD *a1)
{
  float v2; // s0
  _DWORD *v3; // r6
  float v4; // s16
  _DWORD *v5; // r5
  int v6; // r0
  int v7; // r4
  float v8; // s0
  bool v9; // zf
  char v10; // r0
  char v11; // r1
  int *v12; // r2
  int v13; // r3
  int *v14; // r2
  int v15; // r3
  char v16; // r0

  v2 = (*(float (__fastcall **)(_DWORD *))(*a1 + 124))(a1);
  v3 = (_DWORD *)a1[16];
  v4 = v2;
  v5 = a1 + 15;
  if ( v3 != a1 + 15 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = (int)(v3 - 9);
        v6 = *(v3 - 9);
        v3 = (_DWORD *)v3[1];
        (*(void (__fastcall **)(int))(v6 + 20))(v7);
        v8 = FIELD_F32(v7, 44);
        v9 = v8 == 0.0;
        if ( v8 != 0.0 )
          v9 = FIELD_U8(v7, 20) == 0;
        if ( v9 )
          break;
        (*(void (__fastcall **)(int, float))(*(_DWORD *)v7 + 12))(v7, v4);
        if ( v3 == v5 )
          return;
      }
      v10 = FIELD_U8(v7, 51);
      if ( (v10 & 2) != 0 )
        break;
      sub_608502F4(v7, 0);
      FIELD_U32(v7, 44) = 0;
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(v7 + 52) + 76))(FIELD_U32(v7, 52), v7);
      v11 = FIELD_U8(v7, 51);
      FIELD_U8(v7, 51) = v11 & 0xF0;
      if ( (v11 & 1) != 0 )
      {
        v16 = v11 & 0xF0 | 2;
LABEL_17:
        FIELD_U8(v7, 51) = v16;
        goto LABEL_18;
      }
      if ( (_DWORD *)(v7 + 36) == v5 )
      {
LABEL_18:
        if ( v3 == v5 )
          return;
      }
      else
      {
        v12 = *(int **)(v7 + 40);
        v13 = *v12;
        *(_DWORD *)(FIELD_U32(v7, 36) + 4) = v12;
        *v12 = FIELD_U32(v7, 36);
        FIELD_U32(v13, 4) = v7 + 36;
        FIELD_U32(v7, 36) = v13;
        if ( v3 == v5 )
          return;
      }
    }
    if ( (_DWORD *)(v7 + 36) != v5 )
    {
      v14 = *(int **)(v7 + 40);
      v15 = *v14;
      *(_DWORD *)(FIELD_U32(v7, 36) + 4) = v14;
      *v14 = FIELD_U32(v7, 36);
      FIELD_U32(v15, 4) = v7 + 36;
      FIELD_U32(v7, 36) = v15;
      v10 = FIELD_U8(v7, 51);
    }
    v16 = v10 & 0xF0;
    goto LABEL_17;
  }
}
