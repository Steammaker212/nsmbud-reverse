/* sub_604FFB50
 * address: 0x604FFB50   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FFB50(int a1)
{
  bool v2; // zf

  FIELD_U32(a1, 7712) = 0;
  v2 = (FIELD_U32(a1, 5696) & 0x6086) == 0;
  FIELD_U32(a1, 7716) = FIELD_U32(a1, 5696) & 0x6086;
  if ( v2 )
    FIELD_U32(a1, 7712) = FIELD_U32(a1, 7312) & 0x6086;
  FIELD_U8(a1, 5688) = 0;
  if ( (FIELD_U8(a1, 52) & 1) != 0 )
    StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60CA7368);
  StateMgr__execute((StateMgr *)(a1 + 36));
  sub_6050229C(a1 + 56);
  sub_6050A8A4(a1 + 7720);
  sub_60473B58((_DWORD *)(a1 + 2140), 0xEu, 0);
  return sub_604FFBF4(a1);
}
