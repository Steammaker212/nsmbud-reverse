/* sub_6052D86C
 * address: 0x6052D86C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052D86C(int a1, unsigned int a2)
{
  int v4; // r6
  unsigned int v5; // r0
  unsigned int v6; // r7
  int result; // r0
  int v8; // r9
  int v9; // r8
  int v10; // r6
  unsigned int v11; // r1
  _DWORD *v12; // r5
  unsigned int v13; // r0

  v4 = dword_60C9A1E0;
  sub_60407900((_DWORD *)dword_60C9A1E0);
  v5 = 0;
  v6 = 0;
  if ( a2 < 4 )
    v5 = a2;
  result = v4 + 36 * v5;
  if ( FIELD_U8(result, 580) )
  {
    v8 = FIELD_U32(result, 556);
    v9 = FIELD_U32(result, 560);
    v10 = a1 + 3756;
    v11 = a2 + 1;
    v12 = (_DWORD *)(a1 + 72);
    if ( a2 + 1 >= 0x11 )
      v11 = 0;
    sub_6047DEC8(v12, *(_DWORD *)(v10 + 4 * v11), 1, FIELD_U32(result, 548));
    v13 = a2 + 5;
    if ( a2 + 5 >= 0x11 )
      v13 = 0;
    sub_6047DEC8(v12, *(_DWORD *)(v10 + 4 * v13), 1, v8);
    if ( a2 + 9 < 0x11 )
      v6 = a2 + 9;
    return sub_6047DEC8(v12, *(_DWORD *)(v10 + 4 * v6), 1, v9);
  }
  return result;
}
