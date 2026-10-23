/* sub_6046D080
 * address: 0x6046D080   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall sub_6046D080(StageActor *a1)
{
  int v2; // r0
  int *v3; // r5
  _BOOL4 v4; // r0
  bool v5; // zf
  StageActor *result; // r0
  float x; // s2

  v3 = &a1[9].aCollider.field_F8;
  v2 = a1[9].aCollider.field_F8;
  if ( v2 )
    *v3 = v2 - 1;
  v4 = sub_60463C30((int)a1);
  v5 = v4;
  if ( !v4 )
    v5 = *v3 == 0;
  if ( v5 )
    (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 224))(a1);
  else
    a1[9].aCollider.field_E0 = -1;
  result = StageActor__accelerateX(a1);
  x = FIELD_F32(a1, 0x78);
  FIELD_F32(a1, 0x6C) = FIELD_F32(a1, 0x6C) + x;
  FIELD_F32(a1, 0x70) = FIELD_F32(a1, 0x70) + FIELD_F32(a1, 0x7C);
  FIELD_F32(a1, 0x74) = FIELD_F32(a1, 0x74) + FIELD_F32(a1, 0x80);
  if ( x == 0.0 )
  {
    a1[10].aCollider.field_E0 = FIELD_U32(a1, 0x50) + 1;
    return (StageActor *)(*(int (__fastcall **)(StageActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C9D584);
  }
  return result;
}
