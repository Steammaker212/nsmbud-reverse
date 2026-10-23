/* sub_604453AC
 * address: 0x604453AC   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604453AC(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v6; // r1
  int result; // r0
  int v8; // r4
  int v9; // r7
  int v10; // r1
  _DWORD *v11; // r1
  int *v12; // r8
  int v13; // r9
  int v14; // t1
  int v15; // [sp+8h] [bp-30h]
  int v16; // [sp+Ch] [bp-2Ch]
  int v17; // [sp+10h] [bp-28h]

  v6 = a1[224];
  result = a1[225];
  if ( v6 > a2 )
    result += a2 << 7;
  v16 = a1[10];
  if ( v16 )
  {
    v8 = result + 52;
    v9 = result + 4;
    v15 = a1[11];
    v10 = 0;
    do
    {
      v17 = v10;
      v11 = (_DWORD *)(v15 + 12 * v10);
      if ( *v11 )
      {
        v12 = (int *)v11[2];
        v13 = 4 * *v11;
        do
        {
          v14 = *v12++;
          (*(void (__fastcall **)(int, _DWORD, unsigned int, int, int, _DWORD *))(*(_DWORD *)v14 + 32))(
            v14,
            FIELD_U32(a3, 40),
            a2,
            v9,
            v8,
            a1);
          v13 -= 4;
        }
        while ( v13 );
      }
      result = v16;
      v10 = v17 + 1;
    }
    while ( v17 + 1 != v16 );
  }
  return result;
}
