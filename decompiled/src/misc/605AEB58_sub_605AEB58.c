/* sub_605AEB58
 * address: 0x605AEB58   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605AEB58(int a1)
{
  Vec3 v2; // [sp+4h] [bp-14h] BYREF

  *(_QWORD *)&v2.x = ((double (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 240))(a1);
  v2.z = 4500.0;
  return EffectData_create(920, &v2, 0, 0);
}
