/* sub_604EE6EC
 * address: 0x604EE6EC   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604EE6EC(int a1, float a2)
{
  char v3; // r11
  unsigned int v4; // r6
  _DWORD *v5; // r10
  int v6; // r7
  int v7; // r5
  char v8; // r0
  int v9; // r0
  int v10; // r1
  int result; // r0

  v3 = 1;
  v4 = 0;
  v5 = (_DWORD *)(a1 + 46128);
  v6 = dword_60CC6D78;
  v7 = a1 + 74360;
  do
  {
    if ( *(int *)(v6 + 4 * v4 + 98488) > 14 )
    {
      *(_BYTE *)(*(_DWORD *)(v7 + 8 * v4) + 64) |= 1u;
      v9 = (8 * v4++) | 4;
      *(_BYTE *)(*(_DWORD *)(v7 + v9) + 64) |= 1u;
      sub_6047EEC4((int)v5, v4, a2);
      v8 = 0;
    }
    else
    {
      sub_604F377C(a1, v4++);
      sub_6047F01C(v5, v4);
      v3 = 0;
      v8 = 1;
    }
    v10 = a1;
    if ( v4 < 0x100 )
      v10 = a1 + v4;
    FIELD_U8(v10, 46588) = v8;
  }
  while ( v4 != 10 );
  result = FIELD_U32(a1, 74356);
  FIELD_U8(result, 64) = FIELD_U8(result, 64) & 0xFE | v3 & 1;
  return result;
}
