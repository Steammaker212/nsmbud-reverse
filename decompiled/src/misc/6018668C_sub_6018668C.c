/* sub_6018668C
 * address: 0x6018668C   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6018668C(int a1, unsigned __int8 *a2)
{
  int v4; // r0
  bool v5; // zf
  int v6; // r0

  sub_60185C70((Actor *)a1, a2);
  *(_DWORD *)a1 = off_60BD525C;
  FIELD_U32(a1, 264) = &off_60BD5308;
  FIELD_U32(a1, 268) = &off_60BD5318;
  FIELD_U32(a1, 272) = &off_60BD533C;
  FIELD_U32(a1, 276) = a1;
  FIELD_U32(a1, 280) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 284), (StateExecuter *)(a1 + 268), &NullState);
  FIELD_U32(a1, 264) = &off_60BD52F8;
  FIELD_U32(a1, 300) = -1;
  FIELD_U32(a1, 304) = -1;
  FIELD_U32(a1, 308) = -1;
  FIELD_U32(a1, 312) = 0;
  FIELD_U32(a1, 316) = 6;
  FIELD_U32(a1, 320) = -1;
  sub_601778E8((_DWORD *)(a1 + 324));
  FIELD_U32(a1, 352) = a2[37];
  FIELD_U32(a1, 356) = 0;
  FIELD_U32(a1, 360) = 0;
  FIELD_U32(a1, 364) = -1;
  FIELD_U16(a1, 368) = 7;
  FIELD_U8(a1, 370) = 0;
  v4 = sub_60186FEC(dword_60CC6D78 + 984, FIELD_U32(a1, 240));
  sub_6019EC50(a1 + 300, v4);
  v5 = FIELD_U32(a1, 300) == -1;
  if ( FIELD_U32(a1, 300) != -1 )
    v5 = FIELD_U32(a1, 304) == -1;
  if ( v5 || FIELD_U32(a1, 308) == -1 )
  {
    v6 = a2[32];
    FIELD_U32(a1, 300) = FIELD_U32(a1, 240);
    FIELD_U32(a1, 304) = v6;
    FIELD_U32(a1, 308) = -1;
  }
  return a1;
}
