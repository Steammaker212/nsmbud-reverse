/* sub_60938F1C
 * address: 0x60938F1C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60938F1C(int a1, unsigned int a2)
{
  int result; // r0
  int v5; // r7
  int i; // r6
  int v7; // r2
  unsigned int v8; // r2
  int v9; // r0
  int v10; // r2

  result = FIELD_U8(a1, 16);
  if ( !result )
  {
    result = FIELD_U32(a1, 12);
    if ( result >= 1 )
    {
      v5 = 0;
      for ( i = 0; i < result; ++i )
      {
        if ( a2 != i )
        {
          v7 = FIELD_U32(a1, 28);
          if ( FIELD_U32(a1, 24) > a2 )
            v7 += 28 * a2;
          if ( (**(int (__fastcall ***)(int, int, int, _DWORD, float))a1)(a1, i, v7, 0, 0.0) == 1 )
          {
            v8 = FIELD_U32(a1, 24);
            v9 = FIELD_U32(a1, 28);
            if ( v8 > i )
              v9 += v5;
            sub_60948064(v9);
            v10 = FIELD_U32(a1, 28);
            if ( FIELD_U32(a1, 24) > a2 )
              v10 += 28 * a2;
            (*(void (__fastcall **)(int, int, int, _DWORD, float))(*(_DWORD *)a1 + 4))(a1, i, v10, 0, 0.0);
          }
        }
        result = FIELD_U32(a1, 12);
        v5 += 28;
      }
    }
  }
  return result;
}
