/* sub_60145320
 * address: 0x60145320   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60145320(int a1)
{
  int v1; // r4
  double (__fastcall **v2)(int); // t1
  int v3; // s2

  v1 = a1;
  sub_6013480C(a1);
  FIELD_U32(v1, 568) |= 0xA0u;
  (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 304))(v1);
  *(_DWORD *)(FIELD_U32(v1, 6128) + 32) = 2;
  (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 352))(v1);
  v2 = *(double (__fastcall ***)(int))(v1 + 6440);
  v1 += 6440;
  FIELD_F64(v1, 4) = (*v2)(v1);
  FIELD_U32(v1, 12) = v3;
  return 1;
}
