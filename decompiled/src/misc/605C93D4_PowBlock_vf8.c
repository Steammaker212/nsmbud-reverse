/* PowBlock_vf8
 * address: 0x605C93D4   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PowBlock_vf8(StageActor *a1)
{
  int *p_category; // r5
  float trapezoidOffsetTopLeft; // r0

  p_category = &a1[9].aCollider.info.category;
  (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0).vtable + 252))(a1);
  if ( (*(_BYTE *)p_category & 4) != 0 )
    sub_6000897C((_DWORD *)ActorMgr__instance, (int)a1);
  else
    (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0).vtable + 256))(a1);
  trapezoidOffsetTopLeft = a1[9].aCollider.trapezoidOffsetTopLeft;
  if ( trapezoidOffsetTopLeft != 0.0 )
    (*(void (__fastcall **)(float))(*(_DWORD *)LODWORD(trapezoidOffsetTopLeft) + 28))(COERCE_FLOAT(LODWORD(trapezoidOffsetTopLeft)));
  StageActor__cullCheck(a1, 0);
  return 1;
}
