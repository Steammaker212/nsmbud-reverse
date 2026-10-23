/* sub_6080A298
 * address: 0x6080A298   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080A298(int a1, int a2)
{
  int v3; // r0
  int v4; // r1
  _DWORD v6[4]; // [sp+0h] [bp-10h] BYREF

  v3 = FIELD_U32(a1, 60);
  if ( !v3 )
    return 0;
  sub_608AF208(v3, a2);
  FIELD_U32(a1, 100) = -1;
  nn__os__GetSystemTick((nn__os *)v6);
  v4 = v6[1];
  FIELD_U32(a1, 104) = v6[0];
  FIELD_U32(a1, 108) = v4;
  FIELD_U32(a1, 112) = 1065353216;
  FIELD_U32(a1, 116) = 0;
  FIELD_U8(a1, 120) = 0;
  sub_6080C38C(dword_60CC6B0C, 0, 1.0);
  return 1;
}
