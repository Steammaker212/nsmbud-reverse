/* Actor_ice_Lift_kishi_ku_build
 * address: 0x6061C88C   size: 172   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_ice_Lift_kishi_ku_build(ActorBuildInfo *a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x1AD8u);
  result = sub_6061BC30(v2, a1);
  *(_DWORD *)result = off_60C10DC0;
  FIELD_U32(result, 6840) = 0;
  FIELD_U32(result, 6836) = 0;
  FIELD_U32(result, 6832) = 0;
  FIELD_U32(result, 6828) = 0;
  FIELD_U32(result, 6820) = 0;
  FIELD_U32(result, 6824) = 0;
  FIELD_U32(result, 6844) = 45875200;
  FIELD_U32(result, 6848) = 0x4000000;
  FIELD_U32(result, 6852) = 0x1000000;
  FIELD_U32(result, 6856) = 0x2000000;
  FIELD_U32(result, 6860) = 0x4000000;
  FIELD_U32(result, 6864) = 0x2000000;
  FIELD_U8(result, 6868) = 0;
  return result;
}
