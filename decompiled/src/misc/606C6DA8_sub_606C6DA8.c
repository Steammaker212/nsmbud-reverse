/* sub_606C6DA8
 * address: 0x606C6DA8   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C6DA8(int a1)
{
  int v1; // r1
  int v2; // r2
  unsigned __int8 v3; // r0
  int v4; // r2
  int a8; // [sp+Ch] [bp-Ch]

  v1 = FIELD_U32(a1, 6104);
  v2 = v1;
  v3 = FIELD_U8(a1, 539) - 1;
  if ( v1 != 1 )
    v2 = 0;
  a8 = v2;
  v4 = 60;
  if ( v1 == 1 )
    v4 = 24;
  return EventMgr_set(EventMgr__instance, v3, v4, 1, 0, 1, 0, a8);
}
