/* sub_60502C04
 * address: 0x60502C04   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60502C04(int result, int *a2, int a3)
{
  int v3; // r4
  int v5; // r7
  int v6; // r1
  int v7; // r6
  _BYTE *v8; // r6
  int v9; // t1
  int v10; // r0
  int v11; // r0

  v3 = a3;
  v5 = result;
  if ( a3 >= 1 )
  {
    do
    {
      v6 = *a2;
      v7 = v5;
      if ( (unsigned int)*a2 < 0x100 )
        v7 = v5 + v6;
      v9 = FIELD_U8(v7, 500);
      v8 = (_BYTE *)(v7 + 500);
      result = v9;
      if ( !v9 )
      {
        v10 = sub_608DE61C(v5 + 52, v6);
        if ( v10 )
          v11 = v10 - FIELD_U32(v5, 64);
        else
          v11 = 0;
        result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v11 + 40))(v11, 1);
        *v8 = 1;
      }
      --v3;
      ++a2;
    }
    while ( v3 );
  }
  return result;
}
