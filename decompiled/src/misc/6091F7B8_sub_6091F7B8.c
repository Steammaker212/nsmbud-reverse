/* sub_6091F7B8
 * address: 0x6091F7B8   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091F7B8(int a1)
{
  int result; // r0
  int v3; // r0
  signed int *v4; // r1
  unsigned int v5; // r0
  char *v6; // r5
  int v7; // r2
  int *v8; // r3
  int v9; // r0
  int v10; // r1
  _BYTE **v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r3
  _BYTE *v14; // r4
  char v15; // t1
  _DWORD v16[2]; // [sp+8h] [bp-420h] BYREF
  _BYTE v17[1048]; // [sp+10h] [bp-418h] BYREF

  result = FIELD_U8(a1, 24);
  if ( (result & 2) != 0 )
  {
    v3 = FIELD_U32(a1, 40);
    if ( v3 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
      FIELD_U32(a1, 40) = 0;
    }
    v4 = *(signed int **)(a1 + 28);
    v5 = FIELD_U32(a1, 20);
    v6 = v17;
    v7 = v4[21];
    v8 = (int *)v7;
    if ( v4[20] > v5 )
      v8 = (int *)(v7 + 4 * v5);
    v9 = *v8;
    v16[0] = &sead__SafeStringBase__vtable;
    v16[1] = v9;
    FIELD_U32(a1, 40) = sub_60970920((int)v16, v4[23], v7, v4[18], v17, *(void **)(dword_60CD0B50 + 24));
    v10 = FIELD_U32(a1, 28);
    result = FIELD_U32(v10, 72);
    if ( result )
    {
      v11 = (_BYTE **)(FIELD_U32(v10, 76) + 48);
      do
      {
        v12 = FIELD_U32(a1, 20);
        v13 = (unsigned int)*(v11 - 1);
        v14 = *v11;
        v11 += 13;
        if ( v13 > v12 )
          v14 += v12;
        v15 = *v6++;
        --result;
        *v14 = v15;
      }
      while ( result );
    }
  }
  return result;
}
