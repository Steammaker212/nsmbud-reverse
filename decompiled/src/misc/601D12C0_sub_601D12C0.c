/* sub_601D12C0
 * address: 0x601D12C0   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D12C0(int a1, int a2)
{
  int v4; // r1
  int *v5; // r5
  int *v6; // r0
  int *v7; // r0
  int *v8; // r0
  int *v9; // r0
  int *v10; // r0
  _DWORD v12[24]; // [sp+0h] [bp-60h] BYREF

  v12[0] = 0;
  memset(&v12[2], 0, 72);
  sub_601905DC(v12);
  v4 = 43;
  if ( a2 )
    v4 = 42;
  v12[0] = v4;
  v12[1] = sub_601916C8(dword_60C8996C, v4);
  v5 = *(int **)(ActorMgr__instance + 27180);
  v6 = sub_60169BD8(4, *(int **)(ActorMgr__instance + 27172));
  if ( v6 != v5 )
  {
    v12[4] = *(_DWORD *)(*v6 + 8);
    v7 = sub_60169BD8(4, v6 + 1);
    if ( v7 != v5 )
    {
      v12[5] = *(_DWORD *)(*v7 + 8);
      v8 = sub_60169BD8(4, v7 + 1);
      if ( v8 != v5 )
      {
        v12[6] = *(_DWORD *)(*v8 + 8);
        v9 = sub_60169BD8(4, v8 + 1);
        if ( v9 != v5 )
        {
          v12[7] = *(_DWORD *)(*v9 + 8);
          v10 = sub_60169BD8(4, v9 + 1);
          if ( v10 != v5 )
            v12[8] = *(_DWORD *)(*v10 + 8);
        }
      }
    }
  }
  FIELD_U32(a1, 1120) |= 0x80u;
  return sub_60191160((_DWORD *)dword_60C8996C, v12);
}
