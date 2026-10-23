/* sub_608B0454
 * address: 0x608B0454   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B0454(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0
  int v9; // r11
  int *v10; // r11
  int v11; // t1
  int v12; // r5
  int i; // r7
  float v14; // s0
  int v15; // r4
  float v16; // s16
  int v17; // r0

  result = FIELD_U32(a1, 260);
  if ( result )
  {
    v9 = a1 + 4 * a2;
    v11 = FIELD_U32(v9, 388);
    v10 = (int *)(v9 + 388);
    result = v11;
    if ( v11 )
    {
      result = sub_608B0FF8(result);
      if ( result == 1 )
      {
        v12 = a5;
        result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 260) + 4))(FIELD_U32(a1, 260));
        if ( result < v12 )
          v12 = result;
        if ( v12 >= 1 )
        {
          for ( i = 0; i < v12; ++i )
          {
            v14 = sub_608D09F8(&a5, i);
            v15 = *v10;
            v16 = v14;
            v17 = sub_608C6EFC(FIELD_U32(a1, 260), a4, i, v14);
            result = sub_608B0F94(v15, a3, v17, v16);
          }
        }
      }
    }
  }
  return result;
}
