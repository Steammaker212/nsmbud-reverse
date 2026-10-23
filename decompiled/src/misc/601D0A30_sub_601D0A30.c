/* sub_601D0A30
 * address: 0x601D0A30   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_601D0A30(int a1, int a2)
{
  int *v3; // r5
  int *result; // r0
  int *v5; // r0
  int *v6; // r0
  int *v7; // r0
  int *v8; // r0
  int v9; // r1
  _DWORD v10[24]; // [sp+0h] [bp-60h] BYREF

  v10[0] = 0;
  memset(&v10[2], 0, 72);
  sub_601905DC(v10);
  v3 = *(int **)(ActorMgr__instance + 27180);
  result = sub_60169BD8(6, *(int **)(ActorMgr__instance + 27172));
  if ( result != v3 )
  {
    v10[4] = *(_DWORD *)(*result + 8);
    v5 = sub_60169BD8(6, result + 1);
    if ( v5 != v3 )
    {
      v10[5] = *(_DWORD *)(*v5 + 8);
      v6 = sub_60169BD8(6, v5 + 1);
      if ( v6 != v3 )
      {
        v10[6] = *(_DWORD *)(*v6 + 8);
        v7 = sub_60169BD8(6, v6 + 1);
        if ( v7 != v3 )
        {
          v10[7] = *(_DWORD *)(*v7 + 8);
          v8 = sub_60169BD8(6, v7 + 1);
          if ( v8 != v3 )
            v10[8] = *(_DWORD *)(*v8 + 8);
        }
      }
    }
    v9 = 87;
    if ( a2 )
      v9 = 86;
    v10[0] = v9;
    v10[1] = sub_601916C8(dword_60C8996C, v9);
    return (int *)sub_60191160((_DWORD *)dword_60C8996C, v10);
  }
  return result;
}
