/* sub_609105F4
 * address: 0x609105F4   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609105F4(int a1)
{
  int v1; // r5
  int v2; // r6
  int result; // r0
  int v5; // r0
  int v6; // r0
  bool v7; // zf
  int v8; // r7

  result = FIELD_U8(a1, 56);
  if ( result )
  {
    v5 = FIELD_U32(a1, 28);
    if ( v5 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 24))(v5);
    v6 = FIELD_U32(a1, 24);
    if ( v6 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    result = FIELD_U32(a1, 44);
    v7 = result == 0;
    if ( result )
    {
      v2 = FIELD_U32(a1, 40);
      v1 = a1 + 36;
      v7 = v2 == a1 + 36;
    }
    if ( !v7 )
    {
      v8 = FIELD_U32(a1, 48);
      result = v2 - v8;
      do
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)result + 28))(result);
        v2 = FIELD_U32(v2, 4);
        result = v2 - v8;
      }
      while ( v2 - v8 != v1 - FIELD_U32(a1, 48) );
    }
  }
  return result;
}
