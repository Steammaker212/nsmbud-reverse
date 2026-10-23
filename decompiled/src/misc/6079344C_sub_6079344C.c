/* sub_6079344C
 * address: 0x6079344C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079344C(int a1, float a2, float a3)
{
  int result; // r0
  int v6; // r1
  int v7; // r3
  float v8; // s1
  float v9; // s0

  result = FIELD_U32(a1, 40);
  if ( result && (FIELD_U8(result, 209) & 4) == 0 )
  {
    if ( (FIELD_U16(a1, 196) & 0xC012) != 0 )
    {
      return (*(int (__fastcall **)(int, float, float, float))(*(_DWORD *)result + 92))(result, a2, a3, a2);
    }
    else
    {
      v6 = FIELD_U32(a1, 28);
      v7 = **(_DWORD **)(FIELD_U32(a1, 24) + 12);
      v8 = FIELD_F32(v7, 20);
      v9 = FIELD_F32(v7, 24);
      FIELD_U32(result, 212) = FIELD_U32(a1, 212);
      return (*(int (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(a1 + 40) + 88))(
               FIELD_U32(a1, 40),
               v6,
               v9,
               v8,
               a2);
    }
  }
  return result;
}
