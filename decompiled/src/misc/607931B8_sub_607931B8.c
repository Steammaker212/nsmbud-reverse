/* sub_607931B8
 * address: 0x607931B8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607931B8(int a1, float a2, float a3, float a4, float a5)
{
  int result; // r0

  result = FIELD_U32(a1, 40);
  if ( result && (FIELD_U8(result, 209) & 4) == 0 )
  {
    if ( (FIELD_U16(a1, 196) & 0xC012) != 0 )
    {
      return (*(int (__fastcall **)(int, float, float, float, float, float))(*(_DWORD *)result + 92))(
               result,
               a3,
               a3,
               a4,
               a5,
               a3);
    }
    else
    {
      FIELD_U32(result, 212) = FIELD_U32(a1, 212);
      return (*(int (__fastcall **)(_DWORD, float, float, float, float, float))(**(_DWORD **)(a1 + 40) + 88))(
               FIELD_U32(a1, 40),
               a2,
               a4,
               a3,
               a5,
               a3);
    }
  }
  return result;
}
