/* sub_60681544
 * address: 0x60681544   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60681544(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  float v6; // s0
  int result; // r0

  if ( a1[1878] )
  {
    v2 = (_DWORD *)a1[1528];
    v3 = v2[3];
    v4 = v2[2];
    v5 = v2[17];
    if ( v4 > v5 )
      v3 += 4 * v5;
    if ( (*(_BYTE *)(*(_DWORD *)v3 + 28) & 0x20) != 0 )
      (*(void (__fastcall **)(_DWORD *))(*a1 + 204))(a1);
  }
  if ( !a1[1877] )
    (*(void (__fastcall **)(_DWORD *, int, float))(*a1 + 228))(a1, 1, 8.0);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v6 = *((float *)a1 + 1865);
  result = dword_60CC6484;
  if ( *((float *)a1 + 28) >= (float)(FIELD_F32(dword_60CC6484, 124) - v6) )
  {
    a1[1863] = 1;
    *((float *)a1 + 28) = FIELD_F32(result, 124) - v6;
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CB8218);
  }
  return result;
}
