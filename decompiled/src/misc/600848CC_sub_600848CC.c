/* sub_600848CC
 * address: 0x600848CC   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600848CC(int a1)
{
  unsigned int v2; // r1
  int v3; // r1
  int v4; // r1
  float v5; // s0

  FIELD_U32(a1, 6148) &= ~0x200u;
  ((void (__fastcall *)(int))loc_6008950C)(a1);
  v2 = FIELD_U32(a1, 7240);
  if ( v2 >= 4 )
    v2 = 0;
  v3 = *(_DWORD *)(PlayerMgr_instance + 4 * v2 + 32);
  if ( v3 )
    v4 = FIELD_F32(v3, 108) < FIELD_F32(a1, 108);
  else
    v4 = FIELD_U32(a1, 80);
  v5 = (float)byte_60AFE3F4[v4];
  FIELD_U32(a1, 80) = v4;
  FIELD_F32(a1, 132) = v5 * 2.5;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 104) = 1036831949;
  FIELD_U32(a1, 7652) = 1;
  return 7652;
}
