/* sub_602C3B08
 * address: 0x602C3B08   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C3B08(int a1)
{
  _DWORD *v1; // r0
  _BYTE *v2; // r4
  int v3; // r1
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int *v8; // r1
  unsigned int v9; // r0
  int result; // r0
  _DWORD v11[6]; // [sp+0h] [bp-18h] BYREF

  v2 = (_BYTE *)(a1 + 6304);
  v1 = *(_DWORD **)(a1 + 6304);
  v3 = *((_DWORD *)v2 - 1);
  v11[0] = &sead__SafeStringBase__vtable;
  v11[1] = "swim";
  sub_60421938(v1, v3, (int)v11);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v5 )
    v4 += 4 * v5;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 1);
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v7 )
    v6 += 4 * v7;
  *(_DWORD *)(*(_DWORD *)v6 + 24) = 1065353216;
  v8 = *(int **)(*(_DWORD *)v2 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v9 )
    v8 += v9;
  result = *v8;
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  v2[21] = 1;
  return result;
}
