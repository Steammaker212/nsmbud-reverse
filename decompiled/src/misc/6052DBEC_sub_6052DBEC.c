/* sub_6052DBEC
 * address: 0x6052DBEC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052DBEC(int a1)
{
  sub_60473B58((_DWORD *)(a1 + 72), 0xEu, 0);
  StateMgr__execute((StateMgr *)(a1 + 24));
  sub_60507028(FIELD_U32(a1, 3740));
  sub_60507028(FIELD_U32(a1, 3744));
  sub_60507028(FIELD_U32(a1, 3748));
  return sub_60507028(FIELD_U32(a1, 3752));
}
