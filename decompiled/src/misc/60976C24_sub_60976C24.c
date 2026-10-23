/* sub_60976C24
 * address: 0x60976C24   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60976C24(int a1)
{
  int v2; // r1
  int v3; // r1
  int v5; // [sp+0h] [bp-18h] BYREF
  int v6; // [sp+4h] [bp-14h]

  untitled_ref(a1);
  *(_DWORD *)a1 = &off_60C5F3E0;
  FIELD_U32(a1, 584) = 0;
  FIELD_U32(a1, 588) = 0;
  nn__os__GetSystemTick((nn__os *)&v5);
  v2 = v6;
  FIELD_U32(a1, 592) = v5;
  FIELD_U32(a1, 596) = v2;
  nn__os__GetSystemTick((nn__os *)&v5);
  v3 = v6;
  FIELD_U32(a1, 600) = v5;
  FIELD_U32(a1, 604) = v3;
  FIELD_U8(a1, 608) = 0;
  return a1;
}
