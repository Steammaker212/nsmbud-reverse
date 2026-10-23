/* sub_607372B4
 * address: 0x607372B4   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607372B4(int a1, double a2, float a3, float a4, float32x2_t a5)
{
  int result; // r0
  _BYTE *v7; // r5
  float v8; // s0
  float v9; // s0

  v7 = (_BYTE *)(a1 + 7402);
  result = FIELD_U8(a1, 7402);
  if ( result != 1 )
  {
    a5.n64_u32[0] = 1.75;
    *(float *)&a2 = FIELD_F32(a1, 124) + 0.4;
    FIELD_U32(a1, 124) = vmin_f32(*(float32x2_t *)&a2, a5).n64_u32[0];
    v8 = CollisionActor__handleSpeed((CollisionActor *)a1);
    (*(void (__fastcall **)(int, int, float))(*(_DWORD *)a1 + 232))(a1, 2, v8);
    result = a1 + 6796;
    v9 = FIELD_F32(a1, 124) + FIELD_F32(a1, 6796);
    FIELD_F32(a1, 6796) = v9;
    if ( v9 >= 0.0 )
    {
      *(_DWORD *)result = 0;
      *v7 = 1;
      return 1;
    }
  }
  return result;
}
