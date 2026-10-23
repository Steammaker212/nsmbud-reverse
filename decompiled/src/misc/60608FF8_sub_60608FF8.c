/* sub_60608FF8
 * address: 0x60608FF8   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60608FF8(int a1, unsigned int a2)
{
  int *v2; // r3
  int *v3; // r1
  int result; // r0
  int *v5; // r4
  int target; // [sp+4h] [bp-14h] BYREF
  int v7; // [sp+8h] [bp-10h] BYREF
  int speed[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = dword_60609100;
  if ( !FIELD_U32(a1, 6116) )
    v2 = &dword_60609100[1];
  if ( a2 >= 3 )
    a2 = 0;
  v3 = (int *)(a1 + 4 * a2);
  speed[0] = (int)(float)((float)(2147500000.0 * *(float *)v2) / 180.0);
  v5 = v3 + 1808;
  result = v3[1808];
  switch ( result )
  {
    case 2:
      target = 0;
      result = moveValueTo(v3 + 1531, &target, speed);
      if ( result != 1 )
        return result;
      result = 3;
      goto LABEL_14;
    case 1:
      v7 = -v3[1811];
      result = moveValueTo(v3 + 1531, &v7, speed);
      if ( result != 1 )
        return result;
      result = 2;
      goto LABEL_14;
    case 0:
      result = moveValueTo(v3 + 1531, v3 + 1811, speed);
      if ( result == 1 )
      {
        result = 1;
LABEL_14:
        *v5 = result;
      }
      break;
  }
  return result;
}
