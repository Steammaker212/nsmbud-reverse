/* sub_6080A310
 * address: 0x6080A310   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080A310(int a1, int a2, int a3)
{
  int v5; // r0
  __int64 v6; // r0
  int result; // r0
  __int64 v8; // [sp+0h] [bp-20h] BYREF

  v5 = FIELD_U32(a1, 60);
  if ( v5 )
    sub_608AF208(v5, a2);
  nn__os__GetSystemTick((nn__os *)&v8);
  v6 = v8 - FIELD_U64(a1, 104);
  if ( (unsigned __int64)(v6 + 0x20C49BA5E353F7LL) > 0x4189374BC6A7EDLL )
    LODWORD(v6) = 1000 * (v6 / qword_60CCFB50);
  else
    v6 = 1000 * v6 / qword_60CCFB50;
  result = v6 + a3;
  FIELD_U32(a1, 100) = result;
  return result;
}
