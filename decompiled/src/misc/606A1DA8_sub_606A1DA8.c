/* sub_606A1DA8
 * address: 0x606A1DA8   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A1DA8(int a1)
{
  int v1; // r2
  float v2; // s0
  float v4[2]; // [sp+8h] [bp-18h] BYREF
  _DWORD v5[4]; // [sp+10h] [bp-10h] BYREF

  v1 = FIELD_U32(a1, 576);
  v2 = FIELD_F32(a1, 8004);
  v5[0] = FIELD_U32(a1, 572);
  v5[1] = v1;
  v4[0] = (float)(v2 + v2) + 64.0;
  v4[1] = v4[0];
  return sub_6069AFA0(a1 + 7856, a1 + 108, v5, v4, (ColliderBase *)(a1 + 7200));
}
