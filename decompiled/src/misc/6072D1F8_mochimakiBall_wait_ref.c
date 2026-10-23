/* mochimakiBall_wait_ref
 * address: 0x6072D1F8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall mochimakiBall_wait_ref(int a1)
{
  int v1; // r4
  int v2; // r1
  int v3; // r0
  int result; // r0
  const char *v5[4]; // [sp+0h] [bp-10h] BYREF

  v1 = a1 + 6100;
  v2 = FIELD_U32(a1, 6124);
  v3 = **(_DWORD **)(FIELD_U32(a1, 6100) + 12);
  v5[0] = (const char *)&sead__SafeStringBase__vtable;
  v5[1] = "mochimakiBall_wait";
  SkeletalAnim_play(v3, v2, v5);
  result = **(_DWORD **)(*(_DWORD *)v1 + 12);
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
