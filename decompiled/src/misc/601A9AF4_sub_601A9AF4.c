/* sub_601A9AF4
 * address: 0x601A9AF4   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A9AF4(int a1)
{
  int result; // r0
  int v3; // r1
  int *v4; // r2

  result = FIELD_U32(a1, 396);
  v3 = FIELD_U8(a1, 407);
  if ( result && !(result % 12) )
  {
    v3 ^= 1u;
    FIELD_U8(a1, 407) = v3;
  }
  if ( v3 )
  {
    v4 = dword_601A9BC0;
    if ( FIELD_U8(a1, 406) )
      v4 = &dword_601A9BC0[1];
    FIELD_F32(a1, 392) = FIELD_F32(a1, 392) + *(float *)v4;
  }
  else
  {
    FIELD_F32(a1, 392) = FIELD_F32(a1, 392) + -1.6667;
    if ( FIELD_U8(a1, 406) )
      FIELD_U8(a1, 406) = 0;
  }
  FIELD_U32(a1, 396) = result + 1;
  if ( result >= 36 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
    if ( !result )
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
  return result;
}
