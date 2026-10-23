/* sub_608B87C4
 * address: 0x608B87C4   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608B87C4(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int result; // r0
  int v7; // r0
  int v8; // r1
  unsigned int v9; // r1
  unsigned int v10; // r1
  unsigned int v11; // r1
  unsigned int v12; // r1
  int v13; // r4
  unsigned int v14; // t1

  result = FIELD_U8(a1, 36);
  if ( result )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = *(_DWORD *)(a1 + 4 * v7 + 244);
      if ( v8 )
      {
        v9 = FIELD_U32(v8, 100);
        if ( v9 >= a2 && v9 <= a3 )
          break;
      }
      if ( ++v7 >= 16 )
        goto LABEL_9;
    }
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
LABEL_9:
    v10 = FIELD_U32(a1, 408);
    if ( v10 >= a2 && v10 <= a3 )
      sub_608B6C94(a1 + 408);
    v11 = FIELD_U32(a1, 420);
    if ( v11 >= a2 && v11 <= a3 )
      sub_608B6C94(a1 + 420);
    v12 = FIELD_U32(a1, 432);
    if ( v12 >= a2 && v12 <= a3 )
      sub_608B6C94(a1 + 432);
    v14 = FIELD_U32(a1, 444);
    v13 = a1 + 444;
    result = v14;
    if ( v14 >= a2 && result <= a3 )
      return sub_608B6C94(v13);
  }
  return result;
}
