/* sub_608D06A4
 * address: 0x608D06A4   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608D06A4(int a1, int a2, int a3)
{
  int v6; // r6
  int v7; // r0
  int v8; // r1
  bool v9; // zf
  int v10; // r1
  unsigned int result; // r0
  bool v12; // cc
  int v13; // r1

  v6 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 32))(FIELD_U32(a1, 4));
  v7 = FIELD_U32(a1, 4);
  if ( !v7 )
    return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v7 + 24))(v7, a2, a3);
  v8 = FIELD_U32(a1, 12);
  v9 = v8 == 0;
  if ( v8 )
    v9 = FIELD_U32(a1, 16) == 0;
  if ( v9 )
    return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v7 + 24))(v7, a2, a3);
  v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 44))(v7);
  result = 0x80000000;
  if ( v10 != 1 )
    return result;
  switch ( a3 )
  {
    case 2:
      v13 = FIELD_U32(a1, 8) + a2;
      if ( v6 <= v13 )
        return result;
      FIELD_U32(a1, 8) = v13;
      return 0;
    case 1:
      if ( v6 < a2 )
        return result;
      FIELD_U32(a1, 8) = v6 - a2;
      return 0;
    case 0:
      v12 = a2 <= 0;
      if ( a2 >= 0 )
        v12 = v6 <= a2;
      if ( !v12 )
      {
        FIELD_U32(a1, 8) = a2;
        return 0;
      }
      break;
  }
  return result;
}
