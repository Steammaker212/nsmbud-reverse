/* sub_609ACC34
 * address: 0x609ACC34   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_QWORD *__fastcall sub_609ACC34(int a1, int a2, int a3)
{
  __int64 v5; // r6
  _QWORD *result; // r0
  unsigned int v7; // r0
  _QWORD *v8; // r5
  int v9; // r6

  HIDWORD(v5) = a2;
  result = (_QWORD *)sead__PtrArrayImpl__allocBuffer(a1 + 8, a2, a3, 4);
  if ( SHIDWORD(v5) >= 1 )
  {
    LODWORD(v5) = 272;
    v7 = 272 * HIDWORD(v5) + 8;
    if ( v7 < 272 * HIDWORD(v5) )
      v7 = -1;
    if ( !is_mul_ok(0x110u, HIDWORD(v5)) )
      v7 = -1;
    result = (_QWORD *)sub_608DE334(v7, a3, 4);
    if ( result )
    {
      *result = v5;
      v8 = result + 1;
      v9 = 272 * HIDWORD(v5);
      ++result;
      do
      {
        v9 -= 272;
        result = (_QWORD *)(agl_TextureData_ref((int)result) + 272);
      }
      while ( v9 );
      FIELD_U32(a1, 20) = HIDWORD(v5);
      FIELD_U32(a1, 24) = v8;
    }
  }
  return result;
}
