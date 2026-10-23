/* sub_604ABBCC
 * address: 0x604ABBCC   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604ABBCC(int a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r5

  sub_6047F4A0((int *)(a1 + 277668));
  if ( (FIELD_U8(a1, 16) & 1) != 0 )
  {
    FIELD_U8(a1, 56) = 1;
    StateMgr__changeState((StateMgr *)(a1 + 40), &stru_60CA1490);
  }
  if ( FIELD_U8(a1, 56) )
  {
    FIELD_U32(a1, 60) = 0;
    FIELD_U8(a1, 56) = 0;
  }
  StateMgr__execute((StateMgr *)(a1 + 40));
  v2 = FIELD_U32(a1, 60);
  if ( v2 != 0x7FFFFFFF )
    FIELD_U32(a1, 60) = v2 + 1;
  sub_6050229C(a1 + 85956);
  sub_6050A8A4(a1 + 88036);
  sub_60473B58((_DWORD *)(a1 + 64), 5u, 0);
  sub_604ABCA8(a1, 5, FIELD_U32(a1, 279736));
  v3 = 61;
  v4 = a1 + 95256;
  do
  {
    sub_60402E34(v4);
    v4 += 2988;
    --v3;
  }
  while ( v3 );
  FIELD_U32(a1, 16) = 0;
  return 0;
}
