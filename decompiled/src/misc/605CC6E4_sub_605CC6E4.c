/* sub_605CC6E4
 * address: 0x605CC6E4   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605CC6E4(_DWORD *a1, int a2, __int16 a3)
{
  int v3; // r3
  unsigned int v4; // r1
  int *v5; // r0
  int v6; // t1

  a1[20] = a1[139];
  v3 = 0;
  v4 = FIELD_U8(a2, 84);
  if ( v4 < 4 )
    v3 = (char)v4;
  *((_WORD *)a1 + v3 + 3064) = a3;
  v6 = a1[1531];
  v5 = a1 + 1531;
  *v5 = v6 | 0x18;
  return StateMgr__changeState((StateMgr *)(v5 - 10), &stru_60CB0F38._._);
}
