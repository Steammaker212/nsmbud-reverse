/* Goomba__build
 * address: 0x60337D2C   size: 148   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Goomba__build(ActorBuildInfo *a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x1AE8u);
  result = GoombaBase__ctor(v2, a1);
  *(_DWORD *)result = &Goomba__vtable;
  FIELD_U32(result, 6836) = 0;
  FIELD_U8(result, 6840) = 0;
  FIELD_U8(result, 6864) = 0;
  FIELD_U32(result, 6860) = 0;
  FIELD_U32(result, 6856) = 0;
  FIELD_U32(result, 6852) = 0;
  FIELD_U32(result, 6848) = 0;
  FIELD_U32(result, 6844) = 0;
  FIELD_U32(result, 6880) = 0;
  FIELD_U32(result, 6876) = 0;
  FIELD_U32(result, 6872) = 0;
  FIELD_U32(result, 6868) = 0;
  return result;
}
