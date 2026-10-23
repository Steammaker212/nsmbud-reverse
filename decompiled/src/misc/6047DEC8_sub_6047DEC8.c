/* sub_6047DEC8
 * address: 0x6047DEC8   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6047DEC8(_DWORD *a1, int a2, int a3, ...)
{
  int v4; // r0
  int v5; // r5
  _DWORD v7[7]; // [sp+10h] [bp-20h] BYREF
  va_list va; // [sp+2Ch] [bp-4h] BYREF

  va_start(va, a3);
  va_copy(&v7[2], va);
  v4 = FIELD_U32(a2, 176);
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = v4;
  v5 = sub_6047DF58(3, v7, a2, -1, 0, a3, (int *)va);
  if ( sub_60474F28((int)a1) == 1 )
    sub_60474EEC(a1);
  return v5;
}
