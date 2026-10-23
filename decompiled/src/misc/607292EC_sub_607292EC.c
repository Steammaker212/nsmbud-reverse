/* sub_607292EC
 * address: 0x607292EC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607292EC(int a1, char a2, int a3)
{
  char v5; // r8
  int result; // r0
  int Area; // r0
  _DWORD *v8; // r0
  int v9; // r3
  int v10; // r4
  int v11; // r5
  int v12; // r6
  int v13; // r7

  v5 = a2;
  result = FIELD_U8(a1, 48);
  if ( !result )
  {
    Area = Level_getArea(Level_instance, a2);
    v8 = (_DWORD *)sub_60727D48(Area, a3);
    v9 = v8[1];
    v10 = v8[2];
    v11 = v8[3];
    v12 = v8[4];
    v13 = v8[5];
    FIELD_U32(a1, 16) = *v8;
    FIELD_U32(a1, 20) = v9;
    FIELD_U32(a1, 24) = v10;
    FIELD_U32(a1, 28) = v11;
    FIELD_U32(a1, 32) = v12;
    FIELD_U32(a1, 36) = v13;
    if ( FIELD_U8(a1, 25) )
      v5 = FIELD_U8(a1, 25) - 1;
    FIELD_U8(a1, 25) = v5;
    FIELD_U8(a1, 48) = 1;
    FIELD_U32(a1, 52) = 1;
    return 1;
  }
  return result;
}
