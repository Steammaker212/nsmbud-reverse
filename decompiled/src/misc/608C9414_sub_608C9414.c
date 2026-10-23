/* sub_608C9414
 * address: 0x608C9414   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C9414(int a1)
{
  int result; // r0
  bool v3; // zf
  int v4; // r0
  void (__fastcall *v5)(int, _DWORD, _DWORD); // r3
  int v6; // r6
  int i; // r5
  int v8; // r1
  int v9; // r6
  int v10; // r5
  int v11; // r0
  int (__fastcall *v12)(int, int, _DWORD); // r3

  result = FIELD_U8(a1, 412);
  v3 = result == 0;
  if ( result )
  {
    result = FIELD_U8(a1, 414);
    v3 = result == 0;
  }
  if ( !v3 )
  {
    result = FIELD_U32(a1, 400);
    if ( result >= 1 )
    {
      v4 = FIELD_U32(a1, 420);
      if ( v4 && (unsigned int)(FIELD_U32(v4, 28) - 1) >= 2 )
      {
        v5 = *(void (__fastcall **)(int, _DWORD, _DWORD))(a1 + 404);
        if ( v5 )
          v5(a1, 0, FIELD_U32(a1, 408));
        FIELD_U8(a1, 414) = 0;
        FIELD_U8(a1, 413) = 0;
        return 0;
      }
      else
      {
        v6 = 0;
        for ( i = a1; ; i += 200 )
        {
          result = sub_608CB4C0(i);
          v8 = FIELD_U32(a1, 400);
          if ( !result )
            break;
          if ( ++v6 >= v8 )
            return result;
        }
        if ( v8 >= 1 )
        {
          v9 = 0;
          v10 = a1;
          do
          {
            sub_608CB57C(v10);
            result = FIELD_U32(a1, 400);
            ++v9;
            v10 += 200;
          }
          while ( v9 < result );
        }
        FIELD_U32(a1, 400) = 0;
        FIELD_U8(a1, 412) = 0;
        v11 = sub_608CAEDC(result);
        result = sub_608CB260(v11, a1);
        v12 = *(int (__fastcall **)(int, int, _DWORD))(a1 + 404);
        if ( v12 )
          result = v12(a1, 3, FIELD_U32(a1, 408));
        FIELD_U8(a1, 414) = 0;
        FIELD_U8(a1, 413) = 0;
      }
    }
  }
  return result;
}
