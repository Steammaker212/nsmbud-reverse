/* sub_60629698
 * address: 0x60629698   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60629698(int a1)
{
  _BYTE *v2; // r5
  _BYTE *v3; // r0
  char v4; // r1

  StateMgr__execute((StateMgr *)(a1 + 6084));
  StateMgr__execute((StateMgr *)(a1 + 6224));
  sub_60629500((unsigned int *)a1);
  v2 = (_BYTE *)(a1 + 6196);
  v3 = (_BYTE *)(a1 + 6169);
  if ( FIELD_U8(a1, 6196) )
    v4 = *v3 + 1;
  else
    v4 = 0;
  *v3 = v4;
  sub_60629730(a1);
  if ( !*v2 )
    FIELD_U8(a1, 6198) = 0;
  StageActor__cullCheck((StageActor *)a1, 0);
  FIELD_U8(a1, 6197) = *v2;
  *v2 = 0;
  return 1;
}
