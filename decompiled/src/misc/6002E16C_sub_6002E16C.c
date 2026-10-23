/* sub_6002E16C
 * address: 0x6002E16C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002E16C(int result)
{
  int v1; // r4
  _BYTE *v2; // r6
  int v3; // r5
  int v4; // r8
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0

  v1 = result;
  FIELD_U8(result, 7433) = 1;
  FIELD_U32(result, 120) = 0;
  v2 = (_BYTE *)(result + 7428);
  LOBYTE(result) = FIELD_U8(result, 7428) + 1;
  *v2 = result;
  if ( FIELD_U8(v1, 7426) != 5 )
  {
    v3 = v1 + 7096;
    v4 = FIELD_U32(v1, 7380);
    sub_60421938(*(_DWORD **)(v1 + 7096), FIELD_U32(v1, 7100), (int)&dword_60C7F748);
    v5 = *(_DWORD *)(FIELD_U32(v1, 7096) + 12);
    v6 = *(_DWORD *)(FIELD_U32(v1, 7096) + 68);
    if ( *(_DWORD *)(FIELD_U32(v1, 7096) + 8) > v6 )
      v5 += 4 * v6;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
    v7 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    v8 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v8 )
      v7 += 4 * v8;
    *(_DWORD *)(*(_DWORD *)v7 + 24) = v4;
    FIELD_U8(v1, 7426) = 5;
    LOBYTE(result) = *v2;
  }
  result = (unsigned __int8)result;
  FIELD_U8(v1, 7427) = 0;
  if ( (unsigned __int8)result == 3 )
  {
    FIELD_U32(v1, 80) = 0;
    return 0;
  }
  return result;
}
