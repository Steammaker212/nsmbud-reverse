/* sub_605AE948
 * address: 0x605AE948   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605AE948(int a1, float a2)
{
  float v4; // s18
  int result; // r0
  int v6; // r1
  int v7; // r0

  v4 = (float)(*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 228))(a1, a2);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 232))(a1);
  v6 = (int)(float)(v4 * a2);
  if ( v6 <= result )
  {
    v7 = -result;
    if ( v6 < v7 )
      return v7;
    return v6;
  }
  return result;
}
