/* sub_600FC8AC
 * address: 0x600FC8AC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600FC8AC(_DWORD *a1)
{
  _DWORD *v1; // r12
  int v2; // r1
  int v3; // r2
  int v4; // r3
  _DWORD *v5; // r0
  int result; // r0

  v1 = a1 + 146;
  v2 = a1[1702];
  a1[27] = v2;
  v3 = a1[28];
  v4 = a1[29];
  v5 = a1 + 152;
  *v1 = v2;
  v1[1] = v3;
  v1[2] = v4;
  *v5 = v2;
  v5[1] = v3;
  v5[2] = v4;
  result = PlayerMgr_instance;
  FIELD_U8(PlayerMgr_instance, 136) = 1;
  return result;
}
