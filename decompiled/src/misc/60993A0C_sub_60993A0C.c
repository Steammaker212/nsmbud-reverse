/* sub_60993A0C
 * address: 0x60993A0C   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60993A0C(int a1, void *a2, int a3, int a4, int a5)
{
  int v9; // r0
  int v10; // r1
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  int result; // r0

  FIELD_U32(a1, 16) = a5;
  v9 = FIELD_U32(a5, 72);
  if ( v9 )
  {
    v10 = FIELD_U8(v9, 127);
    if ( FIELD_U8(v9, 127) )
      v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  sub_60991174(a1, v10);
  FIELD_U16(a1, 30) &= ~0x2000u;
  FIELD_U32(a1, 52) = a3;
  v11 = (_DWORD *)operator_new_8DE25C(0x10u, a2, 4);
  v12 = sub_6098A108(v11);
  FIELD_U32(a1, 44) = v12;
  sub_6098A12C((int)v12, 4, (int)a2);
  FIELD_U8(a4, 51) = FIELD_U8(a4, 51) & 0xCF | 0x10;
  sub_6098A2E0(*(_DWORD **)(a1 + 44), 0, a4);
  FIELD_U32(a1, 12) = a3 + 136;
  result = FIELD_U16(a1, 30) | 0x100;
  FIELD_U16(a1, 30) = result;
  return result;
}
