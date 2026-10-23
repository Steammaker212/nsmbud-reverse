/* ParaGoomba__build
 * address: 0x60362B14   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ParaGoomba__build(ActorBuildInfo *a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x1AC0u);
  result = GoombaBase__ctor(v2, a1);
  *(_DWORD *)result = &ParaGoomba__vtable;
  FIELD_U8(result, 6842) = 0;
  FIELD_U16(result, 6840) = 0;
  FIELD_U32(result, 6836) = 0;
  FIELD_U32(result, 6832) = 0;
  FIELD_U32(result, 6824) = 0;
  FIELD_U32(result, 6828) = 0;
  FIELD_U8(result, 6843) = 1;
  FIELD_U8(result, 6844) = 0;
  return result;
}
