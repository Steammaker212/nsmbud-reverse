/* sub_60588B40
 * address: 0x60588B40   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60588B40(int a1)
{
  int result; // r0
  _DWORD v3[6]; // [sp+4h] [bp-24h] BYREF
  char v4; // [sp+1Ch] [bp-Ch]

  result = FIELD_U8(a1, 7516);
  if ( result )
  {
    if ( (FIELD_U8(a1, 20) & 0x80) == 0 )
    {
      FIELD_U32(a1, 7296) = 0;
      v3[0] = FIELD_U32(a1, 6980);
      v3[1] = FIELD_U32(a1, 6984);
      v3[2] = FIELD_U32(a1, 6988);
      v3[4] = 0;
      v3[5] = 0;
      v4 = FIELD_U8(LevelInfo_instance, 18);
      if ( sub_605829C8(dword_60CAF15C, (int)v3) == 3 )
      {
        v3[3] = 1;
        sub_60582938(dword_60CAF15C, (int)v3);
      }
    }
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAF338);
  }
  return result;
}
