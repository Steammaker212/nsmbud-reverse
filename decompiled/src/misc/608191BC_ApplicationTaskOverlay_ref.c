/* ApplicationTaskOverlay_ref
 * address: 0x608191BC   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ApplicationTaskOverlay_ref(_DWORD *a1)
{
  _DWORD *v2; // r0
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "ApplicationTaskOverlay";
  a1[66] = a1;
  a1[67] = sub_60819264;
  a1[68] = 0;
  a1[65] = off_60C2A274;
  sead__SafeStringBase__operator_assign((int)(a1 + 60), (int)v4);
  a1[62] = 1;
  v2 = *(_DWORD **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 0x11u )
    v2 += 17;
  return sub_609553AC(*v2, a1 + 56);
}
