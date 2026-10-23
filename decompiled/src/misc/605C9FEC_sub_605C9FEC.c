/* sub_605C9FEC
 * address: 0x605C9FEC   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C9FEC(int a1)
{
  int v2; // r5
  unsigned int v3; // r1
  int v4; // r0

  v2 = a1 + 6124;
  FIELD_U32(a1, 6124) &= 0xFFFFFFCF;
  FIELD_U32(a1, 328) = 0;
  sub_6015913C((ActiveCollider *)(a1 + 188), 16);
  *(_DWORD *)(v2 - 2932) &= 0xFFFFFF9F;
  v3 = *(_DWORD *)(v2 - 2940) & 0xFFFFFF9F;
  *(_DWORD *)(v2 - 2948) &= 0xFFFFFF9F;
  *(_DWORD *)(v2 - 2940) = v3;
  v4 = FIELD_U32(v2, 20);
  if ( v4 )
    FIELD_U32(v4, 136) &= ~0x1000u;
  return sub_605CCAD4(a1);
}
