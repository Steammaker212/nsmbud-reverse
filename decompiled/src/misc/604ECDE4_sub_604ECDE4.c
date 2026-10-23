/* sub_604ECDE4
 * address: 0x604ECDE4   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604ECDE4(int a1)
{
  int result; // r0
  _BYTE *v3; // r5

  result = FIELD_U8(a1, 23748);
  if ( result )
  {
    FIELD_U8(a1, 23751) = 0;
    v3 = (_BYTE *)(a1 + 23751);
    if ( sub_604ED5EC(a1 + 36) == 1 )
      *v3 = 1;
    if ( sub_604ED5EC(a1 + 3624) )
      *v3 = 1;
    if ( sub_604ED5EC(a1 + 7212) == 1 )
      *v3 = 1;
    StateMgr__execute((StateMgr *)(a1 + 20));
    if ( FIELD_U8(a1, 23749) )
      sub_6050229C(a1 + 14396);
    sub_6050A8A4(a1 + 16496);
    sub_60473B58((_DWORD *)(a1 + 10808), 5u, 0);
    return sub_604ECEA4(a1);
  }
  return result;
}
