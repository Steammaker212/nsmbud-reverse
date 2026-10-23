/* sub_602F07A4
 * address: 0x602F07A4   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F07A4(int a1, int a2, int a3)
{
  int v5; // r6
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r4
  int *v10; // r7
  signed int v11; // r4
  int v12; // r6

  v5 = a2;
  if ( FIELD_U8(a1, 7529) )
    return sub_602EE7D8(a1, a3, 0xFFFFFFFF, 0);
  if ( (unsigned int)FIELD_U8(a2, 533) - 1 > 1 )
  {
    v8 = FIELD_U8(a2, 84);
    v7 = 1;
    if ( v8 <= 3 )
    {
      v9 = *(_DWORD *)(PlayerMgr_instance + 4 * v8 + 32);
      if ( v9 )
      {
        v7 = sub_60285510(*(_DWORD *)(PlayerMgr_instance + 4 * v8 + 32));
        v5 = v9;
      }
    }
  }
  else
  {
    v7 = sub_60285510(a2);
  }
  v10 = *(int **)(a1 + 56);
  v11 = sub_602856EC(v10 + 1573, v7);
  if ( v11 >= 8 )
    SE_SYS_NICE_S_ref();
  v12 = FIELD_S8(v5, 84);
  sub_60022760(0.0, 24.0, dword_60C7F52C, a1, v11, v12);
  sub_602EE7D8(a1, a3, 0xFFFFFFFF, 0);
  return (*(int (__fastcall **)(int *, int))(*v10 + 68))(v10, v12);
}
