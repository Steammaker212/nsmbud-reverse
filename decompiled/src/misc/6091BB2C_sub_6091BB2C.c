/* sub_6091BB2C
 * address: 0x6091BB2C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091BB2C(int a1, int a2)
{
  int v4; // r7
  int result; // r0
  int v6; // r11
  int v7; // r5
  unsigned int v8; // r4
  const char *v9; // r6
  unsigned int v10; // r8
  int *v11; // r5
  int v12; // [sp+0h] [bp-28h]

  v4 = 0;
  v12 = a1 + 4;
  do
  {
    result = sub_6091E1AC(a2, v4);
    LOBYTE(v6) = -1;
    if ( result == 1 )
    {
      result = sub_6091D910(a2, v4);
      v7 = FIELD_U32(result, 4);
      if ( v7 )
      {
        result = (*(int (__fastcall **)(int))(FIELD_U32(a1, 4) + 12))(v12);
        v8 = FIELD_U32(v7, 32);
        if ( v8 )
        {
          v9 = *(const char **)(a1 + 8);
          v10 = 0;
          v11 = (int *)(FIELD_U32(v7, 36) + 8);
          while ( 1 )
          {
            result = strcmp((const char *)*(v11 - 2), v9);
            if ( !result )
              break;
            ++v10;
            v11 += 4;
            if ( v10 >= v8 )
              goto LABEL_11;
          }
          if ( v11 != (int *)8 )
            v6 = *v11;
        }
      }
    }
LABEL_11:
    *(_BYTE *)(a1 + v4++) = v6;
  }
  while ( v4 != 4 );
  return result;
}
