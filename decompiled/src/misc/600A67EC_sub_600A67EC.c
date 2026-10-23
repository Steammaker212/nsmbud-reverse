/* sub_600A67EC
 * address: 0x600A67EC   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A67EC(int a1)
{
  int v2; // r5
  int v3; // r0
  int result; // r0
  _DWORD *v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r1
  unsigned int v10; // r0

  CollisionMgr_process((_BYTE *)(a1 + 648));
  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  FIELD_U32(a1, 7124) = sub_600B2FD4(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1);
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1108))(a1);
  sub_600B33DC(a1, v3);
  result = FIELD_U32(a1, 7092);
  if ( result == 2 )
  {
    v9 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v10 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v10 )
      v9 += 4 * v10;
    result = *(unsigned __int8 *)(*(_DWORD *)v9 + 28);
    if ( (result & 0x20) != 0 )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C82D58);
  }
  else if ( result == 1 )
  {
    sub_600AA114(a1);
    v5 = *(_DWORD **)(*(_DWORD *)v2 + 12);
    v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v6 )
      v5 += v6;
    if ( sub_60418548(*v5 + 4) )
      goto LABEL_9;
    v7 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v8 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v8 )
      v7 += 4 * v8;
    result = *(unsigned __int8 *)(*(_DWORD *)v7 + 28);
    if ( (result & 0x20) != 0 )
    {
LABEL_9:
      sub_600AA38C(a1);
      --FIELD_U32(a1, 8632);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1332))(a1);
      --FIELD_U32(a1, 7180);
      FIELD_U32(a1, 7092) = 2;
      return 2;
    }
  }
  return result;
}
