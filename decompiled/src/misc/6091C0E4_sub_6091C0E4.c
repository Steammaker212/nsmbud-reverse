/* sub_6091C0E4
 * address: 0x6091C0E4   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6091C0E4(int a1, int a2, signed int a3, void *a4)
{
  _DWORD *v8; // r0
  _DWORD *v9; // r7
  _DWORD *result; // r0
  int v11; // r5
  unsigned int v12; // r0
  _DWORD *v13; // r6
  int v14; // r1

  v8 = (_DWORD *)operator_new_8DE25C(0x38u, a4, 4);
  v8[9] = 0;
  v8[10] = 0;
  v8[11] = 0;
  v8[12] = 0;
  v8[13] = 0;
  *v8 = &sead__SafeStringBase__vtable;
  v8[1] = &byte_60B3BA34;
  v8[2] = off_60C5D618;
  v8[7] = 0;
  v8[6] = 0;
  v8[5] = 0;
  v8[4] = 0;
  v8[3] = 0;
  v8[10] = 0;
  v8[11] = 0;
  FIELD_U32(a1, 4) = v8;
  v8[8] = 0;
  sead__SafeStringBase__operator_assign(FIELD_U32(a1, 4), a2);
  *(_DWORD *)(FIELD_U32(a1, 4) + 12) = a1;
  *(_DWORD *)(FIELD_U32(a1, 4) + 36) = 4;
  *(_DWORD *)(FIELD_U32(a1, 4) + 48) = 0;
  *(_DWORD *)(FIELD_U32(a1, 4) + 52) = 0;
  v9 = *(_DWORD **)(a1 + 4);
  (*(void (__fastcall **)(_DWORD *))(*v9 + 12))(v9);
  FIELD_U32(a1, 596) = v9[1];
  *(_DWORD *)(FIELD_U32(a1, 4) + 40) = 0;
  result = *(_DWORD **)(a1 + 4);
  result[11] = 0;
  if ( a3 >= 1 )
  {
    v11 = FIELD_U32(a1, 4);
    v12 = 28 * a3 + 8;
    if ( v12 < 28 * a3 )
      v12 = -1;
    if ( !is_mul_ok(0x1Cu, a3) )
      v12 = -1;
    result = (_DWORD *)sub_608DE334(v12, (int)a4, 4);
    if ( result )
    {
      *result = 28;
      result[1] = a3;
      v13 = result + 2;
      v14 = (int)&result[7 * a3 + 2];
      result += 2;
      do
      {
        *result = &sead__SafeStringBase__vtable;
        result[1] = &byte_60B3BA34;
        result[2] = &sead__SafeStringBase__vtable;
        result[3] = &byte_60B3BA34;
        result[4] = 0;
        result[5] = 0;
        result += 7;
      }
      while ( result != (_DWORD *)v14 );
      FIELD_U32(v11, 24) = a3;
      FIELD_U32(v11, 28) = v13;
    }
  }
  return result;
}
