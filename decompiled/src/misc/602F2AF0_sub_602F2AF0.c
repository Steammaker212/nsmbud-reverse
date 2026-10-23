/* sub_602F2AF0
 * address: 0x602F2AF0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F2AF0(int a1, Vec3 *a2, Vec3 *a3, int a4)
{
  EffectWrapper *v7; // r7
  int v8; // r0

  v7 = (EffectWrapper *)(a1 + 24);
  v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
  EffectWrapper_update(v7, *(_DWORD *)(v8 + 4 * a4), a2, 0, a3);
  return 1;
}
