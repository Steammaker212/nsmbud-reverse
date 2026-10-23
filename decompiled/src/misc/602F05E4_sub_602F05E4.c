/* sub_602F05E4
 * address: 0x602F05E4   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F05E4(int a1, int a2, int a3)
{
  int v7; // r0
  int *v8; // r8
  signed int v9; // r6
  int v10; // r7

  if ( FIELD_U8(a1, 7529) )
    return sub_602EE7D8(a1, a3, 0xFFFFFFFF, 0);
  v7 = sub_602A3358(FIELD_U32(a1, 56), a2);
  v8 = *(int **)(a1 + 56);
  v9 = sub_602856EC(v8 + 1573, v7);
  if ( v9 >= 8 )
    SE_SYS_NICE_S_ref();
  v10 = FIELD_S8(a2, 84);
  sub_60022760(0.0, 24.0, dword_60C7F52C, a1, v9, v10);
  sub_602EE7D8(a1, a3, 0xFFFFFFFF, 0);
  return (*(int (__fastcall **)(int *, int))(*v8 + 68))(v8, v10);
}
