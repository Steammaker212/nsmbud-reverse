/* sub_6060503C
 * address: 0x6060503C   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060503C(int a1)
{
  int result; // r0
  _WORD *v3; // r5
  bool v4; // zf
  unsigned int v5; // r1
  int v6; // r0

  v3 = (_WORD *)(a1 + 6120);
  result = FIELD_U16(a1, 6120);
  v4 = result == 0;
  if ( result )
  {
    *v3 = --result;
    v4 = (unsigned __int16)result == 0;
  }
  if ( v4 )
  {
    v5 = FIELD_U8(a1, 6122);
    if ( (FIELD_U64(a1, 6104) & *(_QWORD *)(EventMgr__instance + 16)) != 0 )
    {
      EventMgr_set(EventMgr__instance, v5, 0, 0, 0, 0, 0, 0);
      v6 = FIELD_U8(a1, 23);
    }
    else
    {
      EventMgr_set(EventMgr__instance, v5, 0, 1, 0, 0, 0, 0);
      v6 = FIELD_U8(a1, 22);
    }
    result = 10 * v6;
    *v3 = result;
  }
  return result;
}
