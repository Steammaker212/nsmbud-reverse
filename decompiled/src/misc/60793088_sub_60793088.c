/* sub_60793088
 * address: 0x60793088   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60793088(_DWORD *a1, float a2)
{
  int *v4; // r0
  int v5; // r5
  float v6; // s0
  int v7; // r6
  int result; // r0

  v4 = *(int **)(a1[6] + 12);
  v5 = *v4;
  v6 = *(float *)(*v4 + 24);
  *(float *)(*v4 + 24) = a2;
  if ( (float)(v6 * a2) <= 0.0 )
  {
    v7 = FIELD_U32(v5, 20);
    sub_6041838C((ModelAnimation *)(v5 + 4));
    FIELD_U32(v5, 20) = v7;
    FIELD_U32(v5, 28) |= 2u;
  }
  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 140))(a1);
  if ( !result )
    return (*(int (__fastcall **)(_DWORD *, float))(*a1 + 112))(a1, a2);
  return result;
}
