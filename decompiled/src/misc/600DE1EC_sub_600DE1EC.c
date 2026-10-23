/* sub_600DE1EC
 * address: 0x600DE1EC   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DE1EC(int a1, int a2, int a3, float a4, float a5, float a6)
{
  int v10; // r4
  _DWORD *v11; // r7
  int ResArchiveById; // r0
  int v13; // r1
  unsigned int v14; // r0
  int v15; // r1
  unsigned int v16; // r0
  int *v17; // r1
  unsigned int v18; // r0
  int result; // r0

  v10 = a1 + 7096;
  v11 = *(_DWORD **)(a1 + 7096);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  sub_60421938(v11, ResArchiveById, a2);
  v13 = *(_DWORD *)(*(_DWORD *)v10 + 12);
  v14 = *(_DWORD *)(*(_DWORD *)v10 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v10 + 8) > v14 )
    v13 += 4 * v14;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v13 + 4), a3);
  v15 = *(_DWORD *)(*(_DWORD *)v10 + 12);
  v16 = *(_DWORD *)(*(_DWORD *)v10 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v10 + 8) > v16 )
    v15 += 4 * v16;
  *(float *)(*(_DWORD *)v15 + 24) = a5;
  v17 = *(int **)(*(_DWORD *)v10 + 12);
  v18 = *(_DWORD *)(*(_DWORD *)v10 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v10 + 8) > v18 )
    v17 += v18;
  result = *v17;
  FIELD_F32(result, 20) = a6;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
