/* sub_602AFFC8
 * address: 0x602AFFC8   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602AFFC8(int *a1)
{
  unsigned int v2; // r5
  unsigned int v3; // r5
  int result; // r0
  int v5; // [sp+4h] [bp-1Ch] BYREF
  int speed; // [sp+8h] [bp-18h] BYREF
  int target; // [sp+Ch] [bp-14h] BYREF

  v2 = *(_DWORD *)(**(_DWORD **)(a1[1575] + 28) + 28);
  target = 0;
  speed = 0x2000000;
  v5 = 0;
  v3 = (v2 >> 5) & 1;
  if ( moveValueTo(a1 + 41, &target, &speed) )
    ++v3;
  result = moveValueTo(a1 + 39, &v5, &dword_60C90C80);
  if ( result )
    ++v3;
  if ( v3 >= 3 )
    return (*(int (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60C90BD4);
  return result;
}
